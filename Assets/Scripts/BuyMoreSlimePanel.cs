
using DG.Tweening;
using UnityEngine;
using UnityEngine.UI;

public class BuyMoreSlimePanel : MonoBehaviour
{
    [SerializeField] Button watchAd, watReward, removeAd;
    [SerializeField] Cloud cloud;
    private void Awake()
    {
        watchAd.onClick.AddListener(ShowAd);
        watReward.onClick.AddListener(ShowReward);
        removeAd.onClick.AddListener(RemoveAd);

        Purchaser.Instance.IAP_Manager.OnPurchaseCompleted += (product) =>
        {
            if (product.definition.id == Purchaser._removeAds)
            {
                PlayerData.RemoveAds = 1;
                cloud.SetNumText(PlayerData.NumSlime);
                Close();
            }
        };

    }
    public void Open()
    {
        this.gameObject.SetActive(true);
        
    }
    private void Close()
    {
        this.gameObject.SetActive(false);
    }

    private void ShowAd()
    {
        MaxManager.Instance.ShowInterAd(() =>
        {
            PlayerData.NumSlime += 50;
            Close();
            cloud.SetNumText(PlayerData.NumSlime);
        });
    }

    private void ShowReward()
    {
        MaxManager.Instance.ShowReward(() =>
        {
            PlayerData.NumSlime += 300;
            cloud.SetNumText(PlayerData.NumSlime);
            Close();
            Debug.Log("Give 300");
        }); 
    }

    private void RemoveAd()
    {
        Purchaser.Instance.IAP_Manager.Purchase(Purchaser._removeAds);

    }
}
