using UnityEngine;
using UnityEngine.SceneManagement;

public class LevelManager : MonoBehaviour
{
    private static string previousSceneName;

    public void ChangeScene(string sceneName)
    {
        previousSceneName = SceneManager.GetActiveScene().name;
        if (SceneTransition.Instance != null)
            SceneTransition.Instance.LoadScene(sceneName);
        else
            SceneManager.LoadScene(sceneName);
    }

    public void GoBack()
    {
        if (!string.IsNullOrEmpty(previousSceneName))
        {
            if (SceneTransition.Instance != null)
                SceneTransition.Instance.LoadScene(previousSceneName);
            else
                SceneManager.LoadScene(previousSceneName);
        }
        else
        {
            if (SceneTransition.Instance != null)
                SceneTransition.Instance.LoadScene("start-menu");
            else
                SceneManager.LoadScene("start-menu");
        }
    }
}
