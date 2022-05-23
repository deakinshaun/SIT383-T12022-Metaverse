using Photon.Pun;
using UnityEngine;
public class MoveAvatar : MonoBehaviour
{
    // Start is called before the first frame update
    //void Start()
    //{

    //}

    public float movespeed = 0.5f;
    public float turnspeed = 10.0f;

    // Update is called once per frame
    void Update()
    {
        if (GetComponent<PhotonView>())
        {
            if ((GetComponent<PhotonView>().IsMine) || (!PhotonNetwork.IsConnected))
            {
                float move = Input.GetAxis("Vertical");
                float turn = Input.GetAxis("Horizontal");

                transform.rotation *= Quaternion.AngleAxis(turn * turnspeed * Time.deltaTime, transform.up);
                transform.position += move * movespeed * Time.deltaTime * transform.forward;
            }
        }
    }
}
