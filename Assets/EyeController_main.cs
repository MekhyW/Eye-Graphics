using Live2D.Cubism.Core;
using System;
using System.Linq;
using UnityEngine;
using UnityEngine.UI;

public class EyeController_main : MonoBehaviour
{
    public Slider xSlider, ySlider, leftEyeClosenessSlider, rightEyeClosenessSlider,
        angrySlider, disgustedSlider, happySlider, neutralSlider, sadSlider, surprisedSlider,
        hypnoticSlider, heartSlider, rainbowSlider, nightmareSlider, gearsSlider, sansSlider;
    public CubismParameter eyeballX, eyeballY, eyeOpenL, eyeOpenR, eyeSmileL, eyeSmileR, eyeDeform,
        browYL, browYR, browAngleL, browAngleR,
        activSpace, activCry, activHypno, activHeart, activRainbow, activNightmare, activGears, activFire, activSans;

    float xCurrent = 0;
    float yCurrent = 0;
    float eyelidLeftCurrent = 0;
    float eyelidRightCurrent = 0;
    public float speed = 25;
    double[] X_SET = { -1, -0.8, -0.6, -0.4, -0.2, 0, 0.2, 0.4, 0.6, 0.8, 1 };
    double[] Y_SET = { -1, -0.5, 0, 0.5, 1 };
    double[] EYELID_SET = { 1.2, 0.7, 0.2, 0 };
    double X_DELTA_LIMIT = 2.0 / (11 - 1) * 0.75;
    double Y_DELTA_LIMIT = 2.0 / (5 - 1) * 0.75;
    double EYELID_DELTA_LIMIT = 0.1;
    public float TIMER_IDLE_RAND_LIMIT = 1.0f;
    static float timer_idle = 0;
    static float offsetX_idle = 0;
    static float offsetY_idle = 0;

    private Func<double, double[], double> closest = (val, set) =>
    {
        var c = set.Select(i => Math.Abs(val - i)).ToArray();
        return set[Array.IndexOf(c, c.Min())];
    };

    private void MoveEyes()
    {
        if (Math.Abs(xSlider.value - xCurrent) > X_DELTA_LIMIT)
            xCurrent = (float)closest(xSlider.value, X_SET);
        if (Math.Abs(ySlider.value - yCurrent) > Y_DELTA_LIMIT)
            yCurrent = (float)closest(ySlider.value, Y_SET);
        if (timer_idle <= 0 && hypnoticSlider.value < hypnoticSlider.maxValue/2)
        {
            offsetX_idle = UnityEngine.Random.Range((float)-xSlider.maxValue / 20, (float)xSlider.maxValue / 20);
            offsetY_idle = UnityEngine.Random.Range((float)-ySlider.maxValue / 20, (float)ySlider.maxValue / 20);
            timer_idle = UnityEngine.Random.Range(0.0f, TIMER_IDLE_RAND_LIMIT);
        }
        else { timer_idle -= Time.deltaTime; }
        eyeballX.Value = Mathf.Lerp(eyeballX.Value, xCurrent + offsetX_idle, Time.deltaTime * speed);
        eyeballY.Value = Mathf.Lerp(eyeballY.Value, yCurrent + offsetY_idle, Time.deltaTime * speed);
    }

    private void MoveEyelids()
    {
        if (Math.Abs(leftEyeClosenessSlider.value - eyelidLeftCurrent) > EYELID_DELTA_LIMIT)
            eyelidLeftCurrent = (float)closest(leftEyeClosenessSlider.value, EYELID_SET);
        if (Math.Abs(rightEyeClosenessSlider.value - eyelidRightCurrent) > EYELID_DELTA_LIMIT)
            eyelidRightCurrent = (float)closest(rightEyeClosenessSlider.value, EYELID_SET);
        eyeOpenL.Value = Mathf.Lerp(eyeOpenL.Value, leftEyeClosenessSlider.maxValue - eyelidLeftCurrent, Time.deltaTime * speed);
        eyeOpenR.Value = Mathf.Lerp(eyeOpenR.Value, rightEyeClosenessSlider.maxValue - eyelidRightCurrent, Time.deltaTime * speed);
    }

    private void ApplyExpressions()
    {
        eyeSmileL.Value = Mathf.Lerp(eyeSmileL.Value, happySlider.value, Time.deltaTime * speed);
        eyeSmileR.Value = Mathf.Lerp(eyeSmileR.Value, happySlider.value, Time.deltaTime * speed);
        eyeDeform.Value = Mathf.Lerp(eyeDeform.Value, surprisedSlider.value, Time.deltaTime * speed);
        browYL.Value = Mathf.Lerp(browYL.Value, surprisedSlider.value - sadSlider.value, Time.deltaTime * speed);
        browYR.Value = Mathf.Lerp(browYR.Value, surprisedSlider.value - sadSlider.value, Time.deltaTime * speed);
        browAngleL.Value = Mathf.Lerp(browAngleL.Value, angrySlider.value - sadSlider.value, Time.deltaTime * speed);
        browAngleR.Value = Mathf.Lerp(browAngleR.Value, angrySlider.value - sadSlider.value, Time.deltaTime * speed);
        activSpace.Value = Mathf.Lerp(activSpace.Value, happySlider.value - neutralSlider.value, Time.deltaTime * speed);
        activCry.Value = Mathf.Lerp(activCry.Value, sadSlider.value - neutralSlider.value, Time.deltaTime * speed);
        activFire.Value = Mathf.Lerp(activFire.Value, angrySlider.value - neutralSlider.value, Time.deltaTime * speed);
        activHypno.Value = Mathf.Lerp(activHypno.Value, hypnoticSlider.value, Time.deltaTime * speed);
        activHeart.Value = Mathf.Lerp(activHeart.Value, heartSlider.value, Time.deltaTime * speed);
        activRainbow.Value = Mathf.Lerp(activRainbow.Value, rainbowSlider.value, Time.deltaTime * speed);
        activNightmare.Value = Mathf.Lerp(activNightmare.Value, nightmareSlider.value, Time.deltaTime * speed);
        activGears.Value = Mathf.Lerp(activGears.Value, gearsSlider.value, Time.deltaTime * speed);
        activSans.Value = Mathf.Lerp(activSans.Value, sansSlider.value, Time.deltaTime * speed);
    }

    private void Update()
    {
        MoveEyes();
        MoveEyelids();
        ApplyExpressions();
    }
}
