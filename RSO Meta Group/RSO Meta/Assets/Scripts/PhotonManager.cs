using System.Collections;
using System.Collections.Generic;
using UnityEngine;

using Photon.Pun;
using Photon.Realtime;
using TMPro;


public class PhotonManager : MonoBehaviourPunCallbacks
{
    public GameObject avatarPrefab;
    public TextMeshProUGUI chatBox;
    public TMP_InputField inputBox;
    public GameObject joyStick;

   

    void Start()
    {
        Debug.Log("Starting - connected status = " +
            PhotonNetwork.IsConnected);
        PhotonNetwork.ConnectUsingSettings();
        GameObject joystick = Instantiate(joyStick, new Vector3(155,163,0),
        Quaternion.identity) as GameObject;
        joystick.transform.localScale = new Vector3(0.5f,0.5f,0.5f);
        
        joystick.transform.SetParent (GameObject.FindGameObjectWithTag("Canvas").transform, false);
        
    }

    public override void OnConnectedToMaster()
    {
        Debug.Log("Connected to Master.");
        RoomOptions roomopt = new RoomOptions();
        PhotonNetwork.JoinOrCreateRoom("ApplicationRoom", roomopt,
            new TypedLobby("ApplicationLobby", LobbyType.Default));
    }

    public override void OnJoinedRoom()
    {
        base.OnJoinedRoom();
        Debug.Log("Joined room with " +
            PhotonNetwork.CurrentRoom.PlayerCount + " particpants");

        GameObject avatar = PhotonNetwork.Instantiate(avatarPrefab.name, new Vector3(),
            Quaternion.identity, 0);
        avatar.GetComponent<TextChat1>().chatBox = chatBox;
        avatar.GetComponent<TextChat1>().inputBox = inputBox;
        
    }

    void Update()
    {

    }
}