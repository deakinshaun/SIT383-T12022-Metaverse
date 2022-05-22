using UnityEngine;

public class VoiceCommands : MonoBehaviour
{

    public AudioClip jazzMusic;
    public AudioClip pianoMusic;
    public AudioSource audioSource;



    // Start is called before the first frame update
    void Start()
    {

    }

    // Update is called once per frame
    void Update()
    {

    }

    public void HelloWorld()
    {
        Debug.Log("Simple voice command activated. Hello World");
    }

    public void PlayJazz()
    {
        audioSource.clip = jazzMusic;
        audioSource.Play();
        Debug.Log("Now Playing Jazz Music");
    }

    public void PlayPiano()
    {
        audioSource.clip = pianoMusic;
        audioSource.Play();
        Debug.Log("Now Playing Piano Music");
    }

    public void StopMusic()
    {
        audioSource.Stop();
        Debug.Log("Stopping Music");

    }
}
