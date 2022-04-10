using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;

public class Movement : MonoBehaviour
{
    //control speeds
    [SerializeField]
    private float moveSpeed = 0.5f;
    [SerializeField]
    private float turnSpeed = 10.0f;


    // Start is called before the first frame update
    void Start()
    {
     Color randCol = Random.ColorHSV();
       // charMat.color = randCol;
    }

    // Update is called once per frame
    void Update()
    {
        if (GetComponent<PhotonView>().IsMine || !PhotonNetwork.IsConnected)
        {
    //        float move = Input.GetAxis("Vertical");
            float turn = Input.GetAxis("Horizontal");



            if(Input.GetKey(KeyCode.Backspace))
            {
                transform.position = new Vector3(0,0,0);
                transform.rotation = new Quaternion(0,0,0,0);
            }

            //mutliply when dealing with rotation
            transform.rotation *= Quaternion.AngleAxis(turn * turnSpeed * Time.deltaTime, transform.up);


            // moving forward / back
  //          transform.position += move * moveSpeed * Time.deltaTime * transform.forward;
        }
        else
        {
            transform.Find("HeadCam").gameObject.SetActive(false);
        }
    }
}
