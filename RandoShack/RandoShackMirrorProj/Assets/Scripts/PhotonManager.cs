using System.Collections;
using System.Collections.Generic;
using UnityEngine;

using Photon.Pun;
using Photon.Realtime;


public class PhotonManager : MonoBehaviourPunCallbacks
{
    // Start is called before the first frame update
    void Start()
    {
        PhotonNetwork.ConnectUsingSettings();
    }

    public override void OnConnectedToMaster()
    {
        RoomOptions roomopt = new RoomOptions();
        PhotonNetwork.JoinOrCreateRoom("ApplicationRoom",roomopt, new TypedLobby("ApplicationLobby",LobbyType.Default));
    }

    public override void OnJoinedRoom()
    {
        Debug.Log("Joined room with " + PhotonNetwork.CurrentRoom.PlayerCount + "participants.");
    }
}
