using UnityEngine;
using UnityEngine.Audio;
using UnityEngine.UI;

public class SettingsManager : MonoBehaviour
{
    public static SettingsManager Instance;

    // Ini adalah objek "UI" di gambar image_a198f8.png yang ingin kita sembunyikan/munculkan

    [Header("Audio Settings")]
    [SerializeField] private AudioMixer mainMixer; 
    
    [Header("UI References")]
    [SerializeField] private GameObject folderUI; 
    [SerializeField] private GameObject menuPanel; // Seret objek "menu" ke sini
    [SerializeField] private GameObject exitPanel;

    [Header("SFX Settings")]
    [SerializeField] private AudioSource sfxSource; // Taruh Audio Source klik di sini
    [SerializeField] private AudioClip clickSound; // Taruh file audio "clicked" di sini

    [Header("Music Controls")]
    [SerializeField] private Slider musicSlider;
    [SerializeField] private GameObject resetMusicBtn; // Tombol reset khusus Music

    [Header("SFX Controls")]
    [SerializeField] private Slider sfxSlider;
    [SerializeField] private GameObject resetSfxBtn;

    private float defaultVolume = 0.5f;

    private void Awake()
    {
        // Sistem Singleton: Menjamin hanya ada 1 SettingsManager di seluruh game
        if (Instance == null)
        {
            Instance = this;
            DontDestroyOnLoad(gameObject); // Agar GlobalUI tidak hancur saat pindah scene
        }
        else
        {
            Destroy(gameObject);
        }
    }

    private void Start()
    {
        // Pastikan folder utama tertutup saat game mulai
        if (folderUI != null) folderUI.SetActive(false);
        
        // Pastikan panel exit tertutup secara default
        if (exitPanel != null) exitPanel.SetActive(false);

        // Inisialisasi volume awal berdasarkan nilai slider saat game dimulai
        // Ini mencegah audio Mixer berada di volume maksimal (0 dB) yang membuat suara pecah
        if (musicSlider != null) SetMusicVolume(musicSlider.value);
        if (sfxSlider != null) SetSFXVolume(sfxSlider.value);

        UpdateResetButtonsUI();
    }

    public void BukaTutupSettings()
    {
        if (folderUI != null)
        {
            bool isActive = !folderUI.activeSelf;
            folderUI.SetActive(isActive);

            // Jika menu dibuka kembali, pastikan kembali ke tampilan "menu" utama
            if (isActive)
            {
                menuPanel.SetActive(true);
                exitPanel.SetActive(false);
            }
        }
    }

    public void BukaKonfirmasiExit()
    {
        menuPanel.SetActive(false);
        exitPanel.SetActive(true);
    }

    // 2. Panggil ini saat tombol "No" di panel exit diklik
    public void BatalkanExit()
    {
        // Tutup semua menu (kembali ke game)
        folderUI.SetActive(false);
    }

    // 3. Panggil ini saat tombol "Yes" di panel exit diklik
    public void KeluarGame()
    {
        Debug.Log("Keluar dari Game...");
        Application.Quit(); // Hanya berfungsi di Build (EXE/APK), bukan di Editor
    }

// Fungsi untuk Slider Music
    public void SetMusicVolume(float value)
    {
        // Pastikan nama "MusicVol" sama dengan yang ada di Exposed Parameters Mixer
        mainMixer.SetFloat("MusicVol", Mathf.Log10(Mathf.Clamp(value, 0.0001f, 1f)) * 20);
        UpdateResetButtonsUI();
    }

    // Fungsi untuk mematikan/menghidupkan musik sementara (ducking)
    public void MuteMusic(bool isMuted)
    {
        if (isMuted)
        {
            mainMixer.SetFloat("MusicVol", -80f); // -80dB artinya mute/sunyi
        }
        else
        {
            // Kembalikan ke volume yang sesuai dengan posisi slider saat ini
            SetMusicVolume(musicSlider.value);
        }
    }

    // Fungsi untuk Slider SFX
    public void SetSFXVolume(float value)
    {
        // Pastikan nama "SFXVol" sama dengan yang ada di Exposed Parameters Mixer
        mainMixer.SetFloat("SFXVol", Mathf.Log10(Mathf.Clamp(value, 0.0001f, 1f)) * 20);
        UpdateResetButtonsUI();
    }

    public void PlayClickSound()
    {
        if (sfxSource != null && clickSound != null)
        {
            sfxSource.PlayOneShot(clickSound);
        }
    }

    // Fungsi baru untuk memutar suara SFX bebas dari script lain
    public void PlaySFX(AudioClip clip)
    {
        if (sfxSource != null && clip != null)
        {
            sfxSource.PlayOneShot(clip);
        }
    }

    public void ResetMusic()
    {
        musicSlider.value = defaultVolume;
        SetMusicVolume(defaultVolume);
    }

    public void ResetSFX()
    {
        sfxSlider.value = defaultVolume;
        SetSFXVolume(defaultVolume);
    }

private void UpdateResetButtonsUI()
    {
        if (resetMusicBtn != null)
        {
            // Tampil jika nilai music slider bukan 0.5
            resetMusicBtn.SetActive(Mathf.Abs(musicSlider.value - defaultVolume) > 0.01f);
        }

        if (resetSfxBtn != null)
        {
            // Tampil jika nilai sfx slider bukan 0.5
            resetSfxBtn.SetActive(Mathf.Abs(sfxSlider.value - defaultVolume) > 0.01f);
        }
    }
}