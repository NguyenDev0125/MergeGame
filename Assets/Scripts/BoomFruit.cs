using DG.Tweening;
using System.Collections;
using UnityEditor;
using UnityEngine;

public class BoomFruit : MonoBehaviour
{
    [SerializeField] float range;
    [SerializeField] float delayBloom;
    [SerializeField] LayerMask fruitLayer;
    [SerializeField] CameraShaker cameraShaker;
    [SerializeField] Ease ease;
    [SerializeField] float scaleTime;
    EffectController efController;
    ScoreController scoreController;
    GameController gameController;

    bool isCol = false;
    private void Awake()
    {
        efController = FindObjectOfType<EffectController>();
        scoreController = FindObjectOfType<ScoreController>();
        gameController = FindObjectOfType<GameController>();
        cameraShaker = FindObjectOfType<CameraShaker>();
    }

    bool isBloom = false;
    private void OnCollisionEnter2D(Collision2D collision)
    {
        if(!isBloom)
        {
            isBloom = true;
            StartCoroutine(Bloom());
        }
        if(!isCol)
        {
            isCol = true;
            gameController.OnSkillFirstCol();
        }
    }

    private IEnumerator Bloom()
    {
        SoundManager.Instance?.PlaySound(SoundName.BoomTick);
        transform.DOScale(transform.localScale + new Vector3(0.1f,0.1f,0.1f), scaleTime)
     .SetEase(ease)
    .SetLoops(16, LoopType.Yoyo).OnComplete(()=>
    {
        Collider2D[] hits = Physics2D.OverlapCircleAll(transform.position, range, fruitLayer);
        foreach (Collider2D hit in hits)
        {
            Fruit fr = hit.GetComponent<Fruit>();
            if (fr != null && fr != this)
            {
                fr.HideFruit();
                efController.PlayTextPopup(fr.scoreToAdd.ToString(), fr.transform.position);
                scoreController.AddScore(fr.scoreToAdd);
            }
        }
        efController.Play(EffectName.explodeText, transform.position, transform.localScale);
        SoundManager.Instance.PlaySound(SoundName.Boom);
        cameraShaker.ShakeCamera(0.14f, 3f);
        VibrateManager.Vibrate(500,40);
        this.gameObject.SetActive(false);
    });

        yield return null;

    }
    private void OnDrawGizmos()
    {
        Gizmos.DrawWireSphere(transform.position, range);
    }
}
