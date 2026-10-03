using UnityEngine;
using TMPro;
using DG.Tweening;

public class StartMenuAnimator : MonoBehaviour
{
    [Header("UI Elements")]
    [SerializeField] private RectTransform startButton;
    [SerializeField] private TextMeshProUGUI mulaiText;
    [SerializeField] private TextMeshProUGUI mariText;

    [Header("Fade-In on Start")]
    [SerializeField] private float fadeInDelay = 0.3f;

    private CanvasGroup canvasGroup;
    private int colorIndex;

    private static readonly Color[] MulaiColors = {
        new Color(1f, 0.93f, 0.2f),
        new Color(1f, 0.6f,  0.2f),
        new Color(0.35f, 1f, 0.55f),
        new Color(0.35f, 0.8f, 1f),
        new Color(1f, 0.45f, 0.85f),
    };

    private void Awake()
    {
        // Sembunyikan semua elemen dulu untuk fade-in
        canvasGroup = GetComponent<CanvasGroup>();
        if (canvasGroup == null) canvasGroup = gameObject.AddComponent<CanvasGroup>();
        canvasGroup.alpha = 0f;

        if (startButton != null) startButton.localScale = Vector3.one * 0.8f;
    }

    private void Start()
    {
        // Fade in seluruh canvas setelah delay kecil
        canvasGroup.DOFade(1f, 0.5f)
            .SetDelay(fadeInDelay)
            .SetEase(Ease.OutQuad)
            .OnComplete(StartIdleAnimations);

        // Tombol muncul dengan scale pop
        if (startButton != null)
        {
            startButton.DOScale(1f, 0.45f)
                .SetDelay(fadeInDelay + 0.15f)
                .SetEase(Ease.OutBack);
        }
    }

    private void StartIdleAnimations()
    {
        AnimateButton();
        AnimateMariText();
        AnimateMulaiText();
    }

    // Tombol: gentle float naik-turun saja, tidak bounce berlebihan
    private void AnimateButton()
    {
        if (startButton == null) return;

        float baseY = startButton.anchoredPosition.y;
        startButton.DOAnchorPosY(baseY + 10f, 1.2f)
            .SetEase(Ease.InOutSine)
            .SetLoops(-1, LoopType.Yoyo);
    }

    // "MARI BELAJAR": float pelan, tidak berputar
    private void AnimateMariText()
    {
        if (mariText == null) return;

        float baseY = mariText.rectTransform.anchoredPosition.y;
        mariText.rectTransform.DOAnchorPosY(baseY + 8f, 1.6f)
            .SetEase(Ease.InOutSine)
            .SetLoops(-1, LoopType.Yoyo);
    }

    // "MULAI": ganti warna pelan setiap 1.5 detik, tanpa scale pulse
    private void AnimateMulaiText()
    {
        if (mulaiText == null) return;
        colorIndex = 0;
        CycleColor();
    }

    private void CycleColor()
    {
        if (mulaiText == null) return;
        Color next = MulaiColors[colorIndex % MulaiColors.Length];
        colorIndex++;
        mulaiText.DOColor(next, 1.5f)
            .SetEase(Ease.InOutSine)
            .OnComplete(CycleColor);
    }

    private void OnDisable()
    {
        DOTween.Kill(canvasGroup);
        if (startButton != null) DOTween.Kill(startButton);
        if (mariText != null)   DOTween.Kill(mariText.rectTransform);
        if (mulaiText != null)  DOTween.Kill(mulaiText);
    }
}
