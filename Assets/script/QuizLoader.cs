using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using Newtonsoft.Json;

public class QuizLoader : MonoBehaviour
{
    [Header("UI List Kuis Utama")]
    [SerializeField] private GameObject prefabTombolMenuKuis;
    [SerializeField] private Transform containerListMenuKuis; 

    [Header("Halaman Kuis References")]
    [SerializeField] private GameObject panelKuisOverlay; 
    [SerializeField] private TMP_Text txtJudulKuis;
    [SerializeField] private GameObject prefabTeksPertanyaan;
    [SerializeField] private GameObject prefabGambarKonten; // Prefab untuk Gambar
    [SerializeField] private GameObject prefabCaptionKonten; // Prefab khusus untuk Caption
    [SerializeField] private Transform containerPilihanJawaban;
    [SerializeField] private GameObject prefabTogglePilihan; // Diganti dari Button menjadi Toggle
    [SerializeField] private Button btnKonfirmasi; // Tombol untuk men-submit jawaban

    [Header("Panel Feedback (Benar/Salah)")]
    [SerializeField] private GameObject panelFeedback;
    [SerializeField] private TMP_Text txtFeedbackPesan;
    [SerializeField] private Image imgBackgroundFeedback;
    [SerializeField] private Button btnLanjutKuis;
    [SerializeField] private Color warnaBenar = new Color(0.2f, 0.8f, 0.2f);
    [SerializeField] private Color warnaSalah = new Color(0.8f, 0.2f, 0.2f);

    [Header("Panel Selesai Kuis")]
    [SerializeField] private GameObject panelSelesaiKuis;
    [SerializeField] private TMP_Text txtSkorAkhir;

    [Header("SFX Kuis")]
    [SerializeField] private AudioClip sfxFeedbackBenar;
    [SerializeField] private AudioClip sfxFeedbackSalah;
    [SerializeField] private AudioClip sfxSelesaiKuis;

    private RootQuizData dataBesarKuis;
    private QuizData kuisAktif;
    private int indexPertanyaanSaatIni = 0;
    private int jumlahBenar = 0;

    private ToggleGroup toggleGroupPilihan;
    private int indexJawabanTerpilih = -1;

    private void Start()
    {
        if (panelKuisOverlay != null) panelKuisOverlay.SetActive(false);
        if (panelSelesaiKuis != null) panelSelesaiKuis.SetActive(false);
        if (panelFeedback != null) panelFeedback.SetActive(false);

        // Memastikan ada ToggleGroup pada container untuk mengelompokkan toggle
        if (containerPilihanJawaban != null)
        {
            toggleGroupPilihan = containerPilihanJawaban.GetComponent<ToggleGroup>();
            if (toggleGroupPilihan == null)
            {
                toggleGroupPilihan = containerPilihanJawaban.gameObject.AddComponent<ToggleGroup>();
            }
            toggleGroupPilihan.allowSwitchOff = true; // Izinkan semua mati di awal agar tidak ada yang tercentang otomatis
        }

        // Mendaftarkan event pada tombol baru
        if (btnKonfirmasi != null) btnKonfirmasi.onClick.AddListener(KonfirmasiJawaban);
        if (btnLanjutKuis != null) btnLanjutKuis.onClick.AddListener(LanjutKeSoalBerikutnya);

        MemuatDataJSON();
        GenerateListKuisUtama();
    }

    private void MemuatDataJSON()
    {
        dataBesarKuis = null;
        TextAsset jsonFile = Resources.Load<TextAsset>("data_quiz");

        if (jsonFile != null)
        {
            dataBesarKuis = JsonConvert.DeserializeObject<RootQuizData>(jsonFile.text);
            Resources.UnloadAsset(jsonFile);
        }
        else
        {
            Debug.LogError("Gagal memuat data_quiz.json! Pastikan ada di dalam Assets/Resources");
        }
    }

