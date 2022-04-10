using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;
using Photon.Realtime;

public class PhotonMyManager : MonoBehaviourPunCallbacks
{
    public GameObject AvatarPrefab;

    // Start is called before the first frame update
    void Start()
    {
        Debug.Log($"Starting - connected status {PhotonNetwork.IsConnected}");

        PhotonNetwork.ConnectUsingSettings();
    }

    public override void OnConnectedToMaster()
    {
        Debug.Log("Connected to Master");
        RoomOptions roomOpt = new RoomOptions();
        PhotonNetwork.JoinOrCreateRoom("ApplicationRoom", roomOpt, new TypedLobby("ApplicationLobby", LobbyType.Default));
    }

    public override void OnJoinedRoom()
    {
        base.OnJoinedRoom();
        Debug.Log($"Connected to room with: {PhotonNetwork.CurrentRoom.PlayerCount} Participants");
        PhotonNetwork.Instantiate(AvatarPrefab.name, new Vector3(), Quaternion.identity, 0);
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
