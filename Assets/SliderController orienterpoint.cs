using System;
using System.Linq;
using UnityEngine;
using UnityEngine.UI;

public class SliderController : MonoBehaviour
{
    public Slider xSlider;
    public Slider ySlider;
    public Transform objectToMove;

    public float offsetX = 0;
    public float offsetY = 0;
    public float xCurrent = 0;
    public float yCurrent = 0;
    public float speed = 0;
    double[] X_SET = { -1, -0.8, -0.6, -0.4, -0.2, 0, 0.2, 0.4, 0.6, 0.8, 1 };
    double[] Y_SET = { -1, -0.5, 0, 0.5, 1 };
    public double X_DELTA_LIMIT = 2.0 / (11 - 1) * 0.75;
    public double Y_DELTA_LIMIT = 2.0 / (5 - 1) * 0.75;
    public float TIMER_IDLE_RAND_LIMIT = 4.0f;
    static float timer_idle = 0;
    static float offsetX_idle = 0;
    static float offsetY_idle = 0;

    private Func<double, double[], double> closest = (val, set) =>
    {
        var c = set.Select(i => Math.Abs(val - i)).ToArray();
        return set[Array.IndexOf(c, c.Min())];
    };

    private void IdleMovement()
    {
        if (timer_idle <= 0)
        {
            offsetX_idle = UnityEngine.Random.Range((float)-xSlider.maxValue / 40, (float)xSlider.maxValue / 40);
            offsetY_idle = UnityEngine.Random.Range((float)-ySlider.maxValue / 40, (float)ySlider.maxValue / 40);
            timer_idle = UnityEngine.Random.Range(0.0f, TIMER_IDLE_RAND_LIMIT);
        }
        else { timer_idle -= Time.deltaTime;}
    }

    private void Start()
    {
        X_SET.Select(x => (x * xSlider.maxValue) + offsetX).ToArray().CopyTo(X_SET, 0);
        Y_SET.Select(y => (y * ySlider.maxValue) + offsetY).ToArray().CopyTo(Y_SET, 0);
        X_DELTA_LIMIT *= xSlider.maxValue;
        Y_DELTA_LIMIT *= ySlider.maxValue;
        xCurrent = offsetX;
        yCurrent = offsetY;
    }

    private void Update()
    {
        float xValue = xSlider.value + offsetX;
        float yValue = ySlider.value + offsetY;
        if (Math.Abs(xValue - xCurrent) > X_DELTA_LIMIT)
            xCurrent = (float)closest(xValue, X_SET);
        if (Math.Abs(yValue - yCurrent) > Y_DELTA_LIMIT)
            yCurrent = (float)closest(yValue, Y_SET);
        IdleMovement();
        objectToMove.position = Vector3.Lerp(objectToMove.position, 
            new Vector3(xCurrent + offsetX_idle, yCurrent + offsetY_idle, objectToMove.position.z), 
            Time.deltaTime * speed);
    }
}
