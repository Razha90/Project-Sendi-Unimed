using UnityEngine;
using DG.Tweening;

public class PlayMenuAnimator : MonoBehaviour
{
    [Header("Buttons (top-to-bottom, left-to-right)")]
    [SerializeField] private RectTransform[] menuButtons;
    [SerializeField] private float staggerDelay = 0.08f;
    [SerializeField] private float animDuration = 0.45f;

    private CanvasGroup canvasGroup;

    private void Awake()
    {
        canvasGroup = GetComponent<CanvasGroup>();
        if (canvasGroup == null) canvasGroup = gameObject.AddComponent<CanvasGroup>();
        canvasGroup.alpha = 0f;

        if (menuButtons == null) return;
        foreach (var btn in menuButtons)
        {
            if (btn == null) continue;
            btn.localScale = Vector3.zero;
            var cg = btn.GetComponent<CanvasGroup>();
            if (cg == null) cg = btn.gameObject.AddComponent<CanvasGroup>();
            cg.alpha = 0f;
        }
    }

    private void Start()
    {
        canvasGroup.DOFade(1f, 0.3f).SetEase(Ease.OutQuad).SetDelay(0.15f);

        if (menuButtons == null) return;
        for (int i = 0; i < menuButtons.Length; i++)
        {
            var btn = menuButtons[i];
            if (btn == null) continue;

            float delay = 0.2f + i * staggerDelay;
            var cg = btn.GetComponent<CanvasGroup>();

            btn.DOScale(Vector3.one, animDuration).SetEase(Ease.OutBack).SetDelay(delay);
            if (cg != null)
                cg.DOFade(1f, animDuration * 0.7f).SetDelay(delay);
        }
    }

    private void OnDisable()
    {
        DOTween.Kill(canvasGroup);
        if (menuButtons == null) return;
        foreach (var btn in menuButtons)
        {
            if (btn == null) continue;
            DOTween.Kill(btn);
            var cg = btn.GetComponent<CanvasGroup>();
            if (cg != null) DOTween.Kill(cg);
        }
    }
}
