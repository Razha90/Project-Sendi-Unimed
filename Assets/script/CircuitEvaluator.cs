using System.Collections.Generic;

public static class CircuitEvaluator
{
    public static bool Evaluate(string nodeId, Dictionary<string, bool> inputs, GateDef[] gates)
    {
        if (inputs.ContainsKey(nodeId)) return inputs[nodeId];

        var gate = System.Array.Find(gates, g => g.id == nodeId);
        if (gate == null) return false;

        switch (gate.type?.ToUpper())
        {
            case "AND":
                foreach (var i in gate.inputs)
                    if (!Evaluate(i, inputs, gates)) return false;
                return true;

            case "OR":
                foreach (var i in gate.inputs)
                    if (Evaluate(i, inputs, gates)) return true;
                return false;

            case "NOT":
                return (gate.inputs != null && gate.inputs.Length > 0)
                    && !Evaluate(gate.inputs[0], inputs, gates);

            case "NAND":
                foreach (var i in gate.inputs)
                    if (!Evaluate(i, inputs, gates)) return true;
                return false;

            case "NOR":
                foreach (var i in gate.inputs)
                    if (Evaluate(i, inputs, gates)) return false;
                return true;

            case "XOR":
                bool r = false;
                foreach (var i in gate.inputs) r ^= Evaluate(i, inputs, gates);
                return r;

            default:
                return false;
        }
    }

    public static Dictionary<string, bool> EvaluateAll(CircuitLevel level, Dictionary<string, bool> inputValues)
    {
        var results = new Dictionary<string, bool>(inputValues);
        if (level.gates != null)
            foreach (var g in level.gates)
                results[g.id] = Evaluate(g.id, inputValues, level.gates);
        return results;
    }

    public static bool CheckWin(CircuitLevel level, Dictionary<string, bool> inputValues)
    {
        var all = EvaluateAll(level, inputValues);
        foreach (var o in level.outputs)
        {
            bool val;
            if (!all.TryGetValue(o.source, out val)) return false;
            if (val != o.target) return false;
        }
        return true;
    }
}
