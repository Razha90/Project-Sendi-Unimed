using UnityEngine;
using System.Collections.Generic; // Dibutuhkan untuk List

public class ButtonFX : MonoBehaviour
{
    [Header("Multiple Animators")]
    [Tooltip("Tarik semua Animator yang ingin digerakkan ke sini.")]
    [SerializeField] private List<Animator> daftarAnimator = new List<Animator>();

    public void EksekusiEfekTombol(string triggerName)
    {
        // 1. Jalankan Suara Klik
        if (SettingsManager.Instance != null)
        {
            SettingsManager.Instance.PlayClickSound();
        }

        // 2. Loop semua animator dalam list dan jalankan trigger-nya
        if (daftarAnimator != null && daftarAnimator.Count > 0)
        {
            foreach (Animator anim in daftarAnimator)
            {
                if (anim != null && !string.IsNullOrEmpty(triggerName))
                {
                    anim.SetTrigger(triggerName);
                }
            }
        }
    }
        public void KlikTombolPause()
    {
        SettingsManager.Instance.BukaTutupSettings();
    }
}
