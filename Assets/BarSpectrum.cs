using Assets.WasapiAudio.Scripts.Unity;
using UnityEngine;

namespace Assets.Scripts
{
    public class BarSpectrum : AudioVisualizationEffect
    {
        private GameObject[] _spectrumBars;
        private Vector3[] _originalPositions;
        private Vector3 _originalScale;
        private float _updateInterval = 1f/30f;
        private float _lastUpdate;

        public GameObject Prefab;
        public float AudioScale;
        public float Power;

        public void Start()
        {
            var cubeRenderer = Prefab.GetComponent<Renderer>();
            cubeRenderer.material.SetColor("_Color", Color.gray);
            _spectrumBars = new GameObject[SpectrumSize];
            _originalPositions = new Vector3[SpectrumSize];
            _originalScale = Prefab.transform.localScale;
            var width = Prefab.transform.localScale.x;
            for (var i = 0; i < SpectrumSize; i++)
            {
                var spectrumBar = GameObject.Instantiate(Prefab);
                spectrumBar.transform.parent = transform;
                spectrumBar.transform.localPosition = new Vector3(width * i, 0, 0);
                spectrumBar.transform.localRotation = Quaternion.identity;
                _spectrumBars[i] = spectrumBar;
                _originalPositions[i] = spectrumBar.transform.localPosition;
            }
            Prefab.SetActive(false);
        }

        public void Update()
        {
            if (Time.time - _lastUpdate < _updateInterval) return;
            _lastUpdate = Time.time;
            var spectrumData = GetSpectrumData();
            for (var i = 0; i < SpectrumSize; i++)
            {
                var audioScale = Mathf.Pow(spectrumData[i] * AudioScale, Power);
                var newScale = new Vector3(_originalScale.x, _originalScale.y + audioScale, _originalScale.z);
                _spectrumBars[i].transform.localScale = newScale;
                _spectrumBars[i].transform.localPosition = _originalPositions[i];
            }
        }
    }
}
