using UnityEngine;
using System.Threading.Tasks;
using Firebase.RemoteConfig;
using System;
using Firebase.Extensions;

public class FirebaseRemoteConfigManager : MonoBehaviour
{
    public static int firstAdTime = 60 , delayAdTime = 50;

    private void Awake()
    {
        FetchDataTask();
    }

    public Task FetchDataTask()
    {
        Debug.Log("Fetching data");
        Task task = FirebaseRemoteConfig.DefaultInstance.FetchAsync(TimeSpan.Zero);
        return task.ContinueWithOnMainThread(FetchComplete);
    }

    public void FetchComplete(Task task)
    {
        if(!task.IsCompleted)
        {
            Debug.LogError("Fetch failed");
            return;
        }
        var infor = FirebaseRemoteConfig.DefaultInstance.Info;
        if(infor.LastFetchStatus == LastFetchStatus.Success)
        {
            FirebaseRemoteConfig.DefaultInstance.ActivateAsync().ContinueWithOnMainThread(task =>
            {
                firstAdTime = (int)FirebaseRemoteConfig.DefaultInstance.GetValue("first_ad_delay_time").LongValue;
                delayAdTime = (int)FirebaseRemoteConfig.DefaultInstance.GetValue("delay_ad_time").LongValue;
                Debug.Log(firstAdTime);
                Debug.Log(delayAdTime);
            });
        }
    }
}
