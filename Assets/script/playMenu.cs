using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class playMenu : MonoBehaviour
{
    public void KlikTombolPause()
    {
        if (SettingsManager.Instance != null)
            SettingsManager.Instance.BukaTutupSettings();
    }

    public void TombolPlaySound()
    {
        if (SettingsManager.Instance != null)
            SettingsManager.Instance.PlayClickSound();
    }

    public void JalankanAnimasi(Animator targetAnimator)
    {
        if (targetAnimator != null)
            targetAnimator.SetTrigger("start");
        else
            Debug.LogWarning("Animator target tidak ditemukan!");
    }
}
