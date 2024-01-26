using DG.Tweening;
using Sirenix.OdinInspector;
using SoftBody2D;
using System.Collections;
using System.Collections.Generic;
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

    [SerializeField]List<SpringJoint2D> listJoints;
    [SerializeField] Color color;
    public Color  Color => color;
    List<Vector2> listJointsInitPos;
    private void Awake()
    {
        cirCol = GetComponent<CircleCollider2D>();
        normalScale = transform.localScale;
        gameController = FindObjectOfType<GameController>();

        //listJointsInitPos = new List<Vector2>();
        //for(int i = 0; i < listJoints.Count; i++)
        //{
        //    listJointsInitPos.Add(listJoints[i].connectedAnchor);
        //}
    }
    [Button("Load")]
    private void LoadJoints()
    {
        int i = int.Parse(gameObject.name);
        id = i;
        spr = GetComponent<SoftSprite>().Sprite;
    }
    private void OnEnable()
    {
        merged = false;
        isCol = false;
        //Reset();
        transform.localScale = new Vector2(0.05f, 0.05f);
        transform.DOScale(normalScale, 0.4f);
    }
    private void Reset()
    {
        for (int i = 0; i < listJoints.Count; i++)
        {
            listJoints[i].connectedAnchor = listJointsInitPos[i];
        }
    }
    public void HideFruit()
    {
        Invoke("Hide", controller.delayMerge);
    }
    protected virtual void Hide()
    {
        //this.gameObject.SetActive(false);
        Destroy(gameObject);
    }
    private void OnTriggerEnter2D(Collider2D collider)
    {
        if (collider.gameObject.tag == "Wall") return;
        if (!isCol)
        {
            isCol = true;
            gameController.OnFruitFirstCol();
            SaveLoadManager.SaveGame();
            SoundManager.Instance?.PlaySound(SoundName.Bounce);
        }
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

        }
    }

}