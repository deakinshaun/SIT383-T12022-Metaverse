using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PoseSkeleton : MonoBehaviour
{
    enum BodyPart : int
    {
        Nose = 0,
        Left_eye = 1,
        Right_eye = 2,
        Left_ear = 3,
        Right_ear = 4,
        Left_shoulder = 5,
        Right_shoulder = 6,
        Left_elbow = 7,
        Right_elbow = 8,
        Left_wrist = 9,
        Right_wrist = 10,
        Left_hip = 11,
        Right_hip = 12,
        Left_knee = 13,
        Right_knee = 14,
        Left_ankle = 15,
        Right_ankle = 16
    };

    [Tooltip("A marker prefab to represent pose points inthe skeleton")]
    public GameObject pointMarkerTemplate;

    [Tooltip("A prefab to represent a bone. Size andshape matching default cylinder")]
    public GameObject boneTemplate;

    private GameObject[] markers;

    private int numPointsInPose;

    class SkeletonBone
    {
        public GameObject boneObject;
        public BodyPart from;
        public BodyPart to;
        public string name;

        public SkeletonBone(BodyPart f, BodyPart t,string n)
        {
            boneObject = null;
            from = f;
            to = t;
            name = n;
        }
    };

    private List<SkeletonBone> bones;

    public PoseSkeleton()
    {
        numPointsInPose = Enum.GetNames(typeof(BodyPart)).Length;
        markers = new GameObject[numPointsInPose];

        bones = new List<SkeletonBone>();

        // head
        bones.Add(new SkeletonBone(BodyPart.Left_eye, BodyPart.Right_eye,"Eyes"));
        bones.Add(new SkeletonBone(BodyPart.Left_eye, BodyPart.Left_shoulder, "NeckL"));
        bones.Add(new SkeletonBone(BodyPart.Right_eye, BodyPart.Right_shoulder, "NeckR"));
        bones.Add(new SkeletonBone(BodyPart.Left_eye, BodyPart.Left_ear, "EarL"));
        bones.Add(new SkeletonBone(BodyPart.Right_eye, BodyPart.Right_ear, "EarR"));
        bones.Add(new SkeletonBone(BodyPart.Left_eye, BodyPart.Nose, "NoseL"));
        bones.Add(new SkeletonBone(BodyPart.Right_eye, BodyPart.Nose, "NoseR"));

        // body
        bones.Add(new SkeletonBone(BodyPart.Left_hip, BodyPart.Left_shoulder, "LeftTorso"));
        bones.Add(new SkeletonBone(BodyPart.Right_hip, BodyPart.Right_shoulder, "RightTorso"));
        bones.Add(new SkeletonBone(BodyPart.Left_hip, BodyPart.Right_hip, "Hips"));
        bones.Add(new SkeletonBone(BodyPart.Left_shoulder, BodyPart.Right_shoulder, "Shoulders"));

        // arms
        bones.Add(new SkeletonBone(BodyPart.Left_shoulder, BodyPart.Left_elbow, "LeftUpArm"));
        bones.Add(new SkeletonBone(BodyPart.Left_elbow, BodyPart.Left_wrist, "LeftForArm"));
        bones.Add(new SkeletonBone(BodyPart.Right_shoulder, BodyPart.Right_elbow, "RightUpArm"));
        bones.Add(new SkeletonBone(BodyPart.Right_elbow, BodyPart.Right_wrist, "RightForArm"));

        // legs
        bones.Add(new SkeletonBone(BodyPart.Left_hip, BodyPart.Left_knee, "LeftThigh"));
        bones.Add(new SkeletonBone(BodyPart.Left_knee, BodyPart.Left_ankle, "LeftCalf"));
        bones.Add(new SkeletonBone(BodyPart.Right_hip, BodyPart.Right_knee, "RightThigh"));
        bones.Add(new SkeletonBone(BodyPart.Right_knee, BodyPart.Right_ankle, "RightCalf"));
    }

    private Vector3 poseToVector(float[] rawPoseData, int i)
    {
        return new Vector3(-(10.0f * rawPoseData[i * 3 + 0] - 5.0f), 0.0f, -(10.0f * rawPoseData[i * 3 + 1] - 5.0f));
    }

    private void drawPosePoints(float[] rawPoseData)
    {
        for (int i = 0; i < numPointsInPose; i++)
        {
            if (markers[i] == null)
            {
                markers[i] = Instantiate(pointMarkerTemplate);
                markers[i].transform.SetParent(this.transform, false);
            }

            markers[i].transform.localPosition = poseToVector(rawPoseData, i);
            if (rawPoseData[i * 3 + 2] < 0.0f)
            {
                markers[i].SetActive(false);
            }
            else
            {
                markers[i].SetActive(true);
            }
        }
    }

    private void drawSkeleton(float[] rawPoseData)
    {
        foreach (SkeletonBone b in bones)
        {
            Vector3 from = poseToVector(rawPoseData, (int)b.from);
            Vector3 to = poseToVector(rawPoseData, (int)b.to);
            float len = 0.5f * (to - from).magnitude;

            if (len > 0.01f)
            {
                if (b.boneObject == null)
                {
                    b.boneObject = Instantiate(boneTemplate);
                    b.boneObject.transform.SetParent(this.transform, false);
                    b.boneObject.name = b.name;
                }

                b.boneObject.transform.up = transform.worldToLocalMatrix.MultiplyVector(to - from);


                b.boneObject.transform.localPosition = (from + to) / 2.0f;
                b.boneObject.transform.localScale = new Vector3(0.3f, 1.0f * len, 0.3f);

                if ((rawPoseData[(int)b.from * 3 + 2] < 0.0f) || (rawPoseData[(int)b.to * 3 + 2] < 0.0f))
                {
                    b.boneObject.SetActive(false);
                }
                else
                {
                    b.boneObject.SetActive(true);
                }
            }
        }
    }

    public void updatePose(float[] rawPoseData)
    {
        drawPosePoints(rawPoseData);
        drawSkeleton(rawPoseData);
    }
}