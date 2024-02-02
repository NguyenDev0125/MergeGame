using UnityEngine;

public class AutoDisableObject : MonoBehaviour
{
    [SerializeField] float delayTime;
    private void OnEnable()
    {
        Invoke("DisableObject", delayTime);
    }
    public void DisableObject()
    {
        gameObject.SetActive(false);
    }
}
