using System;
using System.Collections;
using UnityEngine;
using static UnityEngine.ParticleSystem;

public class EffectController : MonoBehaviour
{
    public GameObject smokeEF;
    public GameObject smokeMagicEF;
    public GameObject explodeEF;
    public TextPopup textPopupEF;
    public TextPopup streakTextEF;
    public ParticleSystem[] particles;
    public float delayTime;
    private ObjectPool smokeEFPool;
    private ObjectPool smokeMagicEFPool;
    private ObjectPool explodeEFPool;
    

    private void Awake()
    {
        smokeEFPool = new ObjectPool(2, smokeEF);
        smokeMagicEFPool = new ObjectPool(2, smokeMagicEF);
        explodeEFPool = new ObjectPool(2, explodeEF);
    }
    public void Play(EffectName efName,Vector2 pos , Vector3 scale)
    {
        GameObject obj = null;
        
        switch (efName)
        {
            case EffectName.smoke: obj =smokeEFPool.GetGOInactive(); break;
            case EffectName.magicSmoke: obj =smokeMagicEFPool.GetGOInactive(); break;
            case EffectName.explodeText: obj =explodeEFPool.GetGOInactive(); obj.transform.position = pos; obj.SetActive(true); return;
        }
        obj.transform.localScale = scale;
        obj.transform.position = pos;
        obj.SetActive(true);
    }
    public void PlayTextPopup(string txt , Vector2 pos)
    {
        textPopupEF.ShowText("+"+txt, pos);
    }

    public void PlayStreakTextPopup(string txt)
    {
        streakTextEF.ShowText(txt, Vector2.zero);
    }
    Action callBack;
    public void PlayFirework(Action callBack)
    {
        this.callBack = callBack;
        StartCoroutine(IE_Show());
        
    }
    private IEnumerator IE_Show()
    {
        for (int i = 0; i < particles.Length; i++)
        {
            particles[i].gameObject.SetActive(true);
            yield return new WaitForSeconds(delayTime);
        }
        for (int i = 0; i < particles.Length; i++)
        {
            particles[i].gameObject.SetActive(true);
            yield return new WaitForSeconds(delayTime- 0.1f);
        }
        callBack?.Invoke();
    }
}

public enum EffectName
{
    smoke,
    magicSmoke,
    explodeText
}
