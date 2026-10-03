using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using Newtonsoft.Json;

public class CircuitGameManager : MonoBehaviour
{
    // ── Serialized refs (set in Inspector or auto-found) ──────────────────
    [Header("Canvas Root")]
    public RectTransform boardRoot;   // parent for all circuit UI
    public RectTransform headerRoot;  // header bar
    public RectTransform infoRoot;    // bottom info panel
    public RectTransform winPanel;    // win overlay

    [Header("Prefab-less config")]
    public TMP_FontAsset gameFont;

    // ── Runtime state ─────────────────────────────────────────────────────
    CircuitLevelRoot   _root;
    CircuitLevel       _level;
    int                _currentIndex;
    Dictionary<string,bool> _inputValues = new();

    // Live UI refs
    readonly Dictionary<string,Image>  _inputIndicators  = new();
    readonly Dictionary<string,Button> _inputButtons     = new();
    readonly Dictionary<string,Image>  _gateIndicators   = new();
    readonly Dictionary<string,Image>  _outputIndicators = new();
    readonly List<WireRef>             _wires            = new();

    // Wire helper
    struct WireRef { public Image img; public string sourceNodeId; }

    // Layout constants
    const float BOARD_W     = 1760f;
    const float BOARD_H     = 700f;
    const float INPUT_X     = -740f;
    const float OUTPUT_X    =  740f;
    const float GATE_W      = 140f;
    const float GATE_H      =  76f;
    const float NODE_R      =   50f;
    const float WIRE_THICK  =    5f;

    static readonly Color COL_ON        = new(0.18f, 0.88f, 0.44f);
    static readonly Color COL_OFF       = new(0.48f, 0.52f, 0.56f);
    static readonly Color COL_GATE_BG   = new(0.18f, 0.26f, 0.34f);
    static readonly Color COL_INPUT_ON  = new(0.08f, 0.72f, 0.84f);
    static readonly Color COL_INPUT_OFF = new(0.22f, 0.28f, 0.36f);
    static readonly Color COL_WIN_BG    = new(0.06f, 0.60f, 0.30f, 0.95f);
    static readonly Color COL_OUT_MATCH = new(0.18f, 0.88f, 0.44f);
    static readonly Color COL_OUT_MISS  = new(0.90f, 0.26f, 0.22f);

    // ── Bootstrap ─────────────────────────────────────────────────────────
    void Start()
    {
        var ta = Resources.Load<TextAsset>("data_circuit");
        if (ta == null) { Debug.LogError("data_circuit.json not found in Resources"); return; }
        _root = JsonConvert.DeserializeObject<CircuitLevelRoot>(ta.text);
        _currentIndex = PlayerPrefs.GetInt("CircuitLevel", 0);
        _currentIndex = Mathf.Clamp(_currentIndex, 0, _root.levels.Length - 1);
        LoadLevel(_currentIndex);
    }

    // ── Level load ────────────────────────────────────────────────────────
    void LoadLevel(int index)
    {
        _currentIndex = index;
        _level = _root.levels[index];
        PlayerPrefs.SetInt("CircuitLevel", index);

        // Reset input values
        _inputValues.Clear();
        foreach (var inp in _level.inputs)
            _inputValues[inp.id] = inp.initial;

        ClearBoard();
        BuildBoard();
        UpdateHeader();
        UpdateInfo();
        if (winPanel != null) winPanel.gameObject.SetActive(false);
        Evaluate();
    }

    void ClearBoard()
    {
        _inputIndicators.Clear();
        _inputButtons.Clear();
        _gateIndicators.Clear();
        _outputIndicators.Clear();
        _wires.Clear();
        if (boardRoot == null) return;
        for (int i = boardRoot.childCount - 1; i >= 0; i--)
            Destroy(boardRoot.GetChild(i).gameObject);
    }

