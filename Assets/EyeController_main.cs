using Live2D.Cubism.Core;
using System;
using System.Linq;
using UnityEngine;
using UnityEngine.UI;

public class EyeController_main : MonoBehaviour
{
    public Slider xSlider, ySlider, leftEyeClosenessSlider, rightEyeClosenessSlider,
        angrySlider, disgustedSlider, happySlider, neutralSlider, sadSlider, surprisedSlider,
        hypnoticSlider, heartSlider, rainbowSlider, nightmareSlider, gearsSlider, sansSlider, mischievousSlider;
    public Toggle sillyMode;
    public CubismParameter eyeballXL, eyeballYL, eyeballXR, eyeballYR, eyeOpenL, eyeOpenR, eyeSmileL, eyeSmileR, eyeDeform,
        browYL, browYR, browAngleL, browAngleR,
        activSpace, activCry, activHypno, activHeart, activRainbow, activNightmare, activGears, activFire, activSans;

    const float speed = 35;
    const float TIMER_IDLE_RAND_MAX = 1.5f;
    const float TIMER_YMOVE_RAND_MAX = 6.0f;
    const float TIMER_BLINK_RAND_MAX = 16.0f;
    const float BLINK_DURATION = 0.1f;
    const float AVG_SLIDER_EYEBALLS = 0.5f;
    const float AVG_SLIDER_EYELIDS = 0.6f;
    const float AVG_SLIDER_EXPRS = 0.5f;
    static double[] X_SET = { -1, -0.9, -0.8, -0.7, -0.6, -0.5, -0.4, -0.3, -0.2, -0.1, 0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1 };
    double X_DELTA_LIMIT = 2.0 / (X_SET.Length - 1) * 0.75;

    float xCurrent = 0;
    float yCurrent = 0;
    static float timer_idle = 0;
    static float timer_ymove = 0;
    static float timer_blink = 0;
    static float offsetX_idle = 0;
    static float offsetY_idle = 0;

    private Func<double, double[], double> closest = (val, set) =>
    {
        var c = set.Select(i => Math.Abs(val - i)).ToArray();
        return set[Array.IndexOf(c, c.Min())];
    };

    private static float RandomGaussian(float minValue = 0.0f, float maxValue = 1.0f)
    {
        float u, v, S;
        do
        {
            u = 2.0f * UnityEngine.Random.value - 1.0f;
            v = 2.0f * UnityEngine.Random.value - 1.0f;
            S = u * u + v * v;
        }
        while (S >= 1.0f);
        float std = u * Mathf.Sqrt(-2.0f * Mathf.Log(S) / S);
        float mean = (minValue + maxValue) / 2.0f;
        float sigma = (maxValue - mean) / 3.0f;
        return Mathf.Clamp(std * sigma + mean, minValue, maxValue);
    }

    private void MoveEyes()
    {
        if (sillyMode.isOn)
        {
            eyeballXL.Value = Mathf.Lerp(eyeballXL.Value, 0.7f, Time.deltaTime * speed);
            eyeballXR.Value = Mathf.Lerp(eyeballXR.Value, -0.9f, Time.deltaTime * speed);
            eyeballYL.Value = Mathf.Lerp(eyeballYL.Value, 0.7f, Time.deltaTime * speed);
            eyeballYR.Value = Mathf.Lerp(eyeballYR.Value, -0.8f, Time.deltaTime * speed);
            return;
        }
        if (hypnoticSlider.value > AVG_SLIDER_EXPRS)
        {
            eyeballXL.Value = Mathf.Lerp(eyeballXL.Value, 0, Time.deltaTime * speed);
            eyeballXR.Value = Mathf.Lerp(eyeballXR.Value, 0, Time.deltaTime * speed);
            eyeballYL.Value = Mathf.Lerp(eyeballYL.Value, 0, Time.deltaTime * speed);
            eyeballYR.Value = Mathf.Lerp(eyeballYR.Value, 0, Time.deltaTime * speed);
            return;
        }
        if (Math.Abs(xSlider.value - xCurrent) > X_DELTA_LIMIT) { xCurrent = (float)closest(xSlider.value, X_SET); }
        if (timer_ymove <= 0)
        {
            yCurrent = RandomGaussian((float)-AVG_SLIDER_EYEBALLS, (float)AVG_SLIDER_EYEBALLS);
            timer_ymove = UnityEngine.Random.Range(0.0f, TIMER_YMOVE_RAND_MAX);
        }
        else { timer_ymove -= Time.deltaTime; }
        if (timer_idle <= 0)
        {
            offsetX_idle = UnityEngine.Random.Range((float)-xSlider.maxValue / 20, (float)xSlider.maxValue / 20);
            offsetY_idle = UnityEngine.Random.Range((float)-ySlider.maxValue / 20, (float)ySlider.maxValue / 20);
            timer_idle = UnityEngine.Random.Range(0.0f, TIMER_IDLE_RAND_MAX);
        }
        else { timer_idle -= Time.deltaTime; }
        eyeballXL.Value = Mathf.Lerp(eyeballXL.Value, xCurrent + offsetX_idle, Time.deltaTime * speed);
        eyeballYL.Value = Mathf.Lerp(eyeballYL.Value, yCurrent + offsetY_idle, Time.deltaTime * speed);
        eyeballXR.Value = eyeballXL.Value;
        eyeballYR.Value = eyeballYL.Value;
    }

    private void MoveEyelids()
    {
        if (hypnoticSlider.value > AVG_SLIDER_EXPRS)
        {
            eyeOpenL.Value = Mathf.Lerp(eyeOpenL.Value, leftEyeClosenessSlider.maxValue - 0.2f, Time.deltaTime * speed);
            eyeOpenR.Value = Mathf.Lerp(eyeOpenR.Value, rightEyeClosenessSlider.maxValue - 0.2f, Time.deltaTime * speed);
            return;
        }
        if (mischievousSlider.value > AVG_SLIDER_EXPRS)
        {
            eyeOpenL.Value = Mathf.Lerp(eyeOpenL.Value, leftEyeClosenessSlider.maxValue - 0.7f, Time.deltaTime * speed);
            eyeOpenR.Value = Mathf.Lerp(eyeOpenR.Value, rightEyeClosenessSlider.maxValue - 0.7f, Time.deltaTime * speed);
            return;
        }
        if (Math.Abs(leftEyeClosenessSlider.value - rightEyeClosenessSlider.value) > AVG_SLIDER_EYELIDS)
        {
            eyeOpenL.Value = Mathf.Lerp(eyeOpenL.Value, leftEyeClosenessSlider.maxValue - leftEyeClosenessSlider.value, Time.deltaTime * speed);
            eyeOpenR.Value = Mathf.Lerp(eyeOpenR.Value, rightEyeClosenessSlider.maxValue - rightEyeClosenessSlider.value, Time.deltaTime * speed);
            return;
        }
        float sliderVal = (leftEyeClosenessSlider.value + rightEyeClosenessSlider.value) / 2;
        if (timer_blink <= 0)
        {
            eyeOpenL.Value = Mathf.Lerp(eyeOpenL.Value, leftEyeClosenessSlider.minValue, Time.deltaTime * speed);
            eyeOpenR.Value = Mathf.Lerp(eyeOpenR.Value, rightEyeClosenessSlider.minValue, Time.deltaTime * speed);
            if (timer_blink < -BLINK_DURATION) { timer_blink = UnityEngine.Random.Range(0.0f, TIMER_BLINK_RAND_MAX); }
        }
        else
        {
            eyeOpenL.Value = Mathf.Lerp(eyeOpenL.Value, leftEyeClosenessSlider.maxValue - sliderVal, Time.deltaTime * speed);
            eyeOpenR.Value = Mathf.Lerp(eyeOpenR.Value, rightEyeClosenessSlider.maxValue - sliderVal, Time.deltaTime * speed);
        }
        if (sliderVal < 0.5) { timer_blink -= Time.deltaTime; }
    }

    private void ApplyExpressions()
    {
        float topExpr = Mathf.Max(angrySlider.value, disgustedSlider.value, happySlider.value, neutralSlider.value, sadSlider.value, surprisedSlider.value);
        //Smile L
        if (topExpr == happySlider.value || topExpr == disgustedSlider.value || topExpr == angrySlider.value) { eyeSmileL.Value = Mathf.Lerp(eyeSmileL.Value, topExpr, Time.deltaTime * speed); }
        else { eyeSmileL.Value = Mathf.Lerp(eyeSmileL.Value, 0, Time.deltaTime * speed); }
        //Smile R
        if (topExpr == happySlider.value) { eyeSmileR.Value = Mathf.Lerp(eyeSmileR.Value, topExpr, Time.deltaTime * speed); }
        else { eyeSmileR.Value = Mathf.Lerp(eyeSmileR.Value, 0, Time.deltaTime * speed); }
        //Deform
        if (sillyMode.isOn) { eyeDeform.Value = Mathf.Lerp(eyeDeform.Value, 0, Time.deltaTime * speed); }
        else if (topExpr == surprisedSlider.value || topExpr == disgustedSlider.value) { eyeDeform.Value = Mathf.Lerp(eyeDeform.Value, topExpr*0.5f, Time.deltaTime * speed); }
        else if (topExpr == angrySlider.value) { eyeDeform.Value = Mathf.Lerp(eyeDeform.Value, topExpr*0.25f, Time.deltaTime * speed); }
        else { eyeDeform.Value = Mathf.Lerp(eyeDeform.Value, 0, Time.deltaTime * speed); }
        //Brow Y L
        if (mischievousSlider.value > AVG_SLIDER_EXPRS) { browYL.Value = Mathf.Lerp(browYL.Value, -browYL.MaximumValue, Time.deltaTime * speed); }
        else if (topExpr == surprisedSlider.value) { browYL.Value = Mathf.Lerp(browYL.Value, topExpr, Time.deltaTime * speed); }
        else if (topExpr == sadSlider.value || topExpr == angrySlider.value || topExpr == disgustedSlider.value) { browYL.Value = Mathf.Lerp(browYL.Value, -topExpr, Time.deltaTime * speed); }
        else { browYL.Value = Mathf.Lerp(browYL.Value, 0, Time.deltaTime * speed); }
        //Brow Y R
        if (topExpr == disgustedSlider.value) { browYR.Value = -browYL.Value; }
        else { browYR.Value = browYL.Value; }
        //Brow Angle L
        if (mischievousSlider.value > AVG_SLIDER_EXPRS) { browAngleL.Value = Mathf.Lerp(browAngleL.Value, browAngleL.MaximumValue - 0.5f, Time.deltaTime * speed); }
        else if (topExpr == angrySlider.value || topExpr == disgustedSlider.value) { browAngleL.Value = Mathf.Lerp(browAngleL.Value, topExpr, Time.deltaTime * speed); }
        else if (topExpr == sadSlider.value) { browAngleL.Value = Mathf.Lerp(browAngleL.Value, -topExpr, Time.deltaTime * speed); }
        else { browAngleL.Value = Mathf.Lerp(browAngleL.Value, 0, Time.deltaTime * speed); }
        //Brow Angle R
        if (topExpr == disgustedSlider.value) { browAngleR.Value = browAngleL.Value*0.75f; }
        else { browAngleR.Value = browAngleL.Value; }
        //Cry
        if (topExpr == sadSlider.value) { activCry.Value = Mathf.Lerp(activCry.Value, topExpr, Time.deltaTime * speed); }
        else { activCry.Value = Mathf.Lerp(activCry.Value, 0, Time.deltaTime * speed); }
        //Fire
        if (topExpr == angrySlider.value) { activFire.Value = Mathf.Lerp(activFire.Value, topExpr * 0.92f, Time.deltaTime * speed); }
        else { activFire.Value = Mathf.Lerp(activFire.Value, 0, Time.deltaTime * speed); }
        //Others
        activSpace.Value = eyeSmileR.Value;
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
