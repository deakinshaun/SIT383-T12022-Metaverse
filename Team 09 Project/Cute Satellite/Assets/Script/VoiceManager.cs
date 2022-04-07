using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Voice.Unity;
using Photon.Realtime;
using Photon.Pun;
using UnityEngine.UI;
using TMPro;


public class VoiceManager : MonoBehaviourPunCallbacks
{
    //Alorithm 93
    [Tooltip("TexMeshPro object for displaying call status")]
    public TextMeshPro status;

    [Tooltip("Maximum length of status messgae in characters")]
    public int statusMaxLength = 100;

    public Button MuteButton;
    private VoiceConnection vc;

    private string previousMessage = " ";

    private void setStatusText(string message)
    {
        if (message != previousMessage)
        {
            Debug.Log(message);
            status.text += "\n" + message;
            if (status.text.Length > statusMaxLength)
            {
                status.text = status.text.Remove(0, status.text.Length - statusMaxLength);
            }
            previousMessage = message;
        }
    }

    //Algorithm 94
    void Start()
    {
        status.text = " ";
        setStatusText("Application Sarted");
        PhotonNetwork.ConnectUsingSettings();

        vc = GetComponent<VoiceConnection>();
        vc.Client.AddCallbackTarget(this);
        vc.ConnectUsingSettings();

    }

    public override void OnConnectedToMaster()
    {
        vc = GetComponent<VoiceConnection>();

        RoomOptions roomopt = new RoomOptions();
        TypedLobby lobby = new TypedLobby("ApplicationLobby", LobbyType.Default);
        vc.Client.OpJoinOrCreateRoom(new EnterRoomParams
        {
            RoomName = "ApplicationRoom",
            RoomOptions = roomopt,
            Lobby = lobby
        });
    }

    public override void OnJoinedRoom()
    {
        if (PhotonNetwork.CurrentRoom != null)
        {
            setStatusText("Joined room with " + PhotonNetwork.CurrentRoom.PlayerCount + " participants");
        }
        else
        {
            setStatusText("Joined but no Room");
        }
    }

    public override void OnDisconnected(DisconnectCause cause)
    {
        setStatusText("Disconnected" + cause);
    }

    private void ChangeMuteButtonText() //using in update, change text on button (Speaking/Muted)
    {
        string muteText;

        if (vc.PrimaryRecorder.TransmitEnabled)
        {
            muteText = "Speaking";
        }
        else
        {
            muteText = "Muted";
        }
        MuteButton.GetComponentInChildren<Text>().text = muteText;
    }

    private void Update()
    {
        ChangeMuteButtonText();
    }
}
