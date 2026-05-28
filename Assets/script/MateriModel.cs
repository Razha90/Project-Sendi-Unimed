using System.Collections.Generic;
using Newtonsoft.Json;

[System.Serializable]
public class KontenIsi
{
    public string key;
    public string text;
    public string caption; // Tambahan untuk keterangan gambar
}

[System.Serializable]
public class HalamanObject
{
    public string title;
    public List<KontenIsi> isi;
}

[System.Serializable]
public class MateriData
{
    [JsonProperty("titile")] 
    public string title;

    [JsonProperty("object")] 
    public List<HalamanObject> daftarHalaman; 
}

[System.Serializable]
public class RootMateriData
{
    public List<MateriData> data;
}