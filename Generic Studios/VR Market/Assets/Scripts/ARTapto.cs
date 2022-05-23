using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.ARSubsystems;
using UnityEngine.XR.ARFoundation;

[RequireComponent(typeof(ARRaycastManager))]
public class ARTapto : MonoBehaviour
{

    public GameObject instance;
    private GameObject Spawnedobject;
    private ARRaycastManager _RaycastManager;
    private Vector2 touchPosition;

    static List<ARRaycastHit> hits = new List<ARRaycastHit>();
    void Start()
    {
        
    }
    private void Awake()
    {
        _RaycastManager = GetComponent<ARRaycastManager>();
    }
    bool GetTouchPosition(out Vector2 touchPosition)
    {
        if(Input.touchCount>0)
        {
            touchPosition = Input.GetTouch(index: 0).position;
            return true;
        }
        else
        {
            touchPosition = default;  
            return false;
        }
    }

    // Update is called once per frame
    void Update()
    {
        if (!GetTouchPosition(out Vector2 touchPosition)) return;
        if(_RaycastManager.Raycast(touchPosition,hits,TrackableType.PlaneWithinPolygon))
        {
            var hitPose = hits[0].pose;
            if(Spawnedobject==null)
            {
                Spawnedobject = Instantiate(instance, hitPose.position, hitPose.rotation);
            }
            else
            {
                Spawnedobject.transform.position = hitPose.position;
            }

        }
    }
}
