using System;
using System.Collections.Generic;
using UnityEngine;

public class FruitSpawnner : MonoBehaviour
{
    [SerializeField] List<Fruit> listFruitPrbs;
    [SerializeField] GameObject BoomFruit;
    [SerializeField] GameObject Sword;
    [SerializeField] int maxFruitLevelSpawn;
    [SerializeField] FruitController fruitController;
    List<ObjectPool> listPool;
    int nextFruitLevel = 0;
    int currentFruitLevel = 0;
    bool useSkill = false;
    GameObject skill = null;
    private void Awake()
    {
        //listPool = new List<ObjectPool>();
        //for(int i = 0;i < listFruitPrbs.Count;i++)
        //{
        //    ObjectPool pool = new ObjectPool(5, listFruitPrbs[i].gameObject);
        //    listPool.Add(pool);
        //}
        RandomNextFruit();
        currentFruitLevel = nextFruitLevel;
    }
    public void SpawnCurrentFruit(Vector2 pos)
    {
        if (GameManager.Instance.gameState == GameState.GameOver) return;
        if(!useSkill)
        {
            GameObject go = Instantiate(listFruitPrbs[currentFruitLevel].gameObject); //listPool[currentFruitLevel].GetGOInactive();
            go.transform.position = pos;
            go.SetActive(true);
            go.GetComponent<Fruit>().controller = fruitController;
            RandomNextFruit();
        }
        else
        {
            if (skill == null) return;
            GameObject obj =  Instantiate(skill , pos, Quaternion.identity);
            obj.gameObject.SetActive(true);
            useSkill = false;
        }

    }

    public void SpawnFruit(int level , Vector2 pos)
    {
        if (level-1 == listFruitPrbs[listFruitPrbs.Count - 1].id) return;
        Debug.Log(level);
        GameObject go = Instantiate(listFruitPrbs[level-1].gameObject);// listPool[level].GetGOInactive();
        go.transform.position = pos;
        go.GetComponent<Fruit>().controller = fruitController;
        go.SetActive(true);

    }
    private void RandomNextFruit()
    {
        currentFruitLevel = nextFruitLevel;
        nextFruitLevel = UnityEngine.Random.Range(0,maxFruitLevelSpawn);
    }

    public Sprite GetNextFruitSprite()
    {
        return listFruitPrbs[nextFruitLevel].Sprite;
    }

    public Sprite GetCurrentFruitSprite()
    {
        return listFruitPrbs[currentFruitLevel].Sprite;
    }
    
    public void UseBoomFruit()
    {
        useSkill = true;
        skill = BoomFruit;
    }
    public void UseSwordSkill()
    {
        useSkill = true;
        skill = Sword;
    }
    public Sprite GetCurrentSkillSprite()
    {
        return skill.GetComponentInChildren<SpriteRenderer>().sprite;
    }
}
