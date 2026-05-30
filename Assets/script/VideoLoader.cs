using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using Newtonsoft.Json;
using UnityEngine.Video;
using UnityEngine.EventSystems;

public class VideoLoader : MonoBehaviour
{
    [Header("UI List References")]
    [SerializeField] private GameObject prefabTombolVideo;
    [SerializeField] private Transform containerListVideo; 

    [Header("Video Player References")]
    [SerializeField] private GameObject panelVideoOverlay; 
    [SerializeField] private TMP_Text txtJudulVideo;
    [SerializeField] private VideoPlayer videoPlayer; // Komponen VideoPlayer Unity
    [SerializeField] private GameObject tombolPlay;
    [SerializeField] private GameObject tombolPause;

    [Header("Volume Controls")]
    [SerializeField] private Slider sliderVolume;
    [SerializeField] private TMP_Text txtIndikatorVolume;

    [Header("Timeline Video")]
    [SerializeField] private Slider sliderWaktuVideo;
    [SerializeField] private TMP_Text txtWaktuBerjalan;
    [SerializeField] private TMP_Text txtWaktuTotal;
    
    private bool sedangDigeserTimeline = false;

    [Header("Auto-Hide UI")]
    [SerializeField] private GameObject panelKontrolAtas;
    [SerializeField] private GameObject panelKontrolBawah;
    [SerializeField] private float waktuSembunyiOtomatis = 3f;
    private float timerSembunyiUI = 0f;
    private bool isUIKontrolTampil = false;

    [Header("Status Video")]
    [SerializeField] private Color warnaSelesai = new Color(0.2f, 0.8f, 0.2f); // Warna hijau untuk video yang sudah ditonton
    private List<VideoData> listVideoSelesai = new List<VideoData>();
    private Dictionary<VideoData, Image> mapTombolVideo = new Dictionary<VideoData, Image>();
    
    private RootVideoData dataBesarVideo;
    private VideoData videoAktif;

    private void Start()
    {
        // Memastikan panel video tertutup saat mulai
        if (panelVideoOverlay != null)
        {
            panelVideoOverlay.SetActive(false);
        }

        if (sliderVolume != null)
        {
            sliderVolume.onValueChanged.AddListener(OnVolumeSliderChanged);
            sliderVolume.value = 1f; // Set default ke 100%
        }

        if (sliderWaktuVideo != null)
        {
            // Tambahkan event ketika slider timeline digeser oleh user
            sliderWaktuVideo.onValueChanged.AddListener(GeserWaktuVideo);

            // Tambahkan sistem deteksi agar slider tidak loncat saat ditahan (drag)
            EventTrigger trigger = sliderWaktuVideo.gameObject.GetComponent<EventTrigger>();
            if (trigger == null) trigger = sliderWaktuVideo.gameObject.AddComponent<EventTrigger>();

            EventTrigger.Entry entryDown = new EventTrigger.Entry();
            entryDown.eventID = EventTriggerType.PointerDown;
            entryDown.callback.AddListener((data) => { sedangDigeserTimeline = true; });
            trigger.triggers.Add(entryDown);

            EventTrigger.Entry entryUp = new EventTrigger.Entry();
            entryUp.eventID = EventTriggerType.PointerUp;
            entryUp.callback.AddListener((data) => { sedangDigeserTimeline = false; });
            trigger.triggers.Add(entryUp);
        }

        MemuatDataJSON();
        GenerateListVideoUtama();
    }

    private void MemuatDataJSON()
    {
        dataBesarVideo = null;

        TextAsset jsonFile = Resources.Load<TextAsset>("data_video"); // File JSON untuk data video

        if (jsonFile != null)
        {
            string isiTextJSON = jsonFile.text;
            Debug.Log("Berhasil memuat JSON data_video:\n" + isiTextJSON);
            dataBesarVideo = JsonConvert.DeserializeObject<RootVideoData>(isiTextJSON);
            Resources.UnloadAsset(jsonFile);
        }
        else
        {
            Debug.LogWarning("Gagal memuat file JSON! Pastikan file bernama 'data_video.json' berada di folder Assets/Resources/");
        }
    }

