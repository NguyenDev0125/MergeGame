using UnityEngine;

public class SwordSkill : MonoBehaviour
{
    EffectController efController;
    ScoreController scoreManager;
    GameController gameController;
    CameraShaker shaker;
    bool isFirtsCol = false;
    private void OnEnable()
    {
        efController = FindObjectOfType<EffectController>();
        scoreManager = FindObjectOfType<ScoreController>();
        gameController = FindObjectOfType<GameController>();
        shaker = FindFirstObjectByType<CameraShaker>();
        SoundManager.Instance.PlaySound(SoundName.Sword);
        Destroy(this.gameObject, 10f);
    }
    private void OnTriggerEnter2D(Collider2D collision)
    {
        if(!isFirtsCol)
        {
            isFirtsCol = true;
            gameController.OnSkillFirstCol();
        }
        Fruit fruit = collision.GetComponent<Fruit>();
        if(fruit != null )
        {
            fruit.gameObject.SetActive(false);
            efController.PlayTextPopup(fruit.scoreToAdd.ToString() , fruit.transform.position);
            efController.Play(EffectName.smoke, fruit.transform.position , fruit.transform.localScale);
            SoundManager.Instance.PlaySound(SoundName.MergeFruit2, 3);
            VibrateManager.Vibrate(40, 20);
            shaker.ShakeCamera(0.2f, 0.1f);
            scoreManager.AddScore(fruit.scoreToAdd);
        }
    }
}
