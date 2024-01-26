
using DG.Tweening;
using System;
using System.Collections;
using UnityEngine;

public class LoadingScreen : MonoBehaviour
{
    
    [SerializeField] GameObject[] slimes;

    public void StartLoading(int time)
    {
        this.gameObject.SetActive(true);
        for (int i = 0; i < slimes.Length; i++)
        {
            slimes[i].transform.DOScale(new Vector2(1.5f, 1.5f), 0.4f).SetLoops(-1, LoopType.Yoyo);
        }

    }
}
