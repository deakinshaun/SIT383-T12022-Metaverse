using Photon.Pun;
using UnityEngine;


public class GestureRecognitionManager : MonoBehaviour
{
    public Transform userHead;
    public Vector3[] headTransformAngles;
    public int index;
    public Vector3 centerAngle;

    public GameObject No;

    // Start is called before the first frame update
    void Start()
    {
        centerAngle = userHead.eulerAngles;
        //Yes.SetActive(false);
        No.SetActive(false);

        index = 0;
        headTransformAngles = new Vector3[100];
        InvokeRepeating("SetCenterPos", 2, 6);

    }

    // Update is called once per frame
    void FixedUpdate()
    {
        //Debug.Log(userHead.eulerAngles);
        headTransformAngles[index] = userHead.eulerAngles;
        index++;

        if (index == 100)
        {
            CheckMovement();
            ResetGestures();

        }
    }

    public void SetCenterPos()
    {

        centerAngle = userHead.eulerAngles;
        Debug.Log("Setting center angle to: " + centerAngle);

    }

    private void ResetGestures()
    {
        index = 0;

        //Yes.SetActive(false);
        //No.SetActive(false);
    }

    void CheckMovement()
    {

        bool right = false, left = false, up = false, down = false;

        // Loop over every value stored in the headTransformAngles
        for (int i = 0; i < headTransformAngles.Length - 1; i++)
        {
            // Check to see if looking up
            if (headTransformAngles[i].x < centerAngle.x - 20.0f && !up)
            {
                up = true;
            }
            // else check to see if looking down as cant be looking up and down at same time
            else if (headTransformAngles[i].x > centerAngle.x - 20.0f && !down)
            {
                down = true;
            }

            // Check to see if looking left
            if (headTransformAngles[i].y < centerAngle.y - 20.0f && !left)
            {
                left = true;
            }
            // else check to see if looking right as cant be looking left and right at same time
            else if (headTransformAngles[i].y > centerAngle.y - 20.0f && !right)
            {
                right = true;
            }
        }

        // If user has been left and right and not up and down then register as a shake of a head 
        if (left && right && !(up && down))
        {
            // shake head so No
            No.SetActive(true);
            Debug.Log("shake head so No");
        }

        // If user has been up and down and not left and right then register as a nod 
        if (up && down && !(left && right))
        {
            // node head so Yes
            //Yes.SetActive(true);
            Debug.Log("nod head so Yes");
            NodGestureActivate();
        }



    }
    public void NodGestureActivate()
    {
        //GetComponent<PhotonView>().RPC("ButtonPressedHappy", RpcTarget.Others);
        Debug.Log("Trying to instantiate the nod gesture now");
        PhotonNetwork.Instantiate("YesGesture", new Vector3(0, 1, 0) + userHead.position, Quaternion.identity, 0);
    }
}
