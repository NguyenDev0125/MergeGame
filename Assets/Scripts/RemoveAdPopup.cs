using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class RemoveAdPopup : MonoBehaviour
{
    public Button removeBtn , closeBtn;
    private void Awake()
    {
        IAPManager.Instance.OnPurchaseCompleted += (product) =>
        {
            PlayerData.RemoveAds = 1;
        };
        removeBtn.onClick.AddListener(() =>
        {
            IAPManager.Instance.Purchase(Purchaser._removeAds);
        });
        closeBtn.onClick.AddListener(() =>
        {
            this.gameObject.SetActive(false);
        });
    }

    public void Open()
    {
        this.gameObject.SetActive(true);
    }

}
