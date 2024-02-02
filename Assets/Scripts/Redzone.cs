using UnityEngine;
using System.Collections;

public class Redzone : MonoBehaviour
{
    [SerializeField] LayerMask fruitLayer;
    [SerializeField] float delayCastTime;
    [SerializeField] float maxTime;
    [SerializeField] EffectController effectController;
    [SerializeField] UIController uiController;
    float distRay;
    float timer = 0f;
    private void Awake()
    {
        distRay = CameraInfo.HaftSize.x * 2f;
        StartCoroutine(CheckFruitOutRange());
    }

    private IEnumerator CheckFruitOutRange()
    {
        while (true)
        {
            yield return new WaitForSeconds(delayCastTime);
            Vector2 castPos = new Vector2(transform.position.x - CameraInfo.HaftSize.x, transform.position.y + 0.1f);
            RaycastHit2D hit = Physics2D.Raycast(castPos, Vector2.right, distRay, fruitLayer);
            Debug.DrawRay(castPos, Vector2.right * distRay, Color.blue, 3f);
            if (hit.collider != null)
            {
                Fruit fr = hit.collider.gameObject.GetComponent<Fruit>();   
                if(fr != null && fr.IsCollided)
                {
                    timer += delayCastTime;

                    if (timer > maxTime && GameManager.Instance.gameState == GameState.Playing)
                    {
                        GameManager.Instance.GameOver();
                        timer = 0f;
                    }
                    else if (timer > 3)
                    {
                        effectController.PlayScreenRedEffect();
                        SoundManager.Instance.PlaySound(SoundName.Warning);
                        uiController.PingItem();
                    }
                }

            }
            else
            {
                timer = 0f;
                uiController.StopPingItem();
            }
        }


    }


    //private IEnumerator CheckFruitOutRange()
    //{
    //    while(true)
    //    {
    //        yield return new WaitForSeconds(delayCastTime);
    //        Vector2 castPos = new Vector2(transform.position.x - CameraInfo.HaftSize.x, transform.position.y + 0.1f);
    //        RaycastHit2D hit = Physics2D.Raycast(castPos, Vector2.right, distRay, fruitLayer);
    //        Debug.DrawRay(castPos, Vector2.right * distRay, Color.blue, 3f);
    //        if (hit.collider != null)
    //        {
    //            timer += delayCastTime;
    //            effectController.PlayScreenRedEffect();
    //            if(timer > maxTime && GameManager.Instance.gameState == GameState.Playing)
    //            {
    //                GameManager.Instance.GameOver();
    //                timer = 0f;
    //            }
    //        }
    //        else
    //        {
    //            timer = 0f;
    //        }
    //    }
    //}
}
