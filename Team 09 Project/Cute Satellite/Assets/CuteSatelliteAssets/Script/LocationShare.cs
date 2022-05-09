using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Photon.Voice.Unity;
using Photon.Realtime;
using Photon.Pun;
using TMPro;



/// <summary>
/// 位置共享脚本
/// </summary>
public class LocationShare : MonoBehaviour
{

    //GPS的信息
    public Text gpsInfo;
 

    private bool MasterConnect = false;
    private bool RoomConnect = false;

    //当前的用户名
    public username="kunkunkun";

    public InputField RoomName;

    // Start is called before the first frame update
    void Start()
    {
        //
        PhotonNetwork.ConnectUsingSettings();
    }

    // Update is called once per frame
    void Update()
    {

       

        //send Loaction to other user 
        GetComponent<PhotonView>().RPC("shareLocation", RpcTarget.All, username);

    }



    /// <summary>
    /// Get GPS Location Info 获取GPS定位到的位置信息
    /// </summary>
    /// <param name="latitude">精度</param>
    /// <param name="longitude">维度</param>
    /// <param name="altitude">海拔高度</param>
    /// <returns></returns>
    bool retrieveLocation(out float latitude, out float longitude, out float altitude)
    {
        latitude = 0.0f;
        longitude = 0.0f;
        altitude = 0.0f;

        if (!Input.location.isEnabledByUser)
        {
            Debug.Log("Location service needs to be enabled"
           );
            return false;
        }
        if (Input.location.status != LocationServiceStatus.
       Running)
        {
            Debug.Log("Starting location service");
            if (Input.location.status ==
           LocationServiceStatus.Stopped)
            {
                Input.location.Start();
            }
            return false;
        }
        else
        {
            // Valid data is available.
            latitude = Input.location.lastData.latitude;
            longitude = Input.location.lastData.longitude;
            altitude = Input.location.lastData.altitude;
            return true;
        }
    }

    /// <summary>
    /// Interactive JoinRoom ， Phone will vibrate
    /// </summary>
    public override void OnJoinedRoom()
    {
        RoomConnect = true;
        Debug.Log(PhotonNetwork.CurrentRoom.Name);
        Handheld.Vibrate();

    }

    /// <summary>
    /// Interactive CreateRoom ， Phone will vibrate
    /// </summary>
    public override void OnCreatedRoom()
    {
        Debug.Log("Room Create " + PhotonNetwork.CurrentRoom.Name);
        Handheld.Vibrate();
    }


    /// <summary>
    /// UI Buttion Click Event,Join or Create Room, RoomName.Text from InputFiled
    /// </summary>
    public void ClickJoinOrCreateRoomButton()
    {
        if (RoomConnect)
        {
            //leave room
            PhotonNetwork.LeaveRoom();
        }
        else
        {
            //join room
            RoomOptions ro = new RoomOptions();
            PhotonNetwork.JoinOrCreateRoom(RoomName.text, ro, null);
        }

    }


    [PunRPC]
    public void shareLocation(string uname)
    {
        #region retrieve GPS Location INfo 获取GPS定位的信息，并显示出来
        float latitude;
        float longitude;
        float altitude;
        if (retrieveLocation(out latitude, out longitude, out altitude))
        {
            gpsInfo.text = uname + "\n Lat: " + latitude + "\n" + "Long: " + longitude + " \n" + "Alt: " + altitude;
        }
        else
        {
            gpsInfo.text = "No location";
        }
        #endregion
    }


}