    private void GenerateListKuisUtama()
    {
        if (containerListMenuKuis == null) return;
        
        foreach (Transform child in containerListMenuKuis) Destroy(child.gameObject);

        if (dataBesarKuis == null || dataBesarKuis.data == null) return;

        foreach (QuizData kuis in dataBesarKuis.data)
        {
            QuizData kuisSaatIni = kuis; 
            GameObject tombolBaru = Instantiate(prefabTombolMenuKuis, containerListMenuKuis);
            
            TMP_Text[] teksTombol = tombolBaru.GetComponentsInChildren<TMP_Text>();
            int skorTersimpan = PlayerPrefs.GetInt("QuizScore_" + kuisSaatIni.title, 0);

            if (teksTombol.Length > 1)
            {
                teksTombol[0].text = kuisSaatIni.title;
                teksTombol[1].text = "Skor: " + skorTersimpan;
            }
            else if (teksTombol.Length == 1)
            {
                teksTombol[0].text = kuisSaatIni.title + "\n<size=80%>Skor: " + skorTersimpan + "</size>";
            }

            Button btn = tombolBaru.GetComponent<Button>();
            if (btn != null)
            {
                btn.interactable = true; // Paksa selalu aktif agar tidak terkunci
                btn.onClick.AddListener(() => MulaiKuis(kuisSaatIni));

                // Ubah warna tombol menjadi hijau (warnaBenar) jika skor 100
                if (skorTersimpan >= 100)
                {
                    Image btnImage = tombolBaru.GetComponent<Image>();
                    if (btnImage != null)
                    {
                        btnImage.color = warnaBenar;
                    }
                }
            }
        }
        
        ScrollRect scrollRect = containerListMenuKuis.GetComponentInParent<ScrollRect>();
        if (scrollRect != null)
        {
            Canvas.ForceUpdateCanvases();
            scrollRect.verticalNormalizedPosition = 1f;
        }
    }

    public void MulaiKuis(QuizData kuisTerpilih)
    {
        kuisAktif = kuisTerpilih;
        indexPertanyaanSaatIni = 0;
        jumlahBenar = 0;

        if (panelKuisOverlay != null) panelKuisOverlay.SetActive(true);
        if (panelSelesaiKuis != null) panelSelesaiKuis.SetActive(false);
        if (panelFeedback != null) panelFeedback.SetActive(false);

        if (txtJudulKuis != null) txtJudulKuis.text = kuisAktif.title;

        TampilkanPertanyaanSaatIni();
    }

    private void TampilkanPertanyaanSaatIni()
    {
        if (kuisAktif == null || kuisAktif.daftarPertanyaan == null || kuisAktif.daftarPertanyaan.Count == 0) return;

        PertanyaanData pertanyaan = kuisAktif.daftarPertanyaan[indexPertanyaanSaatIni];

        indexJawabanTerpilih = -1; // Reset status jawaban belum memilih
        if (btnKonfirmasi != null) btnKonfirmasi.interactable = false; // Matikan tombol konfirmasi di awal

        // Bersihkan semua isi container lama
        foreach (Transform child in containerPilihanJawaban) Destroy(child.gameObject);

        // Render pertanyaan secara berurutan (teks, gambar, caption)
        if (pertanyaan.teksPertanyaan != null)
        {
            foreach (KontenIsi konten in pertanyaan.teksPertanyaan)
            {
                if (konten.key == "paragraph" || konten.key == "text" || konten.key == "teks")
                {
                    if (prefabTeksPertanyaan != null)
                    {
                        GameObject teksObj = Instantiate(prefabTeksPertanyaan, containerPilihanJawaban);
                        TMP_Text txtPertanyaan = teksObj.GetComponent<TMP_Text>();
                        if (txtPertanyaan == null) txtPertanyaan = teksObj.GetComponentInChildren<TMP_Text>(); 
                        if (txtPertanyaan != null) txtPertanyaan.text = konten.text;
                    }
                }
                else if (konten.key == "caption")
                {
                    if (prefabCaptionKonten != null)
                    {
                        GameObject capObj = Instantiate(prefabCaptionKonten, containerPilihanJawaban);
                        TMP_Text txtCap = capObj.GetComponent<TMP_Text>();
                        if (txtCap == null) txtCap = capObj.GetComponentInChildren<TMP_Text>(); 
                        if (txtCap != null) txtCap.text = konten.text;
                    }
                }
                else if (konten.key == "image" || konten.key == "gambar")
                {
                    if (prefabGambarKonten != null)
                    {
                        GameObject imgObj = Instantiate(prefabGambarKonten, containerPilihanJawaban);
                        Transform childImage = imgObj.transform.Find("ui_image");
                        if (childImage != null)
                        {
                            Image img = childImage.GetComponent<Image>();
                            if (img != null && !string.IsNullOrEmpty(konten.text))
                            {
                                Sprite loadedSprite = Resources.Load<Sprite>(konten.text);
                                if (loadedSprite != null) img.sprite = loadedSprite;
                                else Debug.LogWarning("Gagal memuat gambar: " + konten.text);
                            }
                        }
                        else
                        {
                            Debug.LogError("Objek anak 'ui_image' tidak ditemukan di prefab gambar!");
                        }
                    }
                }
            }
        }

        // Buat Toggle pilihan baru secara dinamis
        for (int i = 0; i < pertanyaan.pilihan.Count; i++)
        {
            int indexPilihan = i; // Menghindari bug closure
            GameObject toggleObj = Instantiate(prefabTogglePilihan, containerPilihanJawaban);
            
            TMP_Text txtPilihanTMP = toggleObj.GetComponentInChildren<TMP_Text>();
            if (txtPilihanTMP != null) 
            {
                txtPilihanTMP.text = pertanyaan.pilihan[indexPilihan];
            }
            else
            {
                // Fallback jika user menggunakan Toggle standar (bukan TextMeshPro)
                Text txtPilihanLegacy = toggleObj.GetComponentInChildren<Text>();
                if (txtPilihanLegacy != null) txtPilihanLegacy.text = pertanyaan.pilihan[indexPilihan];
            }

            Toggle tglPilihan = toggleObj.GetComponent<Toggle>();
            if (tglPilihan != null)
            {
                tglPilihan.group = toggleGroupPilihan;
                tglPilihan.isOn = false; // Pastikan default tidak tercentang
                
                tglPilihan.onValueChanged.AddListener((bool isAktif) => {
                    if (isAktif)
                    {
                        if (SettingsManager.Instance != null) SettingsManager.Instance.PlayClickSound();
                        PilihJawaban(indexPilihan);
                    }
                });
            }
        }

        ScrollRect scrollRect = containerPilihanJawaban.GetComponentInParent<ScrollRect>();
        if (scrollRect != null)
        {
            Canvas.ForceUpdateCanvases();
            scrollRect.verticalNormalizedPosition = 1f;
        }
    }