    private void GenerateListVideoUtama()
    {
        foreach (Transform child in containerListVideo) Destroy(child.gameObject);
        mapTombolVideo.Clear(); // Bersihkan referensi tombol sebelumnya

        if (dataBesarVideo == null || dataBesarVideo.data == null) return;

        foreach (VideoData video in dataBesarVideo.data)
        {
            VideoData videoSaatIni = video; // Menghindari bug closure
            GameObject tombolBaru = Instantiate(prefabTombolVideo, containerListVideo);
            
            TMP_Text txtTombol = tombolBaru.GetComponentInChildren<TMP_Text>();
            if (txtTombol != null)
            {
                txtTombol.text = videoSaatIni.title;
            }

            // Simpan referensi Image tombol dan ubah warnanya jika video sudah pernah selesai ditonton
            Image imgTombol = tombolBaru.GetComponent<Image>();
            if (imgTombol != null)
            {
                mapTombolVideo[videoSaatIni] = imgTombol;
                
                if (listVideoSelesai.Contains(videoSaatIni))
                {
                    imgTombol.color = warnaSelesai;
                }
            }

            Button btn = tombolBaru.GetComponent<Button>();
            if (btn != null)
            {
                btn.onClick.AddListener(() => BukaVideo(videoSaatIni));
            }
        }

        // Pastikan tampilan list video kembali ke paling atas
        ScrollRect scrollRect = containerListVideo.GetComponentInParent<ScrollRect>();
        if (scrollRect != null)
        {
            Canvas.ForceUpdateCanvases();
            scrollRect.verticalNormalizedPosition = 1f;
        }
    }

    private void BukaVideo(VideoData videoTerpilih)
    {
        videoAktif = videoTerpilih;

        if (panelVideoOverlay != null)
        {
            panelVideoOverlay.SetActive(true);
        }

        if (txtJudulVideo != null)
        {
            txtJudulVideo.text = videoAktif.title;
        }

        if (videoPlayer != null && !string.IsNullOrEmpty(videoAktif.videoPath))
        {
            // Memuat VideoClip dari Resources berdasarkan videoPath
            VideoClip clip = Resources.Load<VideoClip>(videoAktif.videoPath);
            if (clip != null)
            {
                videoPlayer.clip = clip;
                videoPlayer.Play();
                UpdateTombolPlayPause(true); // Saat video diputar, munculkan tombol Pause (isPlaying = true)
            }
            else
            {
                Debug.LogWarning("Gagal memuat video clip: " + videoAktif.videoPath + " di folder Resources.");
            }
        }
        else
        {
            Debug.LogWarning("Video Player tidak di-assign atau path video kosong!");
        }

        // Tandai video sebagai selesai ditonton (Bisa disesuaikan agar berjalan saat video benar-benar selesai)
        TandaiVideoSelesai(videoAktif);

        // Awal buka video, sembunyikan kontrol UI sesuai permintaan
        SembunyikanKontrolUI();

        // Matikan musik latar saat masuk ke sesi video
        if (SettingsManager.Instance != null)
        {
            SettingsManager.Instance.MuteMusic(true);
        }
    }
    
    public void TandaiVideoSelesai(VideoData video)
    {
        if (!listVideoSelesai.Contains(video))
        {
            listVideoSelesai.Add(video);
            if (mapTombolVideo.ContainsKey(video) && mapTombolVideo[video] != null)
            {
                mapTombolVideo[video].color = warnaSelesai;
            }
        }
    }

    public void TutupPanelVideo()
    {
        if (panelVideoOverlay != null)
        {
            panelVideoOverlay.SetActive(false);
        }

        // Hentikan video saat panel ditutup
        if (videoPlayer != null)
        {
            videoPlayer.Stop();
        }

        // Hidupkan kembali musik latar saat keluar dari sesi video
        if (SettingsManager.Instance != null)
        {
            SettingsManager.Instance.MuteMusic(false);
        }
    }

    public void PlayVideo()
    {
        if (videoPlayer != null)
        {
            videoPlayer.Play();
            UpdateTombolPlayPause(true);
        }
    }

    public void PauseVideo()
    {
        if (videoPlayer != null)
        {
            videoPlayer.Pause();
            UpdateTombolPlayPause(false);
        }
    }

    private void UpdateTombolPlayPause(bool isPlaying)
    {
        if (tombolPlay != null) tombolPlay.SetActive(!isPlaying);
        if (tombolPause != null) tombolPause.SetActive(isPlaying);
    }

