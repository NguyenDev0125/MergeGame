using UnityEngine;

public class MapGenerator : MonoBehaviour
{
    [SerializeField] GameObject ground;
    [SerializeField] GameObject leftBound;
    [SerializeField] GameObject rightBound;
    [SerializeField] GameObject fruitSpawnPoint;
    [SerializeField] GameObject redZone;
    Vector2 cameraPos;
    Vector2 cameraHaftSize;

    private void Awake()
    {
        cameraPos = CameraInfo.Position;
        cameraHaftSize = CameraInfo.HaftSize;
        SetupMap();
    }

    private void SetupMap()
    {

       //ground.transform.localScale = new Vector3(cameraHaftSize.x * 2 + 2f, 2f, 1.5f);
        ground.transform.position = cameraPos - new Vector2(0f, cameraHaftSize.y - 2f);
        leftBound.transform.localScale = new Vector3(1f, cameraHaftSize.y * 2f, 1f);
        rightBound.transform.localScale = leftBound.transform.localScale;

        leftBound.transform.position = new Vector2(cameraPos.x - cameraHaftSize.x - 0.5f, cameraPos.y);
        rightBound.transform.position = new Vector2(cameraPos.x + cameraHaftSize.x + 0.5f, cameraPos.y);

        fruitSpawnPoint.transform.position = cameraPos + new Vector2(0f,cameraHaftSize.y - 5.5f);
        redZone.transform.position = fruitSpawnPoint.transform.position - new Vector3(0, 0.5f);
        //redZone.transform.localScale = new Vector2(cameraHaftSize.x * 2, redZone.transform.localScale.y);
    }
}