    // ── Build circuit UI ──────────────────────────────────────────────────
    void BuildBoard()
    {
        if (boardRoot == null) return;

        // Pre-compute y position per row
        int numRows = MaxRow(_level) + 1;
        float rowSpacing = Mathf.Min(BOARD_H / numRows, 200f);
        float topY = (numRows - 1) * rowSpacing * 0.5f;

        float GetY(float row) => topY - row * rowSpacing;
        float GetGateX(int col)
        {
            int maxCol = MaxGateCol(_level);
            float span = OUTPUT_X - INPUT_X - 400f;
            float step = span / (maxCol + 1);
            return INPUT_X + 200f + col * step;
        }

        // Cache node y positions (inputs)
        var nodeY = new Dictionary<string, float>();
        foreach (var inp in _level.inputs)
            nodeY[inp.id] = GetY(inp.row);

        // Compute gate y recursively
        float GateY(string id)
        {
            if (nodeY.ContainsKey(id)) return nodeY[id];
            var gate = System.Array.Find(_level.gates, g => g.id == id);
            if (gate == null) return 0f;
            float sum = 0f;
            foreach (var inp in gate.inputs) sum += GateY(inp);
            float y = sum / gate.inputs.Length;
            nodeY[id] = y;
            return y;
        }
        foreach (var g in _level.gates) GateY(g.id);

        // Wire layer (rendered first = behind everything)
        var wireLayer = MakeRT("WireLayer", boardRoot);
        StretchFill(wireLayer);

        // ── Draw inputs ──
        foreach (var inp in _level.inputs)
        {
            float x = INPUT_X;
            float y = nodeY[inp.id];
            BuildInputNode(boardRoot, inp, x, y);
        }

        // ── Draw gates ──
        foreach (var gate in _level.gates)
        {
            float x = GetGateX(gate.column);
            float y = nodeY[gate.id];
            BuildGate(boardRoot, gate, x, y);
        }

        // ── Draw outputs ──
        for (int i = 0; i < _level.outputs.Length; i++)
        {
            var outp = _level.outputs[i];
            float y = nodeY.ContainsKey(outp.source) ? nodeY[outp.source] : 0f;
            BuildOutputNode(boardRoot, outp, OUTPUT_X, y);
        }

        // ── Draw wires ──
        // Input → gate input port
        foreach (var gate in _level.gates)
        {
            float gx = GetGateX(gate.column);
            float gy = nodeY[gate.id];
            foreach (var srcId in gate.inputs)
            {
                float sy = nodeY.ContainsKey(srcId) ? nodeY[srcId] : 0f;
                float sx = IsInput(srcId) ? INPUT_X + NODE_R * 0.5f
                           : GetGateX(System.Array.Find(_level.gates, g => g.id == srcId)?.column ?? 1) + GATE_W * 0.5f;
                DrawStepWire(wireLayer, new Vector2(sx, sy), new Vector2(gx - GATE_W * 0.5f, gy), srcId);
            }
        }
        // Gate → output
        foreach (var outp in _level.outputs)
        {
            float oy = nodeY.ContainsKey(outp.source) ? nodeY[outp.source] : 0f;
            var srcGate = System.Array.Find(_level.gates, g => g.id == outp.source);
            float sx = srcGate != null ? GetGateX(srcGate.column) + GATE_W * 0.5f : INPUT_X + NODE_R * 0.5f;
            DrawStepWire(wireLayer, new Vector2(sx, oy), new Vector2(OUTPUT_X - NODE_R * 0.5f, oy), outp.source);
        }
    }

