using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using Newtonsoft.Json;

public class MateriLoader : MonoBehaviour
{
    [Header("UI List References")]
    [SerializeField] private GameObject prefabTombolMateri;
    [SerializeField] private Transform containerListMateri; 

    [Header("Halaman Baca References")]
    // 1. KITA UBAH VARIABEL INI AGAR MENAMPUNG INDUK TERLUAR (panel_baca)
    [SerializeField] private GameObject panelBacaOverlay; 
    [SerializeField] private TMP_Text txtJudulHalamanIni;
    [SerializeField] private Transform containerKontenDinamis; 

    [Header("Navigasi Halaman")]
    [SerializeField] private GameObject tombolPrev;
    [SerializeField] private GameObject tombolNext;
    [SerializeField] private GameObject tombolSelesai;
    [SerializeField] private GameObject panelSelamatBerhasil;
    [SerializeField] private GameObject tombolLanjutkan; // Tombol Lanjutkan di panel selamat
    [SerializeField] private AudioClip suaraSelamat; // Suara khusus selamat

    
    private MateriData materiAktif;
    private int indexHalamanSaatIni = 0;
    private bool sudahMencapaiAkhir = false;
    
    [Header("Status Materi")]
    [SerializeField] private Color warnaSelesai = new Color(0.2f, 0.8f, 0.2f); // Warna hijau (bisa diedit di Unity)
    private List<MateriData> listMateriSelesai = new List<MateriData>();
    private Dictionary<MateriData, Image> mapTombolMateri = new Dictionary<MateriData, Image>();
    
    [Header("Prefab Elemen Konten")]
    [SerializeField] private GameObject prefabJudulKonten;
    [SerializeField] private GameObject prefabParagraphKonten;
    [SerializeField] private GameObject prefabGambarKonten; // Prefab untuk Gambar
    [SerializeField] private GameObject prefabCaptionKonten; // Prefab khusus untuk Caption
    [SerializeField] private GameObject prefabListKonten; // Prefab khusus untuk List

    private RootMateriData dataBesarMateri;

    private void Start()
    {
        // LOGIKA 1: Memastikan panel_baca OTOMATIS TERTUTUP/HIDE saat pertama kali game di-load
        if (panelBacaOverlay != null)
        {
            panelBacaOverlay.SetActive(false);
        }

        // Pastikan panel selamat berhasil juga tertutup saat game dimulai
        if (panelSelamatBerhasil != null)
        {
            panelSelamatBerhasil.SetActive(false);
        }

        MemuatDataJSON();
        GenerateListMateriUtama();
    }

    private void MemuatDataJSON()
    {
        // Membersihkan cache/data sebelumnya
        dataBesarMateri = null;

        TextAsset jsonFile = Resources.Load<TextAsset>("data_materi");

        if (jsonFile != null)
        {
            string isiTextJSON = jsonFile.text;
            
            // Tampilkan data yang dimuat ke log Console Unity
            Debug.Log("Berhasil memuat JSON data_materi:\n" + isiTextJSON);
            
            dataBesarMateri = JsonConvert.DeserializeObject<RootMateriData>(isiTextJSON);
            
            // Membersihkan file JSON dari cache memori agar saat dipanggil lagi datanya selalu baru
            Resources.UnloadAsset(jsonFile);
        }
        else
        {
            Debug.LogError("Gagal memuat file JSON! Pastikan file bernama 'data_materi.json' berada di folder Assets/Resources/");
        }
    }

