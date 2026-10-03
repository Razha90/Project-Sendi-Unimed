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
        if (Instance == null)
        {
            Instance = this;
            DontDestroyOnLoad(gameObject);
        }
        else
        {
            Destroy(gameObject);
            return;
        }
    }

    private void Start()
    {
        if (animator != null)
            animator.SetTrigger("EndTransition");
    }

    public void LoadScene(string sceneName)
    {
        StartCoroutine(Transition(sceneName));
    }

    IEnumerator Transition(string sceneName)
    {
        if (animator != null)
            animator.SetTrigger("StartTransition");

        yield return new WaitForSeconds(animator != null ? transitionTime : 0f);

        SceneManager.LoadScene(sceneName);

        if (animator != null)
            animator.SetTrigger("EndTransition");
    }
}
