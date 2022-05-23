using Photon.Pun;
using UnityEngine;

public class DestroyFeedback : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        Invoke("DestroySelfNetworked", 2f);
    }

    // Update is called once per frame
    void Update()
    {
        this.transform.position += new Vector3(0, 0.001f, 0);
    }
    void DestroySelfNetworked()
    {
        Debug.Log("Destroying feedback now");
        PhotonNetwork.Destroy(this.gameObject);
    }
}
