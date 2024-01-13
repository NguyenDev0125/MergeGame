using System.Collections.Generic;
using UnityEngine;

public class ObjectPool
{
    private List<GameObject> listObj;
    private GameObject prb;
    private Transform container;

    public ObjectPool(int size, GameObject prb)
    {
        container = GameObject.Find("ObjectPoolingContainer").transform;
        listObj = new List<GameObject>();
        this.prb = prb;
        for(int i = 0; i < size; i++)
        {
            listObj.Add(GameObject.Instantiate(prb));
            listObj[i].SetActive(false);
        }
    }

    public ObjectPool(int size, GameObject prb , Transform parent)
    {
        container = parent;
        listObj = new List<GameObject>();
        this.prb = prb;
        for (int i = 0; i < size; i++)
        {
            listObj.Add(GameObject.Instantiate(prb , container));
            listObj[i].SetActive(false);
        }
    }

    public GameObject GetGOInactive()
    {
        foreach(GameObject go in listObj)
        {
            if (!go.activeInHierarchy) return go;
        }
        GameObject clone = GameObject.Instantiate(prb , container);
        listObj.Add(clone);
        return clone;
    }
}
