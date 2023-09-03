using UnityEngine;
using UnityEngine.UI;
using System;
using System.Net;
using System.Net.Sockets;
using System.Text;
using System.Threading.Tasks;

public class Websocket : MonoBehaviour
{
    private const int port = 8765;
    private TcpListener listener;

    public Slider xSlider;
    public Slider ySlider;
    public Toggle leftEyeClosedToggle;
    public Toggle rightEyeClosedToggle;
    public Slider angrySlider;
    public Slider disgustedSlider;
    public Slider fearfulSlider;
    public Slider happySlider;
    public Slider neutralSlider;
    public Slider sadSlider;
    public Slider surprisedSlider;

    private bool ValidateMessage(string message)
    {
        string[] terms = message.Split(' ');
        if (terms.Length < 11) {return false;}
        if (!float.TryParse(terms[0], out _)) {return false;}
        if (!float.TryParse(terms[1], out _)) {return false;}
        if (terms[2] != "True" && terms[2] != "False") {return false;}
        if (terms[3] != "True" && terms[3] != "False") {return false;}
        for (int i = 4; i < 11; i++)
        {
            if (!float.TryParse(terms[i], out float value)) { return false;}
            if (value > 1) { return false;}
        }
        return true;
    }

    private async Task StartListening()
    {
        while (true)
        {
            TcpClient client = await listener.AcceptTcpClientAsync();
            HandleClient(client);
        }
    }

    private async void HandleClient(TcpClient client)
    {
        using (NetworkStream stream = client.GetStream())
        {
            byte[] buffer = new byte[1024];
            int bytesRead;
            while (true)
            {
                bytesRead = await stream.ReadAsync(buffer, 0, buffer.Length);
                string message = Encoding.UTF8.GetString(buffer, 0, bytesRead);
                string response;
                if (ValidateMessage(message))
                {
                    response = "Acknowledged: " + message;
                    string[] terms = message.Split(' ');
                    xSlider.value = (float.Parse(terms[0]) + 1) / 2 * (xSlider.maxValue - xSlider.minValue) + xSlider.minValue;
                    ySlider.value = (float.Parse(terms[1]) + 1) / 2 * (ySlider.maxValue - ySlider.minValue) + ySlider.minValue;
                    leftEyeClosedToggle.isOn = terms[2] == "True";
                    rightEyeClosedToggle.isOn = terms[3] == "True";
                    angrySlider.value = float.Parse(terms[4]);
                    disgustedSlider.value = float.Parse(terms[5]);
                    fearfulSlider.value = float.Parse(terms[6]);
                    happySlider.value = float.Parse(terms[7]);
                    neutralSlider.value = float.Parse(terms[8]);
                    sadSlider.value = float.Parse(terms[9]);
                    surprisedSlider.value = float.Parse(terms[10]);
                }
                else
                {
                    response = "Invalid message format!";
                }
                byte[] responseMessage = Encoding.UTF8.GetBytes(response);
                stream.Write(responseMessage, 0, responseMessage.Length);
            }
        }
    }

    private async void Start()
    {
        listener = new TcpListener(IPAddress.Any, port);
        listener.Start();
        Debug.Log("WebSocket server started on port " + port);
        await StartListening();
    }

    void Update() {}

    private void OnApplicationQuit()
    {
        if (listener != null)
        {
            listener.Stop();
            Debug.Log("WebSocket server stopped");
        }
    }
}
