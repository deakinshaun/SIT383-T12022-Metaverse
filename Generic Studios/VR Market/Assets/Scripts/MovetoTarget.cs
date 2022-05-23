using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MovetoTarget : MonoBehaviour
{
    Transform mytrans;
    List<Vector3> endpoints;
    float speed = 5;
    float angularspeed = 100;
    // Start is called before the first frame update
    void Start()
    {
        mytrans = GetComponent<Transform>();
        endpoints = new List<Vector3>();

    }

    void UpdateControl()
    {
        Vector3 mouseposition = Input.mousePosition;
        Ray ray = Camera.main.ScreenPointToRay(mouseposition);
        RaycastHit hitInfo;
        if(Physics.Raycast(ray,out hitInfo))
        {
           if(Input.GetKey(KeyCode.LeftShift))
            {
                AddEndPoint(hitInfo.point);
            }
           else
            {
                ReSetEndPoint(hitInfo.point);
            }
        }
    }
    void AddEndPoint(Vector3 endpoint)
    {
        endpoint.y = mytrans.position.y;
        endpoints.Add(endpoint);
    }
    void ReSetEndPoint(Vector3 endpoint)
    {
        endpoint.y = mytrans.position.y;
        endpoints.Clear();
        endpoints.Add(endpoint);
    }

    // Update is called once per frame
    void Update()
    {
        if(Input.GetMouseButtonDown(1))
        {
            UpdateControl();

        }
        if(endpoints.Count>0)
        {
            Vector3 v = endpoints[0] - mytrans.position;
            var dot = Vector3.Dot(v, mytrans.right);
            Vector3 next = v.normalized * speed * Time.deltaTime;
            float angle = Vector3.Angle(v, mytrans.forward);
            if(Vector3.SqrMagnitude(v)>1f)
            {
                float minAngle = Mathf.Min(angle, angularspeed * Time.deltaTime);
                if(angle>1f)
                {
                    if(dot>0)
                            {
                        mytrans.Rotate(new Vector3(0, minAngle, 0));
                    }
                    else
                    {
                        mytrans.Rotate(new Vector3(0, -minAngle, 0));
                    }
                }
                else
                {
                    mytrans.LookAt(endpoints[0]);
                    mytrans.position += next;
                }
            }
            else
            {
                endpoints.RemoveAt(0);
            }
        }
       
    }
}
