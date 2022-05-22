using UnityEngine;

public class VoiceCommands : MonoBehaviour
{

    public AudioSource audioSource;
    public AudioClip currentTrack;
    public AudioClip[] tracks;
    public int index = 0;

    public bool paused;

    public void HelloWorld()
    {
        Debug.Log("Simple voice command activated. Hello World");
    }


    public void Play()
    {
        if (paused)
        {
            audioSource.UnPause();
            paused = false;
        }
        else
        {
            index = Random.Range(0, tracks.Length);
            currentTrack = tracks[index];
            audioSource.clip = currentTrack;
            audioSource.Stop();
            audioSource.Play();
            Debug.Log("Playing Music");
        }

    }

    public void PauseMusic()
    {
        audioSource.Pause();
        paused = true;
        Debug.Log("Paused");

    }

    public void NextTrack()
    {
        if (index < tracks.Length - 1)
        {
            index++;
        }
        else
        {
            index = 0;
        }

        currentTrack = tracks[index];
        audioSource.clip = currentTrack;
        audioSource.Stop();
        audioSource.Play();
        Debug.Log("Next Track");
    }

    public void PreviousTrack()
    {
        if (index > 0)
        {
            index--;
        }
        else
        {
            index = tracks.Length - 1;
        }

        currentTrack = tracks[index];
        audioSource.clip = currentTrack;
        audioSource.Stop();
        audioSource.Play();
        Debug.Log("Previous Track");
    }

    public void PlayJazz()
    {
        index = 0;
        currentTrack = tracks[0];
        audioSource.clip = currentTrack;
        audioSource.Play();
        Debug.Log("Now Playing Jazz Music");
    }

    public void PlayPiano()
    {
        index = 1;
        currentTrack = tracks[1];
        audioSource.clip = currentTrack;
        audioSource.Play();
        Debug.Log("Now Playing Piano Music");
    }

    public void StopMusic()
    {
        audioSource.Stop();
        Debug.Log("Stopping Music");

    }

    public void IncreaseVolume()
    {
        Debug.Log("Increasing Volume");
        if (audioSource.volume <= 0.9f)
        {
            audioSource.volume += 0.1f;
            Debug.Log("Increasing Volume");
        }
    }

    public void DecreaseVolume()
    {
        Debug.Log("Decreasing Volume");

        if (audioSource.volume >= 0.1f)
        {
            audioSource.volume -= 0.1f;
            Debug.Log("Decreasing Volume");
        }

    }
}
