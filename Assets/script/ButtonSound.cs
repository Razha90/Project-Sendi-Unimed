using UnityEngine;

public class ButtonSound : MonoBehaviour
{
    /// <summary>
    /// Memutar suara klik melalui SettingsManager.
    /// Pasangkan fungsi ini pada OnClick() di komponen Button.
    /// </summary>
    public void PlayClick()
    {
        if (SettingsManager.Instance != null)
        {
            SettingsManager.Instance.PlayClickSound();
        }
        else
        {
            Debug.LogWarning("SettingsManager.Instance tidak ditemukan! Pastikan ada SettingsManager di scene.");
        }
    }
}
