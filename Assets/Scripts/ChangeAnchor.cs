using Sirenix.OdinInspector;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ChangeAnchor : MonoBehaviour
{
    [Button("Set anchor")]
    private void ResetAnchor()
    {
        SpringJoint2D spr = GetComponent<SpringJoint2D>();
        spr.anchor = Vector2.zero;
        spr.connectedAnchor = spr.anchor;
    }
}
