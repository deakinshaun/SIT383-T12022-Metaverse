using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;

public class MeshSkeletonManager : MonoBehaviour
{
    // bone order (via serialize field)
    //  Head | Torso | (UpperArm, ForeArm) - L - R | Hips | (Thigh, Calf) - L - R |
    [SerializeField]
    private GameObject[] boneArray;
    // could optimize to only tracking certain bones then sending index however this allows for more fine tunig + readability then passing around a heap of ints
    private string[] poseRelationArray = { "Eyes", "Shoulders", "LeftUpArm", "LeftForArm", "RightUpArm", "RightForArm", "Hips", "LeftThigh", "LeftCalf", "RightThigh", "RightCalf" };



    // Start is called before the first frame update
    void Start()
    {
        CustomEvents.instance.onBonePose += MoveBone;
    }

    private void MoveBone(string name,Transform transform)
    {
        int ind = Array.IndexOf(poseRelationArray, name);

        // trying guard if's
        if (ind == -1)
        {
            return;
        }

        // setting position and rotation
        boneArray[ind].transform.position = transform.position;
        boneArray[ind].transform.rotation = transform.rotation;
    }

    // Update is called once per frame
    void Update()
    {

    }
}
