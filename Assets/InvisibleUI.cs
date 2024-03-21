using UnityEngine;

public class ToggleCanvasChildren : MonoBehaviour
{
    private bool isVisible = false;

    void SetVisibility(bool visible)
    {
        foreach (Transform child in transform)
        {
            child.gameObject.SetActive(visible);
        }
    }

    void Start()
    {
        SetVisibility(false);
    }

    void Update()
    {
        if (Input.GetKeyDown(KeyCode.D))
        {
            isVisible = !isVisible;
            SetVisibility(isVisible);
        }
    }
}
