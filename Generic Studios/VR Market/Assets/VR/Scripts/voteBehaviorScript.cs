using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class voteBehaviorScript : MonoBehaviour
{
    public bool ShowText = false;
    [SerializeField] string TextToShow;
    [SerializeField] bool AAAAAAAAAAAAA = false;
    private TextMesh _textMesh;
    void Start()
    {
        _textMesh = gameObject.GetComponentInChildren<TextMesh>();
        _textMesh.text = TextToShow;
    }

    // Update is called once per frame
    void Update()
    {
        if(AAAAAAAAAAAAA)
        {
            onDisplayVote();
        }
        if(ShowText)
        {
            _textMesh.text = TextToShow;
        }
        else
        {
            _textMesh.text = ""; 
        }
    }

    public void onDisplayVote()
    {
        ShowText = true;
        transform.Rotate(new Vector3(0, 0, 0));
    }
}
