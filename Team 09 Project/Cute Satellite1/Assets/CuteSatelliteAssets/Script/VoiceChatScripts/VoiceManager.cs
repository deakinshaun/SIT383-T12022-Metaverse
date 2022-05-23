using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Voice.Unity;
using Photon.Realtime;
using Photon.Pun;
using UnityEngine.UI;
using TMPro;
using UnityEngine.SceneManagement;


public class VoiceManager : MonoBehaviourPunCallbacks
{

    [Tooltip("TexMeshPro object for displaying call status")]
    public TextMeshPro status;

    [Tooltip("Maximum length of status messgae in characters")]
    public int statusMaxLength = 100;

    private InputField NameInput;
    public GameObject UsersObject;
    private Button MuteButton; //but_mute in canva
    private InputField RoomName;
    private CanvasGroup Page_Room;
    private Button HideButton;
    public GameObject Map;
    public GameObject ARCamera;

    private VoiceConnection vc;
    private string previousMessage = " ";
    private bool MasterConnect = false;
    private bool RoomConnect = false;

    //public Vector3 myLocation;
    //public Vector3 hisLocation;

    public GameObject Anchor1;
    public GameObject Anchor2;

    public float Latitude;
    public float Longitude;

    private GameObject UsersControl;

    public Vector2 RangeOfLat = new Vector2(34.71195f, 34.70387f);
    //[My Home]     new Vector2(34.71195f,34.70387f);
    //[Jinkun Home] new Vector2(40.77146f, 40.76367f);
    //[Deakin]      new Vector2(-37.84236f, -37.84089f);
    //[Huiqing]     new Vector2(39.67745f, 39.66926f);

    public Vector2 RangeOfLon = new Vector2(113.70573f, 113.71925f);
    //[My Home]     new Vector2(113.70573f, 113.71925f);
    //[Jinkun Home] new Vector2(111.63634f, 111.65014f);
    //[Deakin]      new Vector2(145.10751f, 145.12105f);
    //[Huiqing]     new Vector2(106.82834f, 106.84626f);

    public Vector2 TopRightLocation;
    public Vector2 ButLeftLocation;

