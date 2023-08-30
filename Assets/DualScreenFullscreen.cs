using UnityEngine;

public class DualScreenFullscreen : MonoBehaviour
{
    void Start()
    {
        int screenWidth = Screen.currentResolution.width;
        int screenHeight = Screen.currentResolution.height;
        Screen.SetResolution(screenWidth * 2, screenHeight, true);
        Debug.Log("New resolution: " + Screen.width + "x" + Screen.height);
    }
}