    void BuildInputNode(RectTransform parent, InputDef inp, float x, float y)
    {
        var go = new GameObject("Input_" + inp.id);
        var rt = go.AddComponent<RectTransform>();
        rt.SetParent(parent, false);
        rt.anchoredPosition = new Vector2(x, y);
        rt.sizeDelta = new Vector2(NODE_R * 2, NODE_R * 2);

        var img = go.AddComponent<Image>();
        img.color = _inputValues[inp.id] ? COL_INPUT_ON : COL_INPUT_OFF;

        var btn = go.AddComponent<Button>();
        string capturedId = inp.id;
        btn.onClick.AddListener(() => ToggleInput(capturedId));

        // Round via sprite — fallback: just solid rect
        img.raycastTarget = true;

        // Label inside
        var labelGO = new GameObject("Label");
        var labelRT = labelGO.AddComponent<RectTransform>();
        labelRT.SetParent(rt, false);
        StretchFill(labelRT);
        var tmp = labelGO.AddComponent<TextMeshProUGUI>();
        tmp.text = inp.label;
        tmp.fontSize = 28;
        tmp.fontStyle = FontStyles.Bold;
        tmp.color = Color.white;
        tmp.alignment = TextAlignmentOptions.Center;
        if (gameFont != null) tmp.font = gameFont;

        // On/Off dot indicator (small dot at right edge)
        var dotGO = new GameObject("Dot");
        var dotRT = dotGO.AddComponent<RectTransform>();
        dotRT.SetParent(rt, false);
        dotRT.anchorMin = dotRT.anchorMax = new Vector2(1f, 0.5f);
        dotRT.pivot = new Vector2(0f, 0.5f);
        dotRT.anchoredPosition = new Vector2(6f, 0f);
        dotRT.sizeDelta = new Vector2(14f, 14f);
        var dotImg = dotGO.AddComponent<Image>();
        dotImg.color = _inputValues[inp.id] ? COL_ON : COL_OFF;

        _inputIndicators[inp.id] = img;
        _inputButtons[inp.id] = btn;
    }

    void BuildGate(RectTransform parent, GateDef gate, float x, float y)
    {
        var go = new GameObject("Gate_" + gate.id);
        var rt = go.AddComponent<RectTransform>();
        rt.SetParent(parent, false);
        rt.anchoredPosition = new Vector2(x, y);
        rt.sizeDelta = new Vector2(GATE_W, GATE_H);

        var img = go.AddComponent<Image>();
        img.color = COL_GATE_BG;

        // Gate type label
        var labelGO = new GameObject("Label");
        var labelRT = labelGO.AddComponent<RectTransform>();
        labelRT.SetParent(rt, false);
        labelRT.anchorMin = Vector2.zero; labelRT.anchorMax = Vector2.one;
        labelRT.offsetMin = new Vector2(0, 10); labelRT.offsetMax = new Vector2(-20, 0);
        var tmp = labelGO.AddComponent<TextMeshProUGUI>();
        tmp.text = gate.type;
        tmp.fontSize = 24;
        tmp.fontStyle = FontStyles.Bold;
        tmp.color = Color.white;
        tmp.alignment = TextAlignmentOptions.Center;
        if (gameFont != null) tmp.font = gameFont;

        // Output value indicator dot (right edge)
        var dotGO = new GameObject("OutDot");
        var dotRT = dotGO.AddComponent<RectTransform>();
        dotRT.SetParent(rt, false);
        dotRT.anchorMin = dotRT.anchorMax = new Vector2(1f, 0.5f);
        dotRT.pivot = new Vector2(1f, 0.5f);
        dotRT.anchoredPosition = new Vector2(-4f, 0f);
        dotRT.sizeDelta = new Vector2(14f, 14f);
        var dotImg = dotGO.AddComponent<Image>();
        dotImg.color = COL_OFF;

        _gateIndicators[gate.id] = dotImg;
    }

    void BuildOutputNode(RectTransform parent, OutputDef outp, float x, float y)
    {
        var go = new GameObject("Output_" + outp.id);
        var rt = go.AddComponent<RectTransform>();
        rt.SetParent(parent, false);
        rt.anchoredPosition = new Vector2(x, y);
        rt.sizeDelta = new Vector2(NODE_R * 2, NODE_R * 2);

        var img = go.AddComponent<Image>();
        img.color = COL_OUT_MISS;
        _outputIndicators[outp.id] = img;

        // Target indicator above output
        var targetGO = new GameObject("Target");
        var targetRT = targetGO.AddComponent<RectTransform>();
        targetRT.SetParent(rt, false);
        targetRT.anchorMin = targetRT.anchorMax = new Vector2(0.5f, 1f);
        targetRT.pivot = new Vector2(0.5f, 0f);
        targetRT.anchoredPosition = new Vector2(0f, 8f);
        targetRT.sizeDelta = new Vector2(140f, 30f);
        var tTMP = targetGO.AddComponent<TextMeshProUGUI>();
        tTMP.text = "TARGET: " + (outp.target ? "ON" : "OFF");
        tTMP.fontSize = 18;
        tTMP.fontStyle = FontStyles.Bold;
        tTMP.color = new Color(1f, 0.92f, 0.4f);
        tTMP.alignment = TextAlignmentOptions.Center;
        tTMP.enableWordWrapping = false;
        if (gameFont != null) tTMP.font = gameFont;
    }

