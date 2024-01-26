using Coffee.UIEffects;
using DG.Tweening;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class Cloud : MonoBehaviour
{
    [SerializeField] Image nextFruitSpriteR;
    [SerializeField] Image currentFruitR;
    [SerializeField] LineRenderer lineRenderer;
    [SerializeField] TextMeshProUGUI numText;
    [SerializeField] LayerMask layerMask;
    bool isShowLine = false;
    Vector3 currentFruitInitScale;
    Vector3 nextFruitInitScale;
    private void Awake()
    {
        currentFruitInitScale = currentFruitR.transform.localScale;
        nextFruitInitScale = nextFruitSpriteR.transform.localScale;
    }
    public void ShowLine(Color color)
    {
        isShowLine = true;
        lineRenderer.material.color = color;
        //float alpha = 1.0f;
        //Gradient gradient = new Gradient();
        //gradient.SetKeys(
        //    new GradientColorKey[] { new GradientColorKey(color, 0.0f), new GradientColorKey(color, 1.0f) },
        //    new GradientAlphaKey[] { new GradientAlphaKey(alpha, 1f), new GradientAlphaKey(alpha, 1.0f) }
        //);
        //lineRenderer.colorGradient = gradient;
        nextFruitSpriteR.color = color;
    }
    public void SetNextFruitSprite(Sprite spr)
    {
        nextFruitSpriteR.sprite = spr;
        nextFruitSpriteR.gameObject.SetActive(true);
    }

    public void SetCurrentFruitSprite(Sprite spr)
    {
        currentFruitR.transform.localScale = new Vector2(0.1f, 0.1f);
        currentFruitR.transform.DOScale(currentFruitInitScale, 0.3f);
        currentFruitR.sprite = spr;
        currentFruitR.gameObject.SetActive(true);
    }
    public void SetNumText(int num)
    {
        numText.text = num.ToString();
        if(PlayerData.RemoveAds == 1)
        {
            numText.gameObject.SetActive(false);
        }
    }
    public void HideLine()
    {
        isShowLine=false;
    }

    public void HideHintFruit()
    {
        currentFruitR.gameObject.SetActive(false);
        nextFruitSpriteR.gameObject.SetActive(false);
    }
    private void FixedUpdate()
    {
        if(isShowLine)
        {
            RaycastHit2D hit = Physics2D.Raycast(transform.position , Vector2.down , Mathf.Infinity , layerMask);
            if(hit.collider != null)
            {
                lineRenderer.gameObject.SetActive(true);
                lineRenderer.SetPositions(new Vector3[] {transform.position, hit.point});
            }
        }
        else
        {
            lineRenderer.gameObject.SetActive(false);
        }
    }
}