    private void GenerateListMateriUtama()
    {
        foreach (Transform child in containerListMateri) Destroy(child.gameObject);
        mapTombolMateri.Clear(); // Bersihkan referensi tombol sebelumnya

        foreach (MateriData materi in dataBesarMateri.data)
        {
            MateriData materiSaatIni = materi; // Menghindari bug closure
            GameObject tombolBaru = Instantiate(prefabTombolMateri, containerListMateri);
            tombolBaru.GetComponentInChildren<TMP_Text>().text = materiSaatIni.title;

            // Simpan referensi Image tombol dan ubah warnanya jika materi sudah pernah selesai dibaca
            Image imgTombol = tombolBaru.GetComponent<Image>();
            if (imgTombol != null)
            {
                mapTombolMateri[materiSaatIni] = imgTombol;
                
                if (listMateriSelesai.Contains(materiSaatIni))
                {
                    imgTombol.color = warnaSelesai;
                }
            }

            Button btn = tombolBaru.GetComponent<Button>();
            btn.onClick.AddListener(() => AmbilHalamanPertama(materiSaatIni));
        }

        // Pastikan tampilan list materi kembali ke paling atas
        ScrollRect scrollRect = containerListMateri.GetComponentInParent<ScrollRect>();
        if (scrollRect != null)
        {
            Canvas.ForceUpdateCanvases();
            scrollRect.verticalNormalizedPosition = 1f;
        }
    }

    private void AmbilHalamanPertama(MateriData materiTerpilih)
    {
        materiAktif = materiTerpilih;
        indexHalamanSaatIni = 0;
        sudahMencapaiAkhir = false;

        // Sembunyikan tombol selesai dan panel berhasil di awal materi baru
        if (tombolSelesai != null) tombolSelesai.SetActive(false);
        if (panelSelamatBerhasil != null) panelSelamatBerhasil.SetActive(false);

        if (materiAktif.daftarHalaman != null && materiAktif.daftarHalaman.Count > 0)
        {
            TampilkanHalamanSaatIni();
        }
    }

    private void TampilkanHalamanSaatIni()
    {
        HalamanObject halaman = materiAktif.daftarHalaman[indexHalamanSaatIni];
        BukaHalamanBaca(halaman);

        // Perbarui visibilitas tombol navigasi
        if (tombolPrev != null) tombolPrev.SetActive(indexHalamanSaatIni > 0);
        if (tombolNext != null) tombolNext.SetActive(indexHalamanSaatIni < materiAktif.daftarHalaman.Count - 1);

        // Jika user mencapai halaman terakhir, tandai sebagai selesai
        if (indexHalamanSaatIni == materiAktif.daftarHalaman.Count - 1)
        {
            sudahMencapaiAkhir = true;

            // Tandai materi ini sebagai sudah dibaca, dan ubah warna tombol di menu utama menjadi hijau
            if (!listMateriSelesai.Contains(materiAktif))
            {
                listMateriSelesai.Add(materiAktif);
                if (mapTombolMateri.ContainsKey(materiAktif) && mapTombolMateri[materiAktif] != null)
                {
                    mapTombolMateri[materiAktif].color = warnaSelesai;
                }
            }
        }

        // Tampilkan tombol selesai jika sudah pernah mencapai halaman akhir
        if (tombolSelesai != null)
        {
            tombolSelesai.SetActive(sudahMencapaiAkhir);
        }
    }

    public void TekanTombolSelesai()
    {
        if (panelSelamatBerhasil != null)
        {
            panelSelamatBerhasil.SetActive(true);

            // Sembunyikan tombol lanjutkan sementara
            if (tombolLanjutkan != null)
            {
                tombolLanjutkan.SetActive(false);
            }

            // Memutar suara selamat dan mematikan musik sementara
            if (SettingsManager.Instance != null && suaraSelamat != null)
            {
                SettingsManager.Instance.MuteMusic(true);
                SettingsManager.Instance.PlaySFX(suaraSelamat);
            }

            // Menjalankan jeda 2 detik untuk tombol lanjutkan
            StartCoroutine(MunculkanTombolLanjutkan());
        }
        else
        {
            Debug.LogWarning("Objek/Panel Selamat Berhasil belum dimasukkan ke Inspector!");
        }
    }

    private IEnumerator MunculkanTombolLanjutkan()
    {
        yield return new WaitForSeconds(2f);
        if (tombolLanjutkan != null)
        {
            tombolLanjutkan.SetActive(true);
        }
    }

    public void HalamanSelanjutnya()
    {
        if (materiAktif != null && materiAktif.daftarHalaman != null)
        {
            if (indexHalamanSaatIni < materiAktif.daftarHalaman.Count - 1)
            {
                indexHalamanSaatIni++;
                TampilkanHalamanSaatIni();
            }
        }
    }

