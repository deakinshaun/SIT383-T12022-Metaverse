using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;

public class NetworkedPose : MonoBehaviourPun
{
    [Tooltip("The skeleton visualizer prefab")]
    public GameObject skeletonVisualizerTemplate;

    [Tooltip("The pose manager object to hold each skeleton")]
    public GameObject poseManager;

    private Dictionary<Photon.Realtime.Player, GameObject> skeletons;
    void Start()
    {
        skeletons = new Dictionary<Photon.Realtime.Player, GameObject>();
    }

    [PunRPC]
    void NetworkPose(float[] pose, PhotonMessageInfo info)
    {
        if (!skeletons.ContainsKey(info.Sender))
        {
            GameObject skel = Instantiate(skeletonVisualizerTemplate);
            if (poseManager != null)
            {
                skel.transform.SetParent(poseManager.transform, false);
            }
            skeletons[info.Sender] = skel;
        }
        skeletons[info.Sender].GetComponent<PoseSkeleton>().updatePose(pose);
    }

    public void updatePose(float[] rawPoseData)
    {
        PhotonView photonView = PhotonView.Get(this);
        photonView.RPC("NetworkPose", RpcTarget.All, rawPoseData);
    }
}
