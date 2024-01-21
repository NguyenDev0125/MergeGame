using DG.Tweening;
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class QuestPanel : MonoBehaviour
{
    [SerializeField] List<Quest> quests;
    Quest quest1 , quest2, quest3;
    [SerializeField] QuestItemUI questUI1, questUI2, questUI3;
    [SerializeField] CoinController scoreController ;
    [SerializeField] Sprite[] listSprs;
    [SerializeField] Image slimeEfPrb, coin;
    ObjectPool pool;
    ObjectPool poolCoin;
    private void Awake()
    {
        quest1 = quests[UnityEngine.Random.Range(0,5)];
        quest2 = quests[UnityEngine.Random.Range(5,7)];
        quest3 = quests[UnityEngine.Random.Range(6, 13)];

        questUI1.SetItem(quest1 , listSprs[UnityEngine.Random.Range(0,listSprs.Length)]);
        questUI2.SetItem(quest2 , listSprs[UnityEngine.Random.Range(0,listSprs.Length)]);
        questUI3.SetItem(quest3 , listSprs[UnityEngine.Random.Range(0,listSprs.Length)]);

        pool = new ObjectPool(2, slimeEfPrb.gameObject);
    }

    public void OnSlimeExplode(int slimeId , Vector2 pos1 , Vector2 pos2)
    {
        if(quest1.slimeId == slimeId)
        {
            Image img1 = pool.GetGOInactive().GetComponent<Image>();
            img1.gameObject.SetActive(true);
            Image img2 = pool.GetGOInactive().GetComponent<Image>();
            img2.gameObject.SetActive(true);

            img1.sprite = FruitManager.GetFruitById(slimeId).Sprite;
            img2.sprite = FruitManager.GetFruitById(slimeId).Sprite;

            img1.transform.parent = slimeEfPrb.transform.parent;
            img2.transform.parent = slimeEfPrb.transform.parent;
            img1.transform.position = pos1;
            img2.transform.position = pos2;
            img1.transform.localScale = Vector3.one;
            img2.transform.localScale = Vector3.one;
            img1.gameObject.SetActive(true);
            img2.gameObject.SetActive(true);
            img1.transform.DOMove(questUI1.slimePos , 1.5f).OnComplete(() =>
            {
                questUI1.TakeSlime();
                img1.gameObject.SetActive(false);
            }).SetEase(Ease.InOutBack);
            img2.transform.DOMove(questUI1.slimePos, 1.5f).OnComplete(() =>
            {
                questUI1.TakeSlime();
                img2.gameObject.SetActive(false);
            }).SetEase(Ease.InOutBack);
        }else if(quest2.slimeId == slimeId)
        {
            Image img1 = pool.GetGOInactive().GetComponent<Image>();
            img1.gameObject.SetActive(true);
            Image img2 = pool.GetGOInactive().GetComponent<Image>();
            img2.gameObject.SetActive(true);

            img1.sprite = FruitManager.GetFruitById(slimeId).Sprite;
            img2.sprite = FruitManager.GetFruitById(slimeId).Sprite;

            img1.transform.parent = slimeEfPrb.transform.parent;
            img2.transform.parent = slimeEfPrb.transform.parent;

            img1.transform.position = pos1;
            img2.transform.position = pos2;
            img1.gameObject.SetActive(true);
            img2.gameObject.SetActive(true);
            img1.transform.DOMove(questUI1.slimePos, 1.5f).OnComplete(() =>
            {
                questUI2.TakeSlime();
                img1.gameObject.SetActive(false);
            }).SetEase(Ease.InOutBack);
            img2.transform.DOMove(questUI1.slimePos, 1.5f).OnComplete(() =>
            {
                questUI2.TakeSlime();
                img2.gameObject.SetActive(false);
            }).SetEase(Ease.InOutBack);

        }
        else if(quest3.slimeId == slimeId)
        {
            Image img1 = pool.GetGOInactive().GetComponent<Image>();
            img1.gameObject.SetActive(true);
            Image img2 = pool.GetGOInactive().GetComponent<Image>();
            img2.gameObject.SetActive(true);

            img1.sprite = FruitManager.GetFruitById(slimeId).Sprite;
            img2.sprite = FruitManager.GetFruitById(slimeId).Sprite;

            img1.transform.parent = slimeEfPrb.transform.parent;
            img2.transform.parent = slimeEfPrb.transform.parent;

            img1.transform.position = pos1;
            img2.transform.position = pos2;



            img1.transform.DOMove(questUI1.slimePos, 1.5f).OnComplete(() =>
            {
                questUI3.TakeSlime();
                img1.gameObject.SetActive(false);
            }).SetEase(Ease.InOutBack);
            img2.transform.DOMove(questUI1.slimePos, 1.5f).OnComplete(() =>
            {
                questUI3.TakeSlime();
                img2.gameObject.SetActive(false);
            }).SetEase(Ease.InOutBack);
        }
    }
    public void QuestComplete(QuestItemUI quest)
    {
        Debug.Log("Question Complete");
        if(quest == questUI1)
        {

            StartCoroutine(IE_AddScore(quest1.goldToGive, questUI1.transform.position , () =>
            {
                //questUI1.transform.SetSiblingIndex(2);
                quest1 = quests[UnityEngine.Random.Range(0, 7)];
                questUI1.SetItem(quest1, listSprs[UnityEngine.Random.Range(0, listSprs.Length)]);
            }));

        }
        else if (quest == questUI2)
        {

            StartCoroutine(IE_AddScore(quest2.goldToGive, questUI2.transform.position , () =>
            {
                //questUI2.transform.SetSiblingIndex(2);
                quest2 = quests[UnityEngine.Random.Range(6, 13)];
                questUI2.SetItem(quest2, listSprs[UnityEngine.Random.Range(0, listSprs.Length)]);
            }));
        }
        else if(quest == questUI3)
        {

            StartCoroutine(IE_AddScore(quest3.goldToGive , questUI3.transform.position , ()=>
            {
                //questUI3.transform.SetSiblingIndex(2);
                quest3 = quests[UnityEngine.Random.Range(12, 18)];
                questUI3.SetItem(quest3, listSprs[UnityEngine.Random.Range(0, listSprs.Length)]);
            }));
        }
    }
    IEnumerator IE_AddScore(int score , Vector2 startPos , Action callback)
    {
        for(int i = 0; i < score / 2; i+=2)
        {
            scoreController.AddScore(2, startPos);
            callback.Invoke();
            yield return new WaitForSeconds(0.1f);

        }


    }
}
