using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class MainControl : MonoBehaviour
{
    public GameObject[] AllUI;
    public int index = 1;
    private float strength=0.5f; //摇晃力度

    enum slideVector { nullVector, left, right };
    private Vector2 lastPos;//上一个位置
    private Vector2 currentPos;//下一个位置
    private slideVector currentVector = slideVector.nullVector;//当前滑动方向
    private float timer;//时间计数器
    public float offsetTime = 0.01f;//判断的时间间隔
    void Start()
    {
        
    }

    public void Arest()
    {
        AllUI[index].SetActive(false);
        index=0;
        AllUI[index].SetActive(true);
    }
    public void Aprev()
    {
        if(index==0)
        {
            Handheld.Vibrate();
            return;
        }
        AllUI[index].SetActive(false);
        index--;
        AllUI[index].SetActive(true);
    }
    public void Anext()
    {
        if (index == 2)
        {
            Handheld.Vibrate();
            return;
        }
        AllUI[index].SetActive(false);
        index++;
        AllUI[index].SetActive(true);
    }
    void Update()
    {
        if (Input.acceleration.x > strength || Input.acceleration.y > strength || Input.acceleration.z > strength)
        {
            Handheld.Vibrate();
            gameObject.SetActive(false);
        }
        if (Input.touchCount == 1)
        {
            if (Input.touches[0].phase == TouchPhase.Began)
            {
                lastPos = Input.touches[0].position;
                currentPos = Input.touches[0].position;
                timer = 0;
                Debug.Log("Click begin && Drag begin");
            }
            if (Input.touches[0].phase == TouchPhase.Moved)
            {
                currentPos = Input.touches[0].position;
                timer += Time.deltaTime;
                if (timer > offsetTime)
                {
                    if (currentPos.x < lastPos.x)
                    {
                        if (currentVector == slideVector.left)
                        {
                            return;
                        }
                        //TODO trun Left event
                        currentVector = slideVector.left;
                        Debug.Log("Turn left");
                        Anext();
                    }
                    if (currentPos.x > lastPos.x)
                    {
                        if (currentVector == slideVector.right)
                        {
                            return;
                        }
                        //TODO trun right event
                        currentVector = slideVector.right;
                        Debug.Log("Turn right");
                        Aprev();
                    }
                    lastPos = currentPos;
                    timer = 0;
                }
            }
            if (Input.touches[0].phase == TouchPhase.Ended)
            {//滑动结束
                currentVector = slideVector.nullVector;
                Debug.Log("Click over && Drag over");
            }
        }
    }
}
