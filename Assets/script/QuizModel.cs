using System.Collections.Generic;
using Newtonsoft.Json;

[System.Serializable]
public class PertanyaanData
{
    public List<KontenIsi> teksPertanyaan;
    public List<string> pilihan;
    public int jawabanBenarIndex;
}

[System.Serializable]
public class QuizData
{
    public string title;
    public List<PertanyaanData> daftarPertanyaan;
}

[System.Serializable]
public class RootQuizData
{
    public List<QuizData> data;
}
