using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SkinItemUI : MonoBehaviour
{
    public string SkinId;
    private void Awake()
    {
        if(SkinId != PlayerData.SelectedSkin)
        {
            this.gameObject.SetActive(false);
        }
    }
}
