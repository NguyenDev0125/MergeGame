using System.Linq;
using UnityEngine;
using UnityEngine.UI;
using System.Collections.Generic;

public class SlimeUnlockProgressPanel : MonoBehaviour
{
    [SerializeField] Image slimeIconPrb;
    [SerializeField] ScrollRect listView;
    [SerializeField] Sprite lockSpr;
    [SerializeField] float sizeDelta = 1f;

    List<Image> slimes;

    public void ShowProgress(int newFruitId)
    {
        if(slimes != null)
        {
            for(int i = 0; i < slimes.Count; i++)
            {
                slimes[i].gameObject.SetActive(false);
            }
        }
        slimes = new List<Image>();
        for(int i = 0; i < 3; i++)
        {
            Image img = Instantiate(slimeIconPrb, listView.content);
            img.sprite = FruitManager.GetFruitById(newFruitId - (2 - i)).Sprite;
            img.gameObject.SetActive(true);
            slimes.Add(img);
        }
        Image slimeLock = Instantiate(slimeIconPrb,listView.content) ;
        slimeLock.gameObject.SetActive(true);
        slimeLock.sprite = lockSpr;
        slimes.Add(slimeLock);
    }
}
