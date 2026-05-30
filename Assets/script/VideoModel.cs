using System.Collections.Generic;
using Newtonsoft.Json;

[System.Serializable]
public class VideoData
{
    [JsonProperty("title")] 
    public string title;

    [JsonProperty("videoPath")] 
    public string videoPath; // Path video di folder Resources atau StreamingAssets
}

[System.Serializable]
public class RootVideoData
{
    public List<VideoData> data;
}
