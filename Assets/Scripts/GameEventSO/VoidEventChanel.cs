using UnityEngine;
using System.Collections;
using System;
[CreateAssetMenu(fileName = "VoidEventChanelSO" , menuName = "new Events/ new Void Event SO")]
public class VoidEventChanel : ScriptableObject
{
    public event Action onEventRaised;
    public void Raised()
    {
#if UNITY_EDITOR
        if (onEventRaised == null) Debug.Log($"{name}.onEventRaised is null");
#endif
        onEventRaised?.Invoke();
    }
}
public class Subject
{
    [SerializeField] VoidEventChanel OnDie;
    public void Die()
    {
        OnDie.Raised();
    }
}

public class Observer : MonoBehaviour
{
    
    [SerializeField] VoidEventChanel OnDie;
    private void Awake()
    {
        OnDie.onEventRaised += Awake;
    }
    public void EndGame()
    {
        Debug.Log("End game");
    }
}

