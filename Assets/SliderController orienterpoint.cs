using UnityEngine;
using UnityEngine.UI;

public class SliderController : MonoBehaviour
{
    public Slider xSlider;
    public Slider ySlider;
    public Transform objectToMove;

    private void Update()
    {
        float xValue = xSlider.value;
        float yValue = ySlider.value;
        objectToMove.position = new Vector3(xValue, yValue, objectToMove.position.z);
    }
}
