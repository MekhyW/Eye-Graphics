using UnityEngine;
using UnityEngine.UI;

public class SliderController : MonoBehaviour
{
    public Slider xSlider;
    public Slider ySlider;
    public Transform objectToMove;
    public float offsetX = 0;
    public float offsetY = 0;

    private void Update()
    {
        float xValue = xSlider.value;
        float yValue = ySlider.value;
        xValue += offsetX;
        yValue += offsetY;
        objectToMove.position = new Vector3(xValue, yValue, objectToMove.position.z);
    }
}
