using UnityEngine;

public class GestureRecognitionManager : MonoBehaviour
{
    public Transform userHead;
    public Vector3[] headTransformAngles;
    public int index;
    public Vector3 centerAngle;

    public GameObject Yes, No;

    // Start is called before the first frame update
    void Start()
    {
        Yes.SetActive(false);
        No.SetActive(false);

        index = 0;
        headTransformAngles = new Vector3[100];

        centerAngle = userHead.eulerAngles;
    }

    // Update is called once per frame
    void FixedUpdate()
    {
        headTransformAngles[index] = userHead.eulerAngles;
        index++;

        if (index == 100)
        {
            CheckMovement();
            ResetGestures();
        }
    }

    private void ResetGestures()
    {
        index = 0;

        Yes.SetActive(false);
        No.SetActive(false);
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
            if (headTransformAngles[i].y < centerAngle.y - 20.0f && !up)
            {
                left = true;
            }
            // else check to see if looking right as cant be looking left and right at same time
            else if (headTransformAngles[i].y > centerAngle.y - 20.0f && !down)
            {
                right = true;
            }
        }

        // If user has been left and right and not up and down then register as a shake of a head 
        if (left && right && !(up && down))
        {
            // shake head so No
            No.SetActive(true);
        }

        // If user has been up and down and not left and right then register as a nod 
        if (up && down && !(left && right))
        {
            // node head so Yes
            Yes.SetActive(true);
        }
    }
}