    public void OnVolumeSliderChanged(float value)
    {
        if (videoPlayer != null)
        {
            // Set volume audio track pertama (index 0)
            videoPlayer.SetDirectAudioVolume(0, value);
        }

        if (txtIndikatorVolume != null)
        {
            int persentase = Mathf.RoundToInt(value * 100);
            txtIndikatorVolume.text = persentase.ToString() + "%";
        }
    }

    public void SetVolumeMaksimal()
    {
        if (sliderVolume != null)
        {
            sliderVolume.value = 1f;
        }
        // Paksa panggil fungsi agar video player dan teks pasti terupdate
        OnVolumeSliderChanged(1f);
    }

    public void SetVolumeMute()
    {
        if (sliderVolume != null)
        {
            sliderVolume.value = 0f;
        }
        // Paksa panggil fungsi agar video player dan teks pasti terupdate
        OnVolumeSliderChanged(0f);
    }

    private void Update()
    {
        // Pastikan video player aktif dan sudah siap dimainkan
        if (videoPlayer != null && videoPlayer.isPrepared && panelVideoOverlay.activeSelf)
        {
            UpdateTeksWaktu();

            // Update posisi slider HANYA JIKA user TIDAK sedang menahannya
            if (sliderWaktuVideo != null && !sedangDigeserTimeline)
            {
                sliderWaktuVideo.SetValueWithoutNotify((float)(videoPlayer.time / videoPlayer.length));
            }

            // --- Logika Auto-Hide UI ---
            if (isUIKontrolTampil)
            {
                // Reset timer HANYA jika sedang geser slider (menghindari error New Input System)
                // Jika ingin mereset saat disentuh, fungsi TampilkanKontrolUI() yang dipanggil oleh tombol transparan sudah meresetnya secara otomatis.
                if (sedangDigeserTimeline)
                {
                    timerSembunyiUI = waktuSembunyiOtomatis;
                }

                timerSembunyiUI -= Time.deltaTime;

                if (timerSembunyiUI <= 0f)
                {
                    SembunyikanKontrolUI();
                }
            }
        }
    }

    public void TampilkanAtauSembunyikanKontrolUI()
    {
        if (isUIKontrolTampil)
        {
            SembunyikanKontrolUI();
        }
        else
        {
            TampilkanKontrolUI();
        }
    }

    public void TampilkanKontrolUI()
    {
        if (panelKontrolAtas != null) panelKontrolAtas.SetActive(true);
        if (panelKontrolBawah != null) panelKontrolBawah.SetActive(true);
        isUIKontrolTampil = true;
        timerSembunyiUI = waktuSembunyiOtomatis;
    }

    public void SembunyikanKontrolUI()
    {
        if (panelKontrolAtas != null) panelKontrolAtas.SetActive(false);
        if (panelKontrolBawah != null) panelKontrolBawah.SetActive(false);
        isUIKontrolTampil = false;
    }

    private void UpdateTeksWaktu()
    {
        if (txtWaktuBerjalan != null)
        {
            txtWaktuBerjalan.text = FormatWaktu(videoPlayer.time);
        }
        
        if (txtWaktuTotal != null)
        {
            txtWaktuTotal.text = FormatWaktu(videoPlayer.length);
        }
    }

    private string FormatWaktu(double waktuDalamDetik)
    {
        int menit = Mathf.FloorToInt((float)waktuDalamDetik / 60);
        int detik = Mathf.FloorToInt((float)waktuDalamDetik % 60);
        return string.Format("{0:00}:{1:00}", menit, detik);
    }

    public void GeserWaktuVideo(float nilaiSlider)
    {
        if (videoPlayer != null && videoPlayer.isPrepared)
        {
            videoPlayer.time = nilaiSlider * videoPlayer.length;
            UpdateTeksWaktu();
        }
    }

    public void SkipMaju10Detik()
    {
        if (videoPlayer != null && videoPlayer.isPrepared)
        {
            videoPlayer.time = Mathf.Clamp((float)videoPlayer.time + 10f, 0, (float)videoPlayer.length);
        }
    }

    public void SkipMundur10Detik()
    {
        if (videoPlayer != null && videoPlayer.isPrepared)
        {
            videoPlayer.time = Mathf.Clamp((float)videoPlayer.time - 10f, 0, (float)videoPlayer.length);
        }
    }
}
