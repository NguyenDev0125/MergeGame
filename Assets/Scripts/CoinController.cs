using DG.Tweening;
using TMPro;
using UnityEngine;

public class CoinController : MonoBehaviour
{
    [SerializeField] GameObject coinPrefab;
    [SerializeField] TextMeshProUGUI coinText;

    ObjectPool pool;
    int coin = 0;
    private void Awake()
    {
        pool = new ObjectPool(4, coinPrefab);
        coinText.text = "0";
    }
    public void AddScore(int c , Vector2 pos)
    {
        this.coin += c;
        PlayerData.Coin += c;
        GameObject coinObj = pool.GetGOInactive();
        coinObj.transform.position = pos;
        coinObj.SetActive(true);
        Vector2 targetPos = coinText.transform.position;
        coinObj.transform.DOMove(targetPos, 1f).SetEase(Ease.InBack).OnComplete(()=>
        {
            coinText.transform.DOShakeScale(0.1f).OnComplete(() => coinText.transform.localScale = Vector3.one) ;
            coinText.text = coin.ToString();
            
            coinObj.SetActive(false);
            //SoundManager.Instance.PlaySound(SoundName.Coin);
        });
    }
}
