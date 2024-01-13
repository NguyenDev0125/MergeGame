using DG.Tweening;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class GiveItemPanel : MonoBehaviour
{
    [SerializeField] RectTransform bomb, sword;
    [SerializeField] TextMeshProUGUI text;
    [SerializeField] Image icon;
    [SerializeField] Sprite b, s;
    [SerializeField] Button ok;
    [SerializeField] Image item;
    [SerializeField] UIController uIController;
    public void RandomGift()
    {
        int r = Random.Range(0, 4);
        if (r == 0)
        {
            int r2 = Random.Range(0, 1);
            if (r2 == 0)
            {
                icon.sprite = b;
                item.sprite = b;
                item.gameObject.SetActive(true);
                ok.onClick.AddListener(() =>
                {
                    item.transform.DOMove(bomb.position, 1f).SetEase(Ease.InBack).OnComplete(() =>
                    {
                        PlayerData.NumBoom++;
                        uIController.UpdateInfoText();
                        item.gameObject.SetActive(false);
                        SoundManager.Instance.PlaySound(SoundName.Coin);
                    });
                    this.gameObject.SetActive(false);
                });
            }
            else
            {
                icon.sprite = s;
                item.sprite = s;
                item.gameObject.SetActive(true);
                ok.onClick.AddListener(() =>
                {
                    item.transform.DOMove(bomb.position, 1f).SetEase(Ease.InBack).OnComplete(() =>
                    {
                        PlayerData.NumSword++;
                        uIController.UpdateInfoText();
                        item.gameObject.SetActive(false);
                        SoundManager.Instance.PlaySound(SoundName.Coin);
                    });
                    this.gameObject.SetActive(false);
                });
            }
            this.gameObject.SetActive(true);
            Debug.Log("Give item");
        }
    }
}
