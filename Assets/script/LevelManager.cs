using UnityEngine;
using UnityEngine.SceneManagement; // Tambahkan ini untuk akses data scene

public class LevelManager : MonoBehaviour
{
    // Variabel statis untuk menyimpan nama scene sebelumnya
    private static string previousSceneName;

    private void Start()
    {
        // Menyimpan nama scene saat ini sebelum berpindah nantinya
        // Ini berguna agar sistem selalu tahu kita datang dari mana
        string currentScene = SceneManager.GetActiveScene().name;
        
        // Update previousScene hanya jika scene saat ini bukan scene transisi yang sedang diload
        // (Opsional: Logika ini bisa dikembangkan jika ingin history yang lebih kompleks)
    }

    // Fungsi Fleksibel: Masukkan nama scene di Inspector Button
    public void ChangeScene(string sceneName)
    {
        // Simpan scene saat ini sebagai 'previous' sebelum pindah
        previousSceneName = SceneManager.GetActiveScene().name;
        
        // Panggil transisi
        SceneTransition.Instance.LoadScene(sceneName);
    }

    // Fungsi Khusus Tombol Back
    public void GoBack()
    {
        if (!string.IsNullOrEmpty(previousSceneName))
        {
            SceneTransition.Instance.LoadScene(previousSceneName);
        }
        else
        {
            Debug.LogWarning("Tidak ada history scene sebelumnya!");
            // Opsional: Jika tidak ada history, balikkan ke main menu
            // SceneTransition.Instance.LoadScene("start-menu");
        }
    }
}