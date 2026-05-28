using UnityEngine;
using UnityEngine.SceneManagement;
using System.Collections;

public class SceneTransition : MonoBehaviour
{
    public static SceneTransition Instance;
    public Animator animator;
    public float transitionTime = 1f;

    private void Awake()
    {
        // Singleton pattern agar hanya ada satu ObjectLoader
        if (Instance == null)
        {
            Instance = this;
            DontDestroyOnLoad(gameObject);
        }
        else
        {
            Destroy(gameObject);
        }
    }

    public void LoadScene(string sceneName)
    {
        StartCoroutine(Transition(sceneName));
    }

    IEnumerator Transition(string sceneName)
    {
        // 1. Jalankan animasi tutup (End)
        animator.SetTrigger("StartTransition");

        // 2. Tunggu sampai animasi selesai
        yield return new WaitForSeconds(transitionTime);

        // 3. Pindah Scene
        SceneManager.LoadScene(sceneName);

        // 4. Jalankan animasi buka (Start)
        // Pastikan di Animator, state default adalah animasi "Buka"
        animator.SetTrigger("EndTransition");
    }
}