using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Advertisements;

public class AdManager : MonoSingleton<AdManager>
{
    //public InterstitialAd inter;
    //public BannerAd banner;
    
    //bool isBlockInter = false;

    //public void LoadAds()
    //{
    //    inter.LoadAd();
    //    banner.LoadAd();
    //}
    //public void ShowInterAd()
    //{
    //    if(inter.IsReady())
    //    {
    //        if(!isBlockInter)
    //        {
    //            inter.ShowAd();
    //            isBlockInter = true;
    //            StopAllCoroutines();
    //            StartCoroutine(CooldownBlockInter());
    //        }
    //        else
    //        {
    //            Debug.Log("Block interstitial ");
    //        }
    //    }
    //    else
    //    {
    //        Debug.Log("Interstitial not ready");
    //    }
    //}

    //private IEnumerator CooldownBlockInter()
    //{
    //    yield return new WaitForSeconds(10);
    //    isBlockInter = false;
    //}

    //public void ShowBannerAd() 
    //{
    //    banner.ShowAd();
    //}

}
