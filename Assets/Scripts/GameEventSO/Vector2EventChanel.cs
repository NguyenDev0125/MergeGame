using UnityEngine;
using System;
[CreateAssetMenu(fileName ="Vector2EventSO",menuName = "new Events/new Vector2 Event SO")]
public class Vector2EventChanel : ScriptableObject
{
    public Action<Vector2> onEventRaised;
    public void Raised(Vector2 vt2)
    {
#if UNITY_EDITOR
        if (onEventRaised == null) Debug.Log($"{name}.onEventRaised is null");
#endif
        onEventRaised?.Invoke(vt2);
    }
}
