using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using Photon.Pun;

public class AvaController : MonoBehaviour
{
    private float movePara = 0.0f;
    private float turnPara = 0.0f;

    public float turnSpeed = 100.0f;
    public float moveSpeed = 10.0f;
    public void TurnLeft()
    {
        turnPara = -1.0f;
    }
    public void TurnRight()
    {
        turnPara = 1.0f;
    }

    public void MoveForward()
    {
        movePara = 1.0f;
    }
    public void MoveBackward()
    {
        movePara = -1.0f;
    }

    public void Stop()
    {
        movePara = 0.0f;
        turnPara = 0.0f;
    }

    void Start()
    {
        if(GetComponent<PhotonView>().IsMine == true || PhotonNetwork.IsConnected == false)
        {
            GameObject.Find("Canvas/Btn_Left").GetComponent<EventTrigger>().triggers[0].callback.AddListener((data) => { TurnLeft(); });
            GameObject.Find("Canvas/Btn_Left").GetComponent<EventTrigger>().triggers[1].callback.AddListener((data) => { Stop(); });

            GameObject.Find("Canvas/Btn_Right").GetComponent<EventTrigger>().triggers[0].callback.AddListener((data) => { TurnRight(); });
            GameObject.Find("Canvas/Btn_Right").GetComponent<EventTrigger>().triggers[1].callback.AddListener((data) => { Stop(); });

            GameObject.Find("Canvas/Btn_Forward").GetComponent<EventTrigger>().triggers[0].callback.AddListener((data) => { MoveForward(); });
            GameObject.Find("Canvas/Btn_Forward").GetComponent<EventTrigger>().triggers[1].callback.AddListener((data) => { Stop(); });

            GameObject.Find("Canvas/Btn_Backward").GetComponent<EventTrigger>().triggers[0].callback.AddListener((data) => { MoveBackward(); });
            GameObject.Find("Canvas/Btn_Backward").GetComponent<EventTrigger>().triggers[1].callback.AddListener((data) => { Stop(); });
        }
        
    }

    void Update()
    {
        transform.rotation *= Quaternion.AngleAxis(turnPara * turnSpeed * Time.deltaTime, Vector3.up);
        transform.position += movePara * moveSpeed * transform.forward;
    }
}
