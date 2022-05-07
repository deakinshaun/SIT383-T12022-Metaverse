using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;
using Photon.Realtime;
using TMPro;
using System.Threading;

public class PhotonChatManager : MonoBehaviourPunCallbacks
{
    private bool isJoinedRoom = false;
        
    private bool inputed = false; //输入按钮的布尔值，点击后为true
    private TextMeshProUGUI chatBox;
    private TMP_InputField inputBox;
    private GameObject showCommentButton; //打开评论按钮
    private CanvasGroup ChatPanel;
    private GameObject LoadingMessage;
    private GameObject ReadyForCom;
    private TextMeshProUGUI LoadingMessageMes;
    private CanvasGroup UsersSetting;

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
        LoadingMessage = GameObject.Find("/Canvas/ChatPanel/LoadingMessage");
        LoadingMessageMes = LoadingMessage.GetComponent<TextMeshProUGUI>();
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
                LoadingMessage.GetComponent<CanvasGroup>().alpha = 0;
            }
            else
            {
                ReadyForCom.GetComponent<CanvasGroup>().alpha = 0;
                LoadingMessage.GetComponent<CanvasGroup>().alpha = 1;
            }
        }
    }

    //---------------------------


    //------Photon Events------------
    public override void OnConnectedToMaster()
    {
        Debug.Log("Connected to Master");
        LoadingMessageMes.text += "Connected to Service\n";
    }
    public override void OnJoinedLobby()
    {
        LoadingMessageMes.text += "On Joined Lobby/n";
        Debug.Log("On Joined Lobby");
    }
    public override void OnJoinedRoom()
    {
        Debug.Log("Joined room with" + PhotonNetwork.CurrentRoom.PlayerCount + "particpants");
        LoadingMessageMes.text += "Opening Comments\n";
        Thread.Sleep(1000);
        PhotonNetwork.NickName = FindUsersName();
        isJoinedRoom = true;
    }
    public override void OnLeftRoom()
    {
        isJoinedRoom = false;
    }

    //-------------------------------

    //-----Vuforia OTF/OTL Event-------
    public void onFindTarget()
    {
        showCommentButton.GetComponent<CanvasGroup>().alpha = 1;
        RoomOptions roomopt = new RoomOptions();
        TypedLobby lobby1 = new TypedLobby("ScanLobby", LobbyType.Default);
        PhotonNetwork.JoinOrCreateRoom("Room1", roomopt, lobby1);
    }
    public void onLostTarget()
    {
        showCommentButton.GetComponent<CanvasGroup>().alpha = 0;

        isJoinedRoom = false;
        PhotonNetwork.LeaveRoom();
        PhotonNetwork.LeaveLobby();
    }

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

    //-----------------------------


    void Start()
    {
        PhotonNetwork.ConnectUsingSettings();
        FindCanvas();
    }

    void Update()
    {
        FindUsersName();
        ShowCanvas();

        if (inputed && (inputBox != null))
        {
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