    // ── Wire drawing ──────────────────────────────────────────────────────
    void DrawStepWire(RectTransform parent, Vector2 from, Vector2 to, string sourceId)
    {
        float midX = (from.x + to.x) * 0.5f;
        bool active = _inputValues.ContainsKey(sourceId)
            ? _inputValues[sourceId]
            : false;

        WireSeg(parent, from,                     new Vector2(midX, from.y), sourceId);
        if (Mathf.Abs(from.y - to.y) > 2f)
            WireSeg(parent, new Vector2(midX, from.y), new Vector2(midX, to.y),   sourceId);
        WireSeg(parent, new Vector2(midX, to.y),  to,                              sourceId);
    }

    void WireSeg(RectTransform parent, Vector2 a, Vector2 b, string sourceId)
    {
        float dx = b.x - a.x, dy = b.y - a.y;
        if (Mathf.Abs(dx) < 1f && Mathf.Abs(dy) < 1f) return;

        var go = new GameObject("Wire");
        var rt = go.AddComponent<RectTransform>();
        rt.SetParent(parent, false);

        bool horiz = Mathf.Abs(dx) >= Mathf.Abs(dy);
        rt.anchoredPosition = (a + b) * 0.5f;
        rt.sizeDelta = horiz
            ? new Vector2(Mathf.Abs(dx) + WIRE_THICK, WIRE_THICK)
            : new Vector2(WIRE_THICK, Mathf.Abs(dy) + WIRE_THICK);

        var img = go.AddComponent<Image>();
        img.color = COL_OFF;
        _wires.Add(new WireRef { img = img, sourceNodeId = sourceId });
    }

    // ── Evaluate & update visuals ─────────────────────────────────────────
    void ToggleInput(string id)
    {
        if (SettingsManager.Instance != null) SettingsManager.Instance.PlayClickSound();
        _inputValues[id] = !_inputValues[id];
        Evaluate();
    }

    void Evaluate()
    {
        if (_level == null) return;
        var all = CircuitEvaluator.EvaluateAll(_level, _inputValues);

        // Update input node visuals
        foreach (var inp in _level.inputs)
        {
            bool val = _inputValues[inp.id];
            if (_inputIndicators.TryGetValue(inp.id, out var img))
                img.color = val ? COL_INPUT_ON : COL_INPUT_OFF;
        }

        // Update gate output dots
        foreach (var gate in _level.gates)
        {
            bool val = all.ContainsKey(gate.id) && all[gate.id];
            if (_gateIndicators.TryGetValue(gate.id, out var dot))
                dot.color = val ? COL_ON : COL_OFF;
        }

        // Update output indicators
        bool allMatch = true;
        foreach (var outp in _level.outputs)
        {
            bool val = all.ContainsKey(outp.source) && all[outp.source];
            if (_outputIndicators.TryGetValue(outp.id, out var img))
                img.color = val ? COL_OUT_MATCH : COL_OUT_MISS;
            if (val != outp.target) allMatch = false;
        }

        // Update wire colors
        foreach (var w in _wires)
        {
            bool val = all.ContainsKey(w.sourceNodeId) && all[w.sourceNodeId];
            w.img.color = val ? COL_ON : COL_OFF;
        }

        if (allMatch) StartCoroutine(ShowWin());
    }

