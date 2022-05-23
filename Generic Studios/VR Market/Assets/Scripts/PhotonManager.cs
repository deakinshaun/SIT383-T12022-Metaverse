using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;
using Photon.Realtime;

public class PhotonManager : MonoBehaviourPunCallbacks
{
    void Start()
    {
        ConnectToServer();   
    }

    void ConnectToServer() {
        PhotonNetwork.ConnectUsingSettings();
        Debug.Log("Attempting to Connect on the Server...");
    }

    public override void OnConnectedToMaster()
    {
        Debug.Log("Connected to Server...");
        base.OnConnectedToMaster();
        RoomOptions roomOptions = new RoomOptions();
        PhotonNetwork.JoinOrCreateRoom("VR Market Room 1", roomOptions, TypedLobby.Default);
    }

    public override void OnPlayerEnteredRoom(Player newPlayer)
    {
        Debug.Log("A New Player has Joined the Room!");
        base.OnPlayerEnteredRoom(newPlayer);
    }

    public override void OnJoinedRoom()
    {
        Debug.Log("In the room with " + PhotonNetwork.CurrentRoom.PlayerCount + " Participants");
        base.OnJoinedRoom();
    }
}