    public TextMeshProUGUI latttt;
    public TextMeshProUGUI longgg;
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
    } //手机端测试用debug output

    private void FindAssets()
    {
        Page_Room = GameObject.Find("/Canvas/Page_Room").GetComponent<CanvasGroup>();
        NameInput = GameObject.Find("/Canvas/Page_Room/IF_UsersName").GetComponent<InputField>();
        RoomName = GameObject.Find("/Canvas/Page_Room/IF_RoomName").GetComponent<InputField>();
        MuteButton = GameObject.Find("/Canvas/But_Mute").GetComponent<Button>();
        HideButton = GameObject.Find("/Canvas/But_Hide").GetComponent<Button>();

        Anchor1 = GameObject.Find("/ARCamera/Maps/Anchor1");
        Anchor2 = GameObject.Find("/ARCamera/Maps/Anchor2");

    }

    public void SetMapLocation()
    {
        Transform TopRight = GameObject.Find("/Maps/00").GetComponent<Transform>();
        Transform ButLeft = GameObject.Find("/Maps/34").GetComponent<Transform>();

        TopRightLocation = new Vector2(TopRight.position.x, TopRight.position.y);
        ButLeftLocation = new Vector2(ButLeft.position.x, ButLeft.position.y);

    }

    void Start()
    {
        FindAssets();
        Map = GameObject.Find("/ARCamera/Maps");
        ARCamera = GameObject.Find("/ARCamera");
        status.text = " ";
        setStatusText("Application Sarted");
        PhotonNetwork.ConnectUsingSettings();
        vc = GetComponent<VoiceConnection>();
        Input.compass.enabled = true;
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
        UsersControl = PhotonNetwork.Instantiate(UsersObject.name,
            new Vector3(0, 0, 0), new Quaternion(), 0);
        UsersControl.transform.parent = Map.transform;

    }
    public override void OnCreatedRoom()
    {
        Debug.Log("Room Create " + PhotonNetwork.CurrentRoom.Name);
        Handheld.Vibrate();
    }
    public override void OnLeftRoom()
    {
        RoomConnect = false;
    }

    public bool retrieveLocation(out float latitude, out float longitude)
    {


        if (!Input.location.isEnabledByUser)
        {
            Debug.Log("Location service needs to be enabled");
            latitude = 1.0f;
            longitude = 2.0f;
            return false;
        }
        if (Input.location.status != LocationServiceStatus.
       Running)
        {
            Debug.Log("Starting location service");
            if (Input.location.status == LocationServiceStatus.Stopped)
            {
                Input.location.Start();
            }
            latitude = 1.0f;
            longitude = 2.0f;
            return false;
        }
        else
        {
            // Valid data is available.
            latitude = Input.location.lastData.latitude;
            longitude = Input.location.lastData.longitude;
            return true;
        }

        // Valid data is available.

        /*if (Input.location.isEnabledByUser)
        {
            if (Input.location.status == LocationServiceStatus.Running)
            {
                Debug.Log("Hello");
                latitude = Input.location.lastData.latitude;
                longitude = Input.location.lastData.longitude;
                latttt.text = latitude.ToString();
                longgg.text = longitude.ToString();
                return true;
            }
            else
            {
                Input.location.Start();
                latttt.text = "Stoped";
                latitude = -1f;
                longitude = -2f;
                return false;
            }

        }
        else
        {
            Debug.Log("Hi");
            latttt.text = "Say Hello";
            latitude = -1f;
            longitude = -2f;
            return false;
        }*/

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

    private void ChangeHideButtonText()
    {
        string HideText;

        if (Map.transform.position == new Vector3(ARCamera.transform.position.x, ARCamera.transform.position.y + 7, ARCamera.transform.position.z - 67f))
        {
            HideText = "Hide";
        }
        else
        {
            HideText = "Reset";
        }
        HideButton.GetComponentInChildren<Text>().text = HideText;
    }

    //--------------------------------------
    //Button Event
    public bool IsVisual = true;
    public void OnClickResetMapLocation()
    {

        if (Map.transform.position == new Vector3(ARCamera.transform.position.x, ARCamera.transform.position.y, ARCamera.transform.position.z - 37f))
        {
            Map.transform.position = new Vector3(ARCamera.transform.position.x, ARCamera.transform.position.y, ARCamera.transform.position.z + 3f);
        }
        else
        {
            Map.transform.position = new Vector3(ARCamera.transform.position.x, ARCamera.transform.position.y, ARCamera.transform.position.z - 37f);
        }

    }
    public void OnClickMuteButton() //OnClickEvent using in MuteButton
    {
        vc.PrimaryRecorder.TransmitEnabled = !vc.PrimaryRecorder.TransmitEnabled;
        Debug.Log(vc.PrimaryRecorder.TransmitEnabled);
    }

    public void OnClikckScanButton()
    {
        if (RoomConnect)
        {
            PhotonNetwork.LeaveRoom();
            PhotonNetwork.LeaveLobby();
            SceneManager.LoadScene(1);
        }
        else
        {
            SceneManager.LoadScene(1);
        }

    }
    public void OnClickJoinOrCreateRoomButton()
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
    public float latitute = 0;
    public float longitute = 0;
    private void Update()
    {
        FindAssets();
        ChangeMuteButtonText();
        ChangeHideButtonText();
        RoomPageChange();
        if (RoomConnect)
        {
            if (NameInput.text == null) NameInput.text = "DraftName";

            retrieveLocation(out latitute, out longitute);
            latttt.text = latitute.ToString();
            longgg.text = longitute.ToString();

            GetComponent<PhotonView>().RPC("ShareUsersLocation", RpcTarget.All, NameInput.text, latitute, longitute);
        }
    }


    public float beforeAngle = 0;
    public float afterAngle = 0;
    [PunRPC]
    public void ShareUsersLocation(string usersName, float latitude, float longitude)
    {
        //float latitude; //  [Deakin](-37.84236, -37.84089)     [Jinkun](40.76439, 40.76763)
        //float longitude;//  [Deakin](145.10751, 145.12105)     [Jinkun](111.64810, 111.63963)
        float x;//(-20 -- 20)
        float y;//(-10 -- 20)

        float X;
        float Y;
        if (usersName == NameInput.text)
        {
            if (latitude != 0 && longitude != 0)
            {
                x = (float)(latitude * (RangeOfLat.x - RangeOfLat.y)) / Mathf.Abs(Anchor1.transform.localPosition.x - Anchor2.transform.localPosition.x); ;//(20+20)
                y = (float)(longitude * (RangeOfLon.x - RangeOfLon.y)) / Mathf.Abs(Anchor1.transform.localPosition.z - Anchor2.transform.localPosition.z);//(20+10)
                latttt.text = x.ToString();
                longgg.text = y.ToString();
                X = Anchor1.transform.localPosition.x + x;
                Y = Anchor1.transform.localPosition.y - y;
                UsersControl.transform.localPosition = new Vector3(X, 0, Y);//需要把世界坐标转化为unity坐标
                afterAngle = (int)Input.compass.trueHeading;
                if (Mathf.Abs(afterAngle - beforeAngle) >= 10)
                {
                    beforeAngle = afterAngle;
                    //UsersControl.transform.eulerAngles = new Vector3(0, -afterAngle, 0);
                    UsersControl.transform.Rotate(new Vector3(0, 0, -afterAngle));
                }//make users control can toward user's toward
            }
        }
    }

}


