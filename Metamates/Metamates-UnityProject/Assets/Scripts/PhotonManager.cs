using System.Collections;
using System.Collections.Generic;
using Photon.Pun;
using Photon.Realtime;
using UnityEngine;



public class PhotonManager : MonoBehaviourPunCallbacks

{
    public GameObject MorgaineAvatar;
    public GameObject JacobAvatar;
    public GameObject BenAvatar;
    public GameObject MattAvatar;
    // Start is called before the first frame update
    void Start()
    {
        Debug.Log("Start - Connected status: " + PhotonNetwork.IsConnected);
        PhotonNetwork.ConnectUsingSettings();

    }

    public override void OnConnectedToMaster()
    {
        Debug.Log("Connected to Master.");
        RoomOptions roomopt = new RoomOptions();
        PhotonNetwork.JoinOrCreateRoom("ApplicationRoom", roomopt, new TypedLobby("ApplicationLobby", LobbyType.Default));
    }

    public override void OnJoinedRoom()
    {
        base.OnJoinedRoom();
        Debug.Log("Joined room with " + PhotonNetwork.CurrentRoom.PlayerCount + " participants.");

        // Commented out whilst causing errors
        PhotonNetwork.Instantiate(MorgaineAvatar.name, new Vector3(0.5f, -0.23f, -6.48f), Quaternion.identity, 0);
    }

    // Update is called once per frame
    void Update()
    {

    }
}
