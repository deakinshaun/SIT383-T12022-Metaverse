using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class voteBehaviorScript : MonoBehaviour
{
    public bool ShowText = false;
    [SerializeField] public string TextToShow = null;
    [SerializeField] float speed = 10f; 
    private TextMesh _textMesh;

    Vector3 rot = new Vector3(0, 0, 0);
    Vector3 pos = new Vector3(0, 01f, 0);
    Vector3 curRot;
    Vector3 curPos;
    void Start()
    {
        _textMesh = gameObject.GetComponentInChildren<TextMesh>();
        _textMesh.text = TextToShow;
        curRot = transform.eulerAngles;
        curPos = transform.position;
    }

    // Update is called once per frame
    void Update()
    {
        ShowText = false;
        Debug.Log("rot x : " + transform.eulerAngles.x.ToString() + " rot z : " + transform.eulerAngles.z.ToString());
        if(transform.eulerAngles.x < 15 || transform.eulerAngles.x > 345)
        {
            if (transform.eulerAngles.z < 15 || transform.eulerAngles.z > 345)
            {
                ShowText = true;
            }

        }
        if(ShowText)
        {

            //transform.position = new Vector3(0, 0.01f, 0);
            if (string.IsNullOrEmpty(TextToShow))
            {
                _textMesh.text = "No review was left";
            }
            else
            {
                _textMesh.text = TextToShow;
            }
             
            //onDisplayVote();
        }
        else
        {
            gameObject.GetComponent<Rigidbody>().constraints = RigidbodyConstraints.None;
            gameObject.GetComponent<Rigidbody>().freezeRotation = false;
            _textMesh.text = ""; 
        }
        
    }

    public void onDisplayVote()
    {
        ShowText = true;
        gameObject.GetComponent<Rigidbody>().constraints = RigidbodyConstraints.FreezePosition;
        gameObject.GetComponent<Rigidbody>().freezeRotation = true;
        transform.rotation = Quaternion.Lerp(transform.rotation, Quaternion.Euler(rot.x, rot.y, rot.z), Time.deltaTime * speed);
        transform.position = Vector3.Lerp(transform.position, pos, 0.05f);
    }
}
