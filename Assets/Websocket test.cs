using UnityEngine;
using System;
using System.Net;
using System.Net.Sockets;
using System.Text;
using System.Threading.Tasks;

public class Websockettest : MonoBehaviour
{
    private const int port = 8765;
    private TcpListener listener;

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
            while ((bytesRead = await stream.ReadAsync(buffer, 0, buffer.Length)) != 0)
            {
                string message = Encoding.UTF8.GetString(buffer, 0, bytesRead);
                Debug.Log("Received: " + message);
                if (ValidateMessage(message))
                {
                    string ackMessage = "Acknowledged: " + message;
                    byte[] responseMessage = Encoding.UTF8.GetBytes(ackMessage);
                    stream.Write(responseMessage, 0, responseMessage.Length);
                }
                else
                {
                    string errorMessage = "Invalid message format!";
                    byte[] errorResponse = Encoding.UTF8.GetBytes(errorMessage);
                    stream.Write(errorResponse, 0, errorResponse.Length);
                }
            }
        }
        client.Close();
    }

    // Start is called before the first frame update
    private async void Start()
    {
        listener = new TcpListener(IPAddress.Any, port);
        listener.Start();
        Debug.Log("WebSocket server started on port " + port);
        await StartListening();
    }

    // Update is called once per frame
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
