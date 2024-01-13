using System;
using UnityEngine;
[CreateAssetMenu(fileName = "FruitArrEventChanelSO", menuName = "new Events/new FruitArr Event SO")]
public class FruitArrEventChanel : ScriptableObject
{
    public Action<Fruit[]> onEventRaised;
    public void Raised(Fruit[] arr)
    {
#if UNITY_EDITOR
        if (onEventRaised == null) Debug.Log($"{name}.onEventRaised is null");
#endif
        onEventRaised?.Invoke(arr);
    }
}
