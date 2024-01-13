using DG.Tweening;
using TMPro;
using UnityEngine;

public class TextPopup : MonoBehaviour
{
    [SerializeField] protected TextMeshProUGUI textPrb;
    [SerializeField] protected Vector2 startScale;
    [SerializeField] protected float showDuration;
    [SerializeField] protected Ease showEase;
    [SerializeField] protected float displayTime;
    [SerializeField] protected float hideDuration;
    [SerializeField] protected Ease hideEase;
    [SerializeField] protected bool disableOnComplete = false;
    ObjectPool pool;
    protected Vector3 initScale;
    protected void Awake()
    {
        initScale = textPrb.transform.localScale;
        pool = new ObjectPool(2,textPrb.gameObject , this.transform);
    }
    public virtual void ShowText(string mgs , Vector2 pos)
    {
        GameObject text = pool.GetGOInactive();
        text.gameObject.SetActive(true);
        text.transform.position = pos;
        text.GetComponent<TextMeshProUGUI>().text = mgs;
        text.transform.DOKill();
        text.transform.localScale = startScale;
        text.transform.DOScale(initScale, showDuration).SetEase(showEase).OnComplete(()=>
        {
            text.transform.DOScale(Vector2.zero,hideDuration).SetDelay(displayTime).SetEase(hideEase).OnComplete(() =>
            {
                text.gameObject.SetActive(!disableOnComplete);
            });
        });
    }
}
