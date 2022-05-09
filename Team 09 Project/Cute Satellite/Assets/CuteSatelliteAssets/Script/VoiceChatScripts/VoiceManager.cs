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

    public TMP_InputField NameInput;
    public GameObject UsersObject;
    public Button MuteButton; //but_mute in canva
    public InputField RoomName;
    public CanvasGroup Page_Room;

    private VoiceConnection vc;
    private string previousMessage = " ";
    private bool MasterConnect = false;
    private bool RoomConnect = false;
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
        Handheld.Vibrate();

    }
    public override void OnCreatedRoom()
    {
        Debug.Log("Room Create " + PhotonNetwork.CurrentRoom.Name);
        Handheld.Vibrate();
    }
    public override void OnLeftRoom()
    {
        RoomConnect = false;
        Page_Room.GetComponentInChildren<InputField>().text = null;
    }

    public bool retrieveLocation(out float latitude, out float longitude)
    {
        latitude = 0.0f;
        longitude = 0.0f;


        if (!Input.location.isEnabledByUser)
        {
            Debug.Log("Location service needs to be enabled"
           );
            return false;
        }
        if (Input.location.status != LocationServiceStatus.
       Running)
        {
            Debug.Log("Starting location service");
            if (Input.location.status ==
           LocationServiceStatus.Stopped)
            {
                Input.location.Start();
            }
            return false;
        }
        else
        {
            // Valid data is available.
            latitude = Input.location.lastData.latitude;
            longitude = Input.location.lastData.longitude;
            //altitude = Input.location.lastData.altitude;
            return true;
        }
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

        GetComponent<PhotonView>().RPC("shareLocation", RpcTarget.All, NameInput.text);
    }

    [PunRPC]

    public void shareLocation(string usersName)
    {
        float latitude;//(-37.84236- -37.84089)
        float longitude;//(145.10751-145.12105)
        float x;//(-20 -- 20)
        float y;//(-10 -- 20)
        if (retrieveLocation(out latitude, out longitude))
        {
            x = (float)(latitude * (37.84089 - 37.84236)) / (20 + 20);
            y = (float)(longitude * (145.12105 - 145.10751)) / (20 + 10);


            UsersObject.transform.position = new Vector3(x, 0.2f, y);//需要把世界坐标转化为unity坐标
            
        }
        else
        {
            UsersObject.transform.position = new Vector3(0, 200, 0);
        }
    }

}


