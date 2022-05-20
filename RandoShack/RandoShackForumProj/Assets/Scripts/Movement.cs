using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;
using Photon.Pun;
using Photon.Realtime;

public class Movement : MonoBehaviourPun
{
    //raycast numbers
    [SerializeField]
    private float downRay = 100f;

    [SerializeField]
    private float downOffset = -0.5f;

    private string platform = "Pc";

    //control speeds
    [SerializeField]
    [Tooltip("Turn speed in degrees per second")]
    private float turnSpeed = 5.0f;
    [SerializeField]
    [Tooltip("Movement speed in meters per second (assumes 1 unit = 1 meter)")]
    private float moveSpeed = 10f;

    private bool cameraMoving = false;

    private GameObject personalCamera;

    // binding events to buttons
    private void setButtonCallbacks()
    {
        GameObject.Find($"{platform}Canvas/ChatInterface/TalkButton").GetComponent<EventTrigger>().triggers[0].callback.AddListener((data) => { Talk(); });
        GameObject.Find($"{platform}Canvas/ChatInterface/LobbyButton").GetComponent<EventTrigger>().triggers[0].callback.AddListener((data) => { Lobby(); });
        GameObject.Find($"{platform}Canvas/ChatInterface/NickNameButton").GetComponent<EventTrigger>().triggers[0].callback.AddListener((data) => { Nickname(); });
    }

    public void Talk()
    {
        GameObject t = GameObject.Find($"{platform}Canvas/ChatInterface/TalkMessage/Text");
        if (t != null)
        {
            Room r = PhotonNetwork.CurrentRoom;
            ExitGames.Client.Photon.Hashtable p = r.CustomProperties;
            p["talk"] += RoomManager.getName(this.gameObject) + ":" + Time.time + ":" + t.GetComponent<Text>().text + "\n";
            r.SetCustomProperties(p);
        }
    }

    // Write a message into the "notices" custom property
    // which is shared with the lobby.
    public void Lobby()
    {
        GameObject t = GameObject.Find($"{platform}Canvas/ChatInterface/LobbyMessage/Text");
        if (t != null)
        {
            Room r = PhotonNetwork.CurrentRoom;
            ExitGames.Client.Photon.Hashtable p = r.CustomProperties;
            p["notices"] = RoomManager.getName(this.gameObject) + ":" + Time.time + ":" + t.GetComponent<Text>().text + "\n";
            r.SetCustomProperties(p);
        }
    }

    [PunRPC]
    void showNickname(string name)
    {
        transform.Find("NameText").gameObject.GetComponent<TextMesh>().text = name;
    }

    public void Nickname()
    {
        GameObject t = GameObject.Find($"{platform}Canvas/ChatInterface/NickNameName/Text");
        if (t != null)
        {
            GetComponent<PhotonView>().Owner.NickName = t.GetComponent<Text>().text;
            photonView.RPC("showNickname", RpcTarget.All, RoomManager.getName(this.gameObject));
        }
    }


    void Start()
    {
        Color randCol = Random.ColorHSV();
        // charMat.color = randCol;

        if (Application.platform == RuntimePlatform.Android)
            platform = "Android";

        if (photonView.IsMine || !PhotonNetwork.IsConnected)
        {
            setButtonCallbacks();
            personalCamera = transform.Find("HeadCam").gameObject;
            personalCamera.SetActive(true);

        }
        photonView.RPC("showNickname", RpcTarget.All, RoomManager.getName(this.gameObject));
    }


    // Update is called once per frame
    void Update()
    {
        if (photonView.IsMine || !PhotonNetwork.IsConnected)
        {
            float move = Input.GetAxis("Vertical");
            float turn = Input.GetAxis("Horizontal");


            //mutliply when dealing with rotation
           // transform.rotation *= Quaternion.AngleAxis(turn * turnSpeed * Time.deltaTime, transform.up);

            // moving forward / back
            transform.position += move * moveSpeed * Time.deltaTime * transform.forward;

            //placing PLayer on ground
            RaycastHit hit;
            if (Physics.Raycast(transform.position, Vector3.down, out hit, downRay))
            {
                /*
                 * Set the target location to the location of the hit.
                 */
                Vector3 targetLocation = hit.point;
                /*
                 * Modify the target location so that the object is being perfectly aligned with the ground (if it's flat).
                 */
                targetLocation += new Vector3(0, (transform.localScale.y / 2) + downOffset, 0);
                /*
                 * Move the object to the target location.
                 */
                transform.position = targetLocation;
            }

            // dragging around camera
            if (Input.GetAxis("Fire1") > 0f && !EventSystem.current.IsPointerOverGameObject())
            {
                Cursor.lockState = CursorLockMode.Locked;
                cameraMoving = true;
                // rotating the player (in x axis as it affects forward / back)
                transform.eulerAngles += turnSpeed * new Vector3(0, Input.GetAxis("Mouse X"), 0);
                // moving the camera (we don't want player moving forward upwards so only camera is rotated along x)
                Debug.Log(Input.GetAxis("Mouse Y"));
                personalCamera.transform.eulerAngles += turnSpeed * new Vector3(-1 * Input.GetAxis("Mouse Y"), 0, 0);
            }
            else
            {
                if(cameraMoving == true)
                {
                    Cursor.lockState = CursorLockMode.None;
                    cameraMoving = false;
                }
            }




        }
        else
        {
            transform.Find("HeadCam").gameObject.SetActive(false);
        }
    }
}
