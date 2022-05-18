using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;
using Photon.Realtime;
using TMPro;
using System.Threading;
using UnityEngine.SceneManagement;

public class PhotonChatManager : MonoBehaviourPunCallbacks
{
    private bool isJoinedRoom = false;

    public bool inputed = false; //输入按钮的布尔值，点击后为true
    public TextMeshProUGUI chatBox;
    public TMP_InputField inputBox;
    public GameObject showCommentButton; //打开评论按钮
    public CanvasGroup ChatPanel;
    //public GameObject LoadingMessage;
    public GameObject ReadyForCom;
    //public TextMeshProUGUI LoadingMessageMes;
    public CanvasGroup UsersSetting;



    //------Customer Events------
    private string FindUsersName()
    {
        string UsersName;
        string FullName = GameObject.Find("/Canvas/UsersSetting/NameInput").
                   GetComponent<TMP_InputField>().text;
        if (FullName.Length > 3)
        {
            UsersName = FullName.Substring(0, 3);
        }
        else
        {
            UsersName = FullName;
        }
        return UsersName;
    }

    private void FindCanvas()
    {
        ChatPanel = GameObject.Find("/Canvas/ChatPanel").GetComponent<CanvasGroup>();
        //LoadingMessage = GameObject.Find("/Canvas/ChatPanel/LoadingMessage");
        //LoadingMessageMes = LoadingMessage.GetComponent<TextMeshProUGUI>();
        ReadyForCom = GameObject.Find("/Canvas/ChatPanel/ReadyForCom");
        UsersSetting = GameObject.Find("/Canvas/UsersSetting").GetComponent<CanvasGroup>();
        chatBox = GameObject.Find("/Canvas/ChatPanel/ReadyForCom/ChatBox").GetComponent<TextMeshProUGUI>();
        inputBox = GameObject.Find("/Canvas/ChatPanel/ReadyForCom/InputBox").GetComponent<TMP_InputField>();

        showCommentButton = GameObject.Find("/Canvas/ShowComment");
    }
    private void ShowCanvas()
    {
        if (ChatPanel.alpha == 1)
        {
            if (isJoinedRoom)
            {
                ReadyForCom.GetComponent<CanvasGroup>().alpha = 1;
                //LoadingMessage.GetComponent<CanvasGroup>().alpha = 0;
            }
            else
            {
                ReadyForCom.GetComponent<CanvasGroup>().alpha = 0;
                //LoadingMessage.GetComponent<CanvasGroup>().alpha = 1;
            }
        }
    }

    private void AlphaSet()
    {
        showCommentButton.GetComponent<CanvasGroup>().alpha = 0;
        ChatPanel.GetComponent<CanvasGroup>().alpha = 0;
        UsersSetting.GetComponent<CanvasGroup>().alpha = 0;
    }

    //---------------------------


    //------Photon Events------------
    public override void OnConnectedToMaster()
    {
        Debug.Log("Connected to Master");
        //LoadingMessageMes.text += "Connected to Service\n";


        TypedLobby lobby1 = new TypedLobby("ScanLobby", LobbyType.Default);
        RoomOptions roomopt = new RoomOptions();
        PhotonNetwork.JoinOrCreateRoom("testRoom", roomopt, lobby1);
    }
    public override void OnJoinedLobby()
    {
        //LoadingMessageMes.text += "On Joined Lobby/n";
        Debug.Log("On Joined Lobby");
    }
    public override void OnJoinedRoom()
    {
        Handheld.Vibrate();
        chatBox.text += "Hello\n";
        Debug.Log("Joined room with" + PhotonNetwork.CurrentRoom.PlayerCount + "particpants");
        //LoadingMessageMes.text += "Opening Comments\n";
        Thread.Sleep(1000);
        isJoinedRoom = true;
    }
    public override void OnLeftRoom()
    {
        isJoinedRoom = false;
    }

    //-------------------------------

    //-----Vuforia OTF/OTL Event-------
    /*public void onFindTarget(GameObject Room)
    {
        showCommentButton.GetComponent<CanvasGroup>().alpha = 1;
        RoomOptions roomopt = new RoomOptions();
        TypedLobby lobby1 = new TypedLobby("ScanLobby", LobbyType.Default);
        PhotonNetwork.JoinOrCreateRoom(Room.name, roomopt, lobby1);
    }
    public void onLostTarget()
    {
        showCommentButton.GetComponent<CanvasGroup>().alpha = 0;

        isJoinedRoom = false;
        PhotonNetwork.LeaveRoom();
        PhotonNetwork.LeaveLobby();
    }*/

    //---------------------------------

    //-----Button Click events-----
    public void OnClickSend()
    {
        inputed = true;
    }//send messages

    public void OnClickComment()
    {
        if (ChatPanel.alpha == 1)
        {
            ChatPanel.alpha = 0;
        }
        else
        {
            ChatPanel.alpha = 1;
        }
    }

    public void OnClickUsersSetting()
    {
        if (UsersSetting.alpha == 1)
        {
            UsersSetting.alpha = 0;
        }
        else
        {
            UsersSetting.alpha = 1;
        }
    }

    public void OnClickMapButton()
    {
        if (isJoinedRoom)
        {
            PhotonNetwork.LeaveRoom();
            PhotonNetwork.LeaveLobby();
            SceneManager.LoadScene(0);
        }
        else
        {
            SceneManager.LoadScene(0);
        }
    }

    //-----------------------------


    void Start()
    {
        PhotonNetwork.ConnectUsingSettings();
        FindCanvas();
        //AlphaSet();
    }

    void Update()
    {
        FindUsersName();
        ShowCanvas();

        if (inputed)
        {
            if (FindUsersName()=="")
            {
                PhotonNetwork.NickName = "DefaultUser";
            }
            else
            {
                PhotonNetwork.NickName = FindUsersName();
            }
            

            inputed = false;
            GetComponent<PhotonView>().RPC("updateChat", RpcTarget.All, inputBox.text, PhotonNetwork.NickName);
        }
    }


    [PunRPC]
    public void updateChat(string messages, string UsersName)
    {

        chatBox.text += "(" + UsersName + "): " + messages + "\n";
        Debug.Log(chatBox.text.ToString());
    }
}


