using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Photon.Realtime;
using Photon.Pun;

public class CanvasRoomCountScript : MonoBehaviourPunCallbacks
{
    [SerializeField]
    private Text[] roomCounts;

    // Grren, Blue, Purple

    // Update is called once per frame

    public override void OnRoomListUpdate(List<RoomInfo> roomList)
    {
        if(roomList.FindIndex(x => x.Name == "Green") >= 0)
        {
            roomCounts[0].text = $"{roomList[0].PlayerCount} Users";
        }
        else
        {
            roomCounts[0].text = "NA";
        }
        if (roomList.FindIndex(x => x.Name == "Blue") >= 0)
        {
            roomCounts[1].text = $"{roomList[1].PlayerCount} Users";
        }
        else
        {
            roomCounts[1].text = "NA";
        }
        if (roomList.FindIndex(x => x.Name == "Purple") >= 0)
        {
            roomCounts[2].text = $"{roomList[2].PlayerCount} Users";
        }
        else
        {
            roomCounts[2].text = "NA";
        }
    }
}