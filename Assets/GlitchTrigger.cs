using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Kino;

public class GlitchTrigger : MonoBehaviour
{
    public Slider analogGlitch, digitalGlitch;
    public DigitalGlitch digital;
    public AnalogGlitch analog;
    
    void Update()
    {
        digital.intensity = digitalGlitch.value;
        analog.scanLineJitter = analogGlitch.value;
    }
}
