using DG.Tweening;
using UnityEngine;

public class Tutorial : MonoBehaviour
{
    [SerializeField] Vector2 poin1, point2;
    private void Awake()
    {
        if(!PlayerData.IsFirstPlay)
        {
            this.gameObject.SetActive(false);
        }
        transform.position = poin1;
        transform.DOMove(point2, 2f).SetLoops(-1,LoopType.Yoyo);
        PlayerData.IsFirstPlay = false;

    }
    public void Destroy()
    {
        this.gameObject.SetActive(false);
        PlayerData.IsFirstPlay= false;
    }
}
