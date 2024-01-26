using System.Collections.Generic;
using UnityEngine;

public class FruitManager
{
    static Dictionary<int, Fruit> map0;
    static bool resourceLoaded = false;
    public static Dictionary<int, Fruit> Fruits
    {
        get
        {
            if(!resourceLoaded) LoadResource();
            return map0;
        }
    }
    private static void LoadResource()
    {
        Fruit[] fruits;
        if (PlayerPrefs.GetInt("map_selected", 0) == 0)
        {
            fruits = Resources.LoadAll<Fruit>("SlimeSort");
        }
        else
        {
            fruits = Resources.LoadAll<Fruit>("SlimeSort");
        }

        map0 = new Dictionary<int, Fruit>();
        for(int i = 0; i < fruits.Length; i++)
        {
            map0.Add(fruits[i].id, fruits[i]);
        }
        resourceLoaded = true;
    }
    public static Fruit GetFruitById(int id)
    {
        if(map0 == null)
        {
            LoadResource();
        }
        return map0[id];
    }
}
