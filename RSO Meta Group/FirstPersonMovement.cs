using Photon.Pun;
using UnityEngine;

public class FirstPersonMovement : MonoBehaviour
{
    public float speed = 5;
    public PhotonView view;
    Vector2 velocity;

    private void Start()
    {
        Camera camera = Camera.main;
        if (view.IsMine == true)
        {
            camera.enabled = false;
        }

    }
    void Update()
    {
        if(view.IsMine == true)
        {
            velocity.y = Input.GetAxis("Vertical") * speed * Time.deltaTime;
            velocity.x = Input.GetAxis("Horizontal") * speed * Time.deltaTime;
            transform.Translate(velocity.x, 0, velocity.y);
        }
    }
}
