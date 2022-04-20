using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;
using Photon.Realtime;

public class LocalRoomBehaviour : MonoBehaviour
{

    private RoomManager roomManager;

    public void setManager(RoomManager manager)
    {
        roomManager = manager;
    }

    public void enterRoom()
    {
        string roomName = GetComponent<DisplayRoom>().getName();
        Debug.Log($"Entering room: {roomName}");
        roomManager.JoinRoom(roomName);
    }
}
