using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;

public class TouchInputManager : MonoBehaviour, IBeginDragHandler, IDragHandler, IEndDragHandler
{
    public delegate void TouchEventHandle(Vector2 wordPos);
    public event TouchEventHandle OnBeginDragEvent;
    public event TouchEventHandle OnDragEvent;
    public event TouchEventHandle OnEndDragEvent;
    public void OnBeginDrag(PointerEventData eventData)
    {
        OnBeginDragEvent?.Invoke(eventData.pointerCurrentRaycast.worldPosition);
    }

    public void OnDrag(PointerEventData eventData)
    {

        OnDragEvent?.Invoke(eventData.pointerCurrentRaycast.worldPosition);
    }

    public void OnEndDrag(PointerEventData eventData)
    {

        OnEndDragEvent?.Invoke(eventData.pointerCurrentRaycast.worldPosition);
    }
}
