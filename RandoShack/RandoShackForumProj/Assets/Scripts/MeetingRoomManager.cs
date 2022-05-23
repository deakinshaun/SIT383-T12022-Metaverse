using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;
using Photon.Realtime;
using System;
using System.Linq;

public class MeetingRoomManager : MonoBehaviourPunCallbacks
{
    public TextMesh roomLabel;
    public GameObject avatarPrefab;
    public TextMesh messageBoard;

    [SerializeField]
    private Vector3 SpawnLoc = new Vector3(-6f, 2f, -15f);

    public override void OnJoinedRoom()
    {
        if (roomLabel != null)
        {
            if (PhotonNetwork.CurrentRoom != null)
            {
                roomLabel.text = "Room:\n" + PhotonNetwork.CurrentRoom.Name;
            }
        }
        PhotonNetwork.Instantiate(avatarPrefab.name, SpawnLoc, Quaternion.identity, 0);
        OnRoomPropertiesUpdate(PhotonNetwork.CurrentRoom.CustomProperties);
    }

    public void LeaveRoom()
    {
        PhotonNetwork.LeaveRoom();
        PhotonNetwork.LoadLevel("MainForumScene");
    }

    public void LeaveSubRoom(string parentRoom)
    {
        StartCoroutine(ReRouteRoom(parentRoom));

        IEnumerator ReRouteRoom(string roomName)
        {

            PhotonNetwork.LeaveRoom();

            Debug.Log($"Adding new room: {roomName}");

            RoomOptions ro = new RoomOptions();
            ro.EmptyRoomTtl = 100000; // 100 * 1000 ms

            // Export the notices property to the lobby.
            string[] roomPropsInLobby = { "notices" };
            ro.CustomRoomPropertiesForLobby = roomPropsInLobby;
            ExitGames.Client.Photon.Hashtable
            customRoomProperties = new ExitGames.Client.Photon.Hashtable() { { "notices", "Room Start\n" } };
            ro.CustomRoomProperties = customRoomProperties;

            yield return new WaitForSeconds(2);

            PhotonNetwork.JoinOrCreateRoom(roomName, ro, null);

            switch (roomName)
            {
                case "Green": PhotonNetwork.LoadLevel("GreenLevel"); break;

                case "Blue": PhotonNetwork.LoadLevel("BlueLevel"); break;

                case "Purple": PhotonNetwork.LoadLevel("PurpleLevel"); break;
            }
        }
    }

    public override void OnRoomPropertiesUpdate(ExitGames.Client.Photon.Hashtable propertiesThatChanged)
    {
        Debug.Log("Room property update");
        // Trim last n lines.
        int n = 10;
        // Debug.Log((string)propertiesThatChanged["talk"]);
        if ((string)propertiesThatChanged["talk"] != null)
            messageBoard.text = string.Join(Environment.NewLine, ((string)propertiesThatChanged["talk"]).Split(Environment.NewLine.ToCharArray()).Reverse().Take(n).Reverse().ToArray());
    }
}
