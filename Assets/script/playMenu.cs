using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class playMenu : MonoBehaviour
{
    public void KlikTombolPause()
    {
        SettingsManager.Instance.BukaTutupSettings();
    }

    public void TombolPlaySound()
    {
        SettingsManager.Instance.PlayClickSound();
    }

    public void JalankanAnimasi(Animator targetAnimator)
    {
        if (targetAnimator != null)
        {
            targetAnimator.SetTrigger("start");
        }
        else 
        {
            Debug.LogWarning("Animator target tidak ditemukan!");
        }
    }
}
