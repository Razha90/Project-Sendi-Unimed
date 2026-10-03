using Newtonsoft.Json;

[System.Serializable]
public class CircuitLevelRoot
{
    [JsonProperty("levels")] public CircuitLevel[] levels;
}

[System.Serializable]
public class CircuitLevel
{
    [JsonProperty("id")]          public int id;
    [JsonProperty("title")]       public string title;
    [JsonProperty("description")] public string description;
    [JsonProperty("hint")]        public string hint;
    [JsonProperty("inputs")]      public InputDef[] inputs;
    [JsonProperty("gates")]       public GateDef[] gates;
    [JsonProperty("outputs")]     public OutputDef[] outputs;
}

[System.Serializable]
public class InputDef
{
    [JsonProperty("id")]      public string id;
    [JsonProperty("label")]   public string label;
    [JsonProperty("initial")] public bool initial;
    [JsonProperty("row")]     public int row;
}

[System.Serializable]
public class GateDef
{
    [JsonProperty("id")]     public string id;
    [JsonProperty("type")]   public string type;
    [JsonProperty("inputs")] public string[] inputs;
    [JsonProperty("column")] public int column;
}

[System.Serializable]
public class OutputDef
{
    [JsonProperty("id")]     public string id;
    [JsonProperty("source")] public string source;
    [JsonProperty("target")] public bool target;
}