    private void PilihJawaban(int indexDipilih)
    {
        indexJawabanTerpilih = indexDipilih;
        if (btnKonfirmasi != null) btnKonfirmasi.interactable = true; // Nyalakan tombol konfirmasi karena user sudah memilih
    }

    private void KonfirmasiJawaban()
    {
        if (indexJawabanTerpilih == -1) return; // Belum ada yang dipilih

        if (SettingsManager.Instance != null) SettingsManager.Instance.PlayClickSound();

        PertanyaanData pertanyaan = kuisAktif.daftarPertanyaan[indexPertanyaanSaatIni];
        bool isBenar = (indexJawabanTerpilih == pertanyaan.jawabanBenarIndex);

        if (isBenar)
        {
            jumlahBenar++;
            if (SettingsManager.Instance != null && sfxFeedbackBenar != null) SettingsManager.Instance.PlaySFX(sfxFeedbackBenar);
            TampilkanFeedback("Jawaban Anda Benar!", warnaBenar);
        }
        else
        {
            if (SettingsManager.Instance != null && sfxFeedbackSalah != null) SettingsManager.Instance.PlaySFX(sfxFeedbackSalah);
            TampilkanFeedback("Jawaban Anda Salah!", warnaSalah);
        }
    }

    private void TampilkanFeedback(string pesan, Color warnaLatar)
    {
        if (panelFeedback != null) panelFeedback.SetActive(true);
        if (txtFeedbackPesan != null) txtFeedbackPesan.text = pesan;
        if (imgBackgroundFeedback != null) imgBackgroundFeedback.color = warnaLatar;
        
        // Matikan tombol konfirmasi agar tidak diklik dua kali
        if (btnKonfirmasi != null) btnKonfirmasi.interactable = false;
    }

    private void LanjutKeSoalBerikutnya()
    {
        if (SettingsManager.Instance != null) SettingsManager.Instance.PlayClickSound();

        if (panelFeedback != null) panelFeedback.SetActive(false);

        // Cek apakah masih ada soal atau kuis sudah selesai
        if (indexPertanyaanSaatIni < kuisAktif.daftarPertanyaan.Count - 1)
        {
            indexPertanyaanSaatIni++;
            TampilkanPertanyaanSaatIni();
        }
        else
        {
            SelesaikanKuis();
        }
    }

    private void SelesaikanKuis()
    {
        if (SettingsManager.Instance != null && sfxSelesaiKuis != null) SettingsManager.Instance.PlaySFX(sfxSelesaiKuis);

        if (panelSelesaiKuis != null) panelSelesaiKuis.SetActive(true);
        if (panelKuisOverlay != null) panelKuisOverlay.SetActive(false); 

        if (txtSkorAkhir != null)
        {
            float persentase = ((float)jumlahBenar / kuisAktif.daftarPertanyaan.Count) * 100f;
            int skorFinal = Mathf.RoundToInt(persentase);
            txtSkorAkhir.text = skorFinal.ToString();

            int skorLama = PlayerPrefs.GetInt("QuizScore_" + kuisAktif.title, 0);
            if (skorFinal > skorLama)
            {
                PlayerPrefs.SetInt("QuizScore_" + kuisAktif.title, skorFinal);
                PlayerPrefs.Save();
            }
        }
    }

    public void TutupPanelKuis()
    {
        if (panelKuisOverlay != null) panelKuisOverlay.SetActive(false);
        if (panelSelesaiKuis != null) panelSelesaiKuis.SetActive(false);
        if (panelFeedback != null) panelFeedback.SetActive(false);

        GenerateListKuisUtama();
    }
}
