using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;
using Photon.Realtime;

public class PhotonManager : MonoBehaviourPunCallbacks
{
    public GameObject avatarPrefab;

    void Start()
    {
        Debug.Log("Photon Manager Starting");
        PhotonNetwork.ConnectUsingSettings();
    }

    public override void OnConnectedToMaster()
    {
        Debug.Log("Connected to master");
        RoomOptions roomopt = new RoomOptions();
        PhotonNetwork.JoinOrCreateRoom("ApplicationRoom", roomopt, new TypedLobby("ApplicationLobby", LobbyType.Default));
    }

    public override void OnJoinedRoom()
    {
        Debug.Log("In the room with " + PhotonNetwork.CurrentRoom.PlayerCount + " Participants");
        PhotonNetwork.Instantiate(avatarPrefab.name, new Vector3(0.0f,1.0f,0.0f), Quaternion.identity, 0);
    }
}
