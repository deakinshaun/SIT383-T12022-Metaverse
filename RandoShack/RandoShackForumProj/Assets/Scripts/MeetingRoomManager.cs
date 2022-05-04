using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;
using Photon.Realtime;
using System;
using System.Linq;

public class MeetingRoomManager :
MonoBehaviourPunCallbacks
{
    public TextMesh roomLabel;
    public GameObject avatarPrefab;
    public TextMesh messageBoard;

    public override void OnJoinedRoom()
    {
        if (roomLabel != null)
        {
            if (PhotonNetwork.CurrentRoom != null)
            {
                roomLabel.text = "Room:\n" + PhotonNetwork.CurrentRoom.Name;
            }
        }
        PhotonNetwork.Instantiate(avatarPrefab.name, new Vector3(), Quaternion.identity, 0);
        OnRoomPropertiesUpdate(PhotonNetwork.CurrentRoom.CustomProperties);
    }

    public void LeaveRoom()
    {
        PhotonNetwork.LeaveRoom();
        PhotonNetwork.LoadLevel("MainForumScene");
    }

    public override void OnRoomPropertiesUpdate(
   ExitGames.Client.Photon.Hashtable
   propertiesThatChanged)
    {
        Debug.Log("Room property update");
        // Trim last n lines.
        int n = 10;
        messageBoard.text = string.Join(Environment.NewLine, ((string)propertiesThatChanged["talk"]).Split(Environment.NewLine.ToCharArray()).Reverse().Take(n).Reverse().ToArray());
    }
}