    public void HalamanSebelumnya()
    {
        if (materiAktif != null && materiAktif.daftarHalaman != null)
        {
            if (indexHalamanSaatIni > 0)
            {
                indexHalamanSaatIni--;
                TampilkanHalamanSaatIni();
            }
        }
    }

    public void BukaHalamanBaca(HalamanObject halaman)
    {
        // LOGIKA 2: Membuka seluruh panel_baca (termasuk background hitam transparannya) ketika materi diklik
        if (panelBacaOverlay != null)
        {
            panelBacaOverlay.SetActive(true);
        }

        txtJudulHalamanIni.text = halaman.title;

        foreach (Transform child in containerKontenDinamis) Destroy(child.gameObject);

        if (halaman.isi == null) return;

        foreach (KontenIsi konten in halaman.isi)
        {
            if (konten.key == "title")
            {
                GameObject objJudul = Instantiate(prefabJudulKonten, containerKontenDinamis);
                objJudul.GetComponent<TMP_Text>().text = konten.text;
            }
            else if (konten.key == "paragraph")
            {
                GameObject objPara = Instantiate(prefabParagraphKonten, containerKontenDinamis);
                objPara.GetComponent<TMP_Text>().text = konten.text;
            }
            else if (konten.key == "caption")
            {
                GameObject objCap = Instantiate(prefabCaptionKonten, containerKontenDinamis);
                objCap.GetComponent<TMP_Text>().text = konten.text;
            }
            else if (konten.key == "image")
            {
                // Instantiate prefab gambar
                GameObject objGambar = Instantiate(prefabGambarKonten, containerKontenDinamis);
                
                // PERBAIKAN 1: Cari objek anak bernama "ui_image" secara spesifik, baru ambil komponen Image-nya
                Transform childImage = objGambar.transform.Find("ui_image");
                if (childImage != null)
                {
                    Image img = childImage.GetComponent<Image>();
                    if (img != null && !string.IsNullOrEmpty(konten.text))
                    {
                        Sprite loadedSprite = Resources.Load<Sprite>(konten.text);
                        if (loadedSprite != null)
                        {
                            img.sprite = loadedSprite;
                        }
                        else
                        {
                            Debug.LogWarning("Gagal memuat gambar: " + konten.text + " di folder Resources.");
                        }
                    }
                }
                else
                {
                    Debug.LogError("Objek anak bernama 'ui_image' tidak ditemukan di dalam prefab!");
                }
            }
            else if (konten.key == "list")
            {
                GameObject objList = Instantiate(prefabListKonten, containerKontenDinamis);
                objList.GetComponent<TMP_Text>().text = konten.text;
            }
        }

        // Pastikan tampilan halaman kembali ke paling atas
        ScrollRect scrollRect = containerKontenDinamis.GetComponentInParent<ScrollRect>();
        if (scrollRect != null)
        {
            Canvas.ForceUpdateCanvases();
            scrollRect.verticalNormalizedPosition = 1f;
        }
    }

    // Fungsi publik untuk menutup panel selamat berhasil
    public void TutupPanelSelamat()
    {
        if (panelSelamatBerhasil != null)
        {
            panelSelamatBerhasil.SetActive(false);
            
            // Nyalakan kembali musik
            if (SettingsManager.Instance != null)
            {
                SettingsManager.Instance.MuteMusic(false);
            }
        }
    }

    // LOGIKA 3: Fungsi publik untuk menutup panel_baca sekaligus menutup panel selamat jika sedang terbuka
    public void TutupPanelBaca()
    {
        if (panelBacaOverlay != null)
        {
            panelBacaOverlay.SetActive(false);
        }
        
        // Memastikan ucapan selamat juga ikut tertutup
        if (panelSelamatBerhasil != null && panelSelamatBerhasil.activeSelf)
        {
            panelSelamatBerhasil.SetActive(false);
            
            // Nyalakan kembali musik
            if (SettingsManager.Instance != null)
            {
                SettingsManager.Instance.MuteMusic(false);
            }
        }
    }
}
