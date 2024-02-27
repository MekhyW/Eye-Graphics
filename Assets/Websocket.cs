using UnityEngine;
using UnityEngine.UI;
using System.Net;
using System.Net.Sockets;
using System.Text;
using System.Threading.Tasks;

public class Websocket : MonoBehaviour
{
    private const int port = 8765;
    private TcpListener listener;

    public Slider xSlider, ySlider, leftEyeClosenessSlider, rightEyeClosenessSlider,
        angrySlider, disgustedSlider, happySlider, neutralSlider, sadSlider, surprisedSlider,
        hypnoticSlider, heartSlider, rainbowSlider, nightmareSlider, gearsSlider, sansSlider;

    private bool ValidateMessage(string message)
    {
        string[] terms = message.Split(' ');
        if (terms.Length < 11) { return false;}
        for (int i = 0; i < 11; i++)
        {
            if (!float.TryParse(terms[i], out float value)) { return false;}
            if (value < -1) { return false;}
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
                    leftEyeClosenessSlider.value = float.Parse(terms[2]);
                    rightEyeClosenessSlider.value = float.Parse(terms[3]);
                    angrySlider.value = float.Parse(terms[4]);
                    disgustedSlider.value = float.Parse(terms[5]);
                    happySlider.value = float.Parse(terms[6]);
                    neutralSlider.value = float.Parse(terms[7]);
                    sadSlider.value = float.Parse(terms[8]);
                    surprisedSlider.value = float.Parse(terms[9]);
                    int manual_expression = int.Parse(terms[10]);
                    hypnoticSlider.value = manual_expression == 6 ? 1 : 0;
                    heartSlider.value = manual_expression == 7 ? 1 : 0;
                    rainbowSlider.value = manual_expression == 8 ? 1 : 0;
                    nightmareSlider.value = manual_expression == 9 ? 1 : 0;
                    gearsSlider.value = manual_expression == 10 ? 1 : 0;
                    sansSlider.value = manual_expression == 11 ? 1 : 0;
                }
                else { response = "Invalid message format!";}
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
