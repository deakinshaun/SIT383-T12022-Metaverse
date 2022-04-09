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

    [Tooltip("TexMeshPro object for displaying call status")]
    public TextMeshPro status;

    [Tooltip("Maximum length of status messgae in characters")]
    public int statusMaxLength = 100;

    public Button MuteButton; //but_mute in canva
    public InputField RoomName; 
    public CanvasGroup Page_Room;

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
    private bool MasterConnect = false;
    private bool RoomConnect = false;
    //Algorithm 94
    void Start()
    {
        status.text = " ";
        setStatusText("Application Sarted");
        PhotonNetwork.ConnectUsingSettings();
        vc = GetComponent<VoiceConnection>();
    }

    //-------------------------------------
    //Photon Net Work
    public override void OnConnectedToMaster()
    {
        MasterConnect = true;
        Debug.Log("Connected to Master");
        TypedLobby lobby = new TypedLobby("ApplicationLobby", LobbyType.Default);
        PhotonNetwork.JoinLobby(lobby);
        Debug.Log(PhotonNetwork.CurrentLobby.Name);
        if (PhotonNetwork.CurrentRoom == null)
        {
            Debug.Log("No room");
        }
        else
        {
            Debug.Log(PhotonNetwork.CurrentRoom.Name);
        }
    }
    public override void OnDisconnected(DisconnectCause cause)
    {
        MasterConnect = false;
        setStatusText("Disconnected" + cause);
    }
    public override void OnJoinedRoom()
    {
        RoomConnect = true;
        Debug.Log(PhotonNetwork.CurrentRoom.Name);

        /*if (PhotonNetwork.CurrentRoom != null)
        {
            setStatusText("Joined room with " + PhotonNetwork.CurrentRoom.PlayerCount + " participants");
        }
        else
        {
            setStatusText("Joined but no Room");
        }*/
    }
    public override void OnCreatedRoom()
    {
        Debug.Log("Room Create " + PhotonNetwork.CurrentRoom.Name);
    }
    public override void OnLeftRoom()
    {
        RoomConnect = false;
        Page_Room.GetComponentInChildren<InputField>().text = null;
    }

    //--------------------------------------
    //Room Page Setting
    private void RoomPageChange()
    {
        while (MasterConnect)
        {
            if (!RoomConnect)
            {
                Page_Room.GetComponentInChildren<Button>().GetComponentInChildren<Text>().text = "Join/Create";
                Page_Room.GetComponentInChildren<InputField>().readOnly = false;
                Page_Room.GetComponentInChildren<InputField>().placeholder.GetComponent<Text>().text = "Enter Room Name...";
                break;
            }
            else
            {
                Page_Room.GetComponentInChildren<Button>().GetComponentInChildren<Text>().text = "Leave Room";
                Page_Room.GetComponentInChildren<InputField>().readOnly = true;
                Page_Room.GetComponentInChildren<InputField>().text = PhotonNetwork.CurrentRoom.Name;
                Page_Room.GetComponentInChildren<InputField>().placeholder.GetComponent<Text>().text = null;
                break;
            }
        }
    }
    private void ChangeMuteButtonText() //using in update, change text on button (Speaking/Muted)
    {
        string muteText;

        if (vc.PrimaryRecorder.TransmitEnabled)
        {
            muteText = "Spk";
        }
        else
        {
            muteText = "Mute";
        }
        MuteButton.GetComponentInChildren<Text>().text = muteText;
    }

    //--------------------------------------
    //Button Event
    public void ClickMuteButton() //OnClickEvent using in MuteButton
    {
        vc.PrimaryRecorder.TransmitEnabled = !vc.PrimaryRecorder.TransmitEnabled;
        Debug.Log(vc.PrimaryRecorder.TransmitEnabled);
    }

    public void ClickJoinOrCreateRoomButton()
    {
        if (RoomConnect)
        {
            //leave room
            PhotonNetwork.LeaveRoom();
        }
        else
        {
            //join room
            RoomOptions ro = new RoomOptions();
            PhotonNetwork.JoinOrCreateRoom(RoomName.text, ro, null);
        }

    }

    //--------------------------------------
    private void Update()
    {
        ChangeMuteButtonText();
        RoomPageChange();
    }
}