    IEnumerator ShowWin()
    {
        yield return new WaitForSeconds(0.6f);
        if (winPanel != null)
        {
            winPanel.gameObject.SetActive(true);
            RefreshWinPanel(_currentIndex >= _root.levels.Length - 1);
        }
        int next = Mathf.Min(_currentIndex + 1, _root.levels.Length - 1);
        PlayerPrefs.SetInt("CircuitBestLevel", Mathf.Max(PlayerPrefs.GetInt("CircuitBestLevel", 0), next));
        PlayerPrefs.Save();
    }

    void RefreshWinPanel(bool isFinal)
    {
        if (winPanel == null) return;
        var card = winPanel.Find("WinCard");
        if (card == null) return;

        var iconT = card.Find("Icon")?.GetComponent<TextMeshProUGUI>();
        var subT  = card.Find("Sub")?.GetComponent<TextMeshProUGUI>();
        var nextImg = card.Find("BtnWinNext")?.GetComponent<Image>();
        var nextT   = card.Find("BtnWinNext/T")?.GetComponent<TextMeshProUGUI>();

        if (iconT != null)
            iconT.text = isFinal ? "SEMUA LEVEL SELESAI!" : "LEVEL SELESAI!";
        if (subT != null)
            subT.text = isFinal
                ? "Luar biasa! Kamu telah menguasai semua gerbang logika!"
                : "Kamu berhasil menyalakan lampu!";
        if (nextImg != null)
            nextImg.color = isFinal
                ? new Color(0.80f, 0.42f, 0.06f, 1f)
                : new Color(0.18f, 0.72f, 0.38f, 1f);
        if (nextT != null)
            nextT.text = isFinal ? "KEMBALI KE MENU UTAMA" : "LEVEL BERIKUTNYA";
    }

    // ── Level navigation ──────────────────────────────────────────────────
    public void NextLevel()
    {
        if (_currentIndex < _root.levels.Length - 1)
            LoadLevel(_currentIndex + 1);
        else
            GoBackToMenu();
    }

    public void PrevLevel()
    {
        if (_currentIndex > 0)
            LoadLevel(_currentIndex - 1);
    }

    public void RetryLevel()
    {
        LoadLevel(_currentIndex);
    }

    public void GoBackToMenu()
    {
        var lm = FindFirstObjectByType<LevelManager>();
        if (lm != null) lm.GoBack();
    }

    // ── Header / Info updates ─────────────────────────────────────────────
    void UpdateHeader()
    {
        if (headerRoot == null) return;
        var tmps = headerRoot.GetComponentsInChildren<TextMeshProUGUI>();
        foreach (var t in tmps)
        {
            if (t.gameObject.name == "LevelNum")
                t.text = $"Level {_level.id} / {_root.levels.Length}";
            if (t.gameObject.name == "LevelTitle")
                t.text = _level.title;
        }
    }

    void UpdateInfo()
    {
        if (infoRoot == null) return;
        var tmps = infoRoot.GetComponentsInChildren<TextMeshProUGUI>();
        foreach (var t in tmps)
        {
            if (t.gameObject.name == "Description") t.text = _level.description;
            if (t.gameObject.name == "Hint")        t.text = "Petunjuk: " + _level.hint;
        }
    }

    // ── Utility ───────────────────────────────────────────────────────────
    int MaxRow(CircuitLevel lvl)
    {
        int m = 0;
        foreach (var i in lvl.inputs) if (i.row > m) m = i.row;
        return m;
    }

    int MaxGateCol(CircuitLevel lvl)
    {
        int m = 0;
        if (lvl.gates != null)
            foreach (var g in lvl.gates) if (g.column > m) m = g.column;
        return m;
    }

    bool IsInput(string id)
    {
        foreach (var i in _level.inputs) if (i.id == id) return true;
        return false;
    }

    RectTransform MakeRT(string name, RectTransform parent)
    {
        var go = new GameObject(name);
        var rt = go.AddComponent<RectTransform>();
        rt.SetParent(parent, false);
        return rt;
    }

    void StretchFill(RectTransform rt)
    {
        rt.anchorMin = Vector2.zero; rt.anchorMax = Vector2.one;
        rt.offsetMin = Vector2.zero; rt.offsetMax = Vector2.zero;
    }
}
