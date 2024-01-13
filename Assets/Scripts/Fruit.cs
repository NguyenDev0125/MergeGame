using DG.Tweening;
using System.Collections;
using UnityEngine;
public class Fruit : MonoBehaviour
{
    public int id;
    public string fruitName;
    public int coin;
    public int price;
    public bool defaultUnlocked;
    public float scaleDuration;
    public bool isCol = false;
    public float thrust;
    public int scoreToAdd = 1;
    public bool merged = false;
    public FruitController controller;
    public Sprite Sprite => spr;
    
    Vector2 normalScale;
    GameController gameController;
    [SerializeField] Sprite spr;
    [SerializeField] protected Rigidbody2D rb;
    [SerializeField] protected CircleCollider2D cirCol;
    [SerializeField] protected LayerMask fruitLayer;

    private void Awake()
    {
        cirCol = GetComponent<CircleCollider2D>();
        normalScale = transform.localScale;
        gameController = FindObjectOfType<GameController>();
    }
    private void OnEnable()
    {
        merged = false;
        isCol = false;
        transform.localScale = new Vector2(0.1f, 0.1f);
        transform.DOScale(normalScale, 0.3f).SetEase(Ease.OutBack);
    }

    public void HideFruit()
    {
        Invoke("Hide", controller.delayMerge);
    }
    protected virtual void Hide()
    {
        this.gameObject.SetActive(false);
    }
    private void OnCollisionEnter2D(Collision2D collision)
    {
        if (!isCol)
        {
            isCol = true;
            gameController.OnFruitFirstCol();
            SoundManager.Instance?.PlaySound(SoundName.Bounce);

        }
    }
    private void OnTriggerEnter2D(Collider2D collider)
    {
        if (collider.gameObject.tag == "Wall") return;
        if (merged) return;
        TryMergeFruit(collider.gameObject);
    }

    private void TryMergeFruit(GameObject col)
    {
        Fruit fr = col.GetComponent<Fruit>();
        if (fr == null) return;
        if (fr.id == id && !fr.merged && !this.merged)
        {
            this.merged = true;
            fr.merged = true;
            controller.MergeFruit(this, fr);
            this.HideFruit();
            fr.HideFruit();
        }
    }

}