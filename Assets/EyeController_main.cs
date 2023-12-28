using Live2D.Cubism.Core;
using System;
using System.Linq;
using UnityEngine;
using UnityEngine.UI;

public class EyeController_main : MonoBehaviour
{
    public Slider xSlider, ySlider, leftEyeClosenessSlider, rightEyeClosenessSlider;
    public Slider angrySlider, disgustedSlider, happySlider, sadSlider, surprisedSlider;
    public CubismParameter eyeX, eyeY, eyeClosenessL, eyeClosenessR, eyeAngry, eyeHappy, eyeSad, eyeSurprised;

    float xCurrent = 0;
    float yCurrent = 0;
    public float speed = 25;
    double[] X_SET = { -1, -0.8, -0.6, -0.4, -0.2, 0, 0.2, 0.4, 0.6, 0.8, 1 };
    double[] Y_SET = { -1, -0.5, 0, 0.5, 1 };
    double X_DELTA_LIMIT = 2.0 / (11 - 1) * 0.75;
    double Y_DELTA_LIMIT = 2.0 / (5 - 1) * 0.75;
    public float TIMER_IDLE_RAND_LIMIT = 1.0f;
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
            offsetX_idle = UnityEngine.Random.Range((float)-xSlider.maxValue / 20, (float)xSlider.maxValue / 20);
            offsetY_idle = UnityEngine.Random.Range((float)-ySlider.maxValue / 20, (float)ySlider.maxValue / 20);
            timer_idle = UnityEngine.Random.Range(0.0f, TIMER_IDLE_RAND_LIMIT);
        }
        else { timer_idle -= Time.deltaTime; }
    }

    private void Update()
    {
        if (Math.Abs(xSlider.value - xCurrent) > X_DELTA_LIMIT)
            xCurrent = (float)closest(xSlider.value, X_SET);
        if (Math.Abs(ySlider.value - yCurrent) > Y_DELTA_LIMIT)
            yCurrent = (float)closest(ySlider.value, Y_SET);
        IdleMovement();
        eyeX.Value = Mathf.Lerp(eyeX.Value, xCurrent + offsetX_idle, Time.deltaTime * speed);
        eyeY.Value = Mathf.Lerp(eyeY.Value, yCurrent + offsetY_idle, Time.deltaTime * speed);
        eyeClosenessL.Value = Mathf.Lerp(eyeClosenessL.Value, 1 - leftEyeClosenessSlider.value, Time.deltaTime * speed);
        eyeClosenessR.Value = Mathf.Lerp(eyeClosenessR.Value, 1 - rightEyeClosenessSlider.value, Time.deltaTime * speed);
        eyeAngry.Value = Mathf.Lerp(eyeAngry.Value, angrySlider.value, Time.deltaTime * speed);
        //eyeDisgusted.Value = Mathf.Lerp(eyeDisgusted.Value, disgustedSlider.value, Time.deltaTime * speed);
        eyeHappy.Value = Mathf.Lerp(eyeHappy.Value, happySlider.value, Time.deltaTime * speed);
        eyeSad.Value = Mathf.Lerp(eyeSad.Value, sadSlider.value, Time.deltaTime * speed);
        eyeSurprised.Value = Mathf.Lerp(eyeSurprised.Value, surprisedSlider.value, Time.deltaTime * speed);
    }
}
