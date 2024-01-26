using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AdsUltil 
{
    public static void LoadAndShowCMPFlow(Action <bool, string> OnComplete)
    {
        var cmpService = MaxSdk.CmpService;
        cmpService.ShowCmpForExistingUser(error =>
        {
            if(error == null)
            {
                OnComplete?.Invoke(false, "The CMP alert was shown successfully.");
            }
            else
            {
                OnComplete?.Invoke(true, error.Code.ToString());
            }
        });
    }

    public static bool IsGDPRRegion()
    {
        return MaxSdk.GetSdkConfiguration().ConsentFlowUserGeography == MaxSdkBase.ConsentFlowUserGeography.Gdpr;
    }
}
