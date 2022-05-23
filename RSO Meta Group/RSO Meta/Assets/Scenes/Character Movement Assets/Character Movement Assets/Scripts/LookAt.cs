﻿// LookAt.cs
using UnityEngine;
using System.Collections;
using Photon.Pun;

[RequireComponent (typeof (Animator))]
public class LookAt : MonoBehaviour {
	public PhotonView view;
	public Transform head = null;
	public Vector3 lookAtTargetPosition;
	public float lookAtCoolTime = 0.2f;
	public float lookAtHeatTime = 0.2f;
	public bool looking = true;

	private Vector3 lookAtPosition;
	private Animator anim;
	private float lookAtWeight = 0.0f;

	void Start ()
	{
		if (view.IsMine)
		{
			if (!head)
			{
				Debug.LogError("No head transform - LookAt disabled");
				enabled = false;
				return;
			}
			anim = GetComponent<Animator>();
			lookAtTargetPosition = head.position + transform.forward;
			lookAtPosition = lookAtTargetPosition;
		}
	}

	void OnAnimatorIK ()
	{
		if (view.IsMine)
		{
			lookAtTargetPosition.y = head.position.y;
			float lookAtTargetWeight = looking ? 1.0f : 0.0f;

			Vector3 curDir = lookAtPosition - head.position;
			Vector3 futDir = lookAtTargetPosition - head.position;

			curDir = Vector3.RotateTowards(curDir, futDir, 6.28f * Time.deltaTime, float.PositiveInfinity);
			lookAtPosition = head.position + curDir;

			float blendTime = lookAtTargetWeight > lookAtWeight ? lookAtHeatTime : lookAtCoolTime;
			lookAtWeight = Mathf.MoveTowards(lookAtWeight, lookAtTargetWeight, Time.deltaTime / blendTime);
			anim.SetLookAtWeight(lookAtWeight, 0.2f, 0.5f, 0.7f, 0.5f);
			anim.SetLookAtPosition(lookAtPosition);
		}
	}
}
