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
        Debug.Log ("Photon manager starting.");
        PhotonNetwork.ConnectUsingSettings();
    }
    public override void OnConnectedToMaster()
    {
        Debug.Log("We have connected!");
        RoomOptions roomopt = new RoomOptions();
        PhotonNetwork.JoinOrCreateRoom("ApplicationRoom", roomopt, new TypedLobby("ApplicationLobby", LobbyType.Default));
    }
    public override void OnJoinedRoom()
    {
        Debug.Log("You are in a room with " + PhotonNetwork.CurrentRoom.PlayerCount + " other participants. You see a grue.");
        PhotonNetwork.Instantiate(avatarPrefab.name, new Vector3(), Quaternion.identity, 0);
    }
}
