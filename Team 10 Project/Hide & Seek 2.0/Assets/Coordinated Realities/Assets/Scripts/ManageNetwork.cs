using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;
using Photon.Realtime;

public class ManageNetwork : MonoBehaviourPunCallbacks
{
    public GameObject avatarPrefab;
    void Start()
    {
        Debug.Log("Got to Start");
        PhotonNetwork.ConnectUsingSettings();
    }

    public override void OnConnectedToMaster()
    {
        Debug.Log("You are connected!");
        RoomOptions roomopt = new RoomOptions();
        PhotonNetwork.JoinOrCreateRoom("CollabRoom", roomopt, new TypedLobby ("CollabLobby", LobbyType.Default));
    }
    public override void OnJoinedRoom()
    {
        Debug.Log("Got joined room " + PhotonNetwork.CurrentRoom.PlayerCount);
        PhotonNetwork.Instantiate(avatarPrefab.name, new Vector3(), Quaternion.identity, 0);
    }
}
