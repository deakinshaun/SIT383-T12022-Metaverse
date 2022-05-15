using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using System.Net.Security;
using System.Security.Cryptography.X509Certificates;
using System.Net;
using System.IO;
using System;
using TMPro;

public class SpeechRecognition : MonoBehaviour
{
    public TextMeshProUGUI outputText;
    private string subscriptionKey = "9ca300f15d4b4f9598f349641ec14d50";
    private string token;
    public int recordDuration = 5;
    private static bool TrustCertificate(object sender, X509Certificate x509Certificate, X509Chain x509Chain, SslPolicyErrors sslPolicyErrors)
    {
        return true;
    }

    void Start()
    {
        ServicePointManager.ServerCertificateValidationCallback = TrustCertificate;
    }

    [System.Serializable]
    class AssemblyResponse
    {
        public string id;
        public string status;
        public string text;
    }

    [System.Serializable]
    class AssemblyUploadResponse
    {
        public string upload_url;
    }

    private string uploadData(byte[] wavData)
    {
        string fetchUri = "https://api.assemblyai.com/v2/upload";
        HttpWebRequest request = (HttpWebRequest)WebRequest.Create(fetchUri + "");
        request.Headers["authorization"] = subscriptionKey;
        request.Method = "POST";

        Stream rs = request.GetRequestStream();
        rs.Write(wavData, 0, wavData.Length);
        rs.Close();

        var response = (HttpWebResponse)request.GetResponse();
        var responseString = new StreamReader(response.GetResponseStream()).ReadToEnd();
        Debug.Log("Response from service: " + responseString);
        if (outputText != null)
        {
            outputText.text = responseString;
        }

        AssemblyUploadResponse r = JsonUtility.FromJson<AssemblyUploadResponse>(responseString);
        Debug.Log("Got id " + r.upload_url);
        return r.upload_url;
    }

    public void SpeechToText(byte[] wavData)
    {
        string wavURL = uploadData(wavData);
        string fetchUri = "https://api.assemblyai.com/v2/transcript";
        HttpWebRequest request = (HttpWebRequest)WebRequest.Create(fetchUri + "");
        request.ContentType = "application/application/json";
        request.Headers["authorization"] = subscriptionKey;
        request.Method = "POST";
        byte[] wData = System.Text.Encoding.ASCII.GetBytes("{\"audio_url\": \"" + wavURL + "\"}");

        Stream rs = request.GetRequestStream();
        rs.Write(wData, 0, wData.Length);
        rs.Close();

        var response = (HttpWebResponse)request.GetResponse();
        var responseString = new StreamReader(response.GetResponseStream()).ReadToEnd();
        Debug.Log("Response from service: " + responseString);
        if (outputText != null)
        {
            outputText.text = responseString;
        }

        AssemblyResponse r = JsonUtility.FromJson<AssemblyResponse>(responseString);
        Debug.Log("Got id " + r.id);

        StartCoroutine(waitForTranscript(r.id));
    }

    private IEnumerator waitForTranscript(string id)
    {
        AssemblyResponse r = null;
        for (int i = 0; i < 10; i++)
        {
            string fetchUri = "https://api.assemblyai.com/v2/transcript";
            HttpWebRequest request = (HttpWebRequest)WebRequest.Create(fetchUri + "/" + id);
            request.ContentType = "application/application/json";
            request.Headers["authorization"] = subscriptionKey;
            request.Method = "GET";

            var response = (HttpWebResponse)request.GetResponse();
            var responseString = new StreamReader(response.GetResponseStream()).ReadToEnd();
            Debug.Log("Response from service: " + responseString);
            if (outputText != null)
            {
                outputText.text = responseString;
            }

            r = JsonUtility.FromJson<AssemblyResponse>(responseString);
            if (r.status == "completed")
            {
                break;
            }
            yield return new WaitForSeconds(5.0f);
        }
        outputText.text = r.text;
    }

    private IEnumerator recordAudio()
    {
        AudioClip audio = Microphone.Start(null, false, recordDuration, 16000);
        yield return new WaitForSeconds(recordDuration);
        Microphone.End(null);

        byte[] wavData = ConvertToWav(audio);
        SpeechToText(wavData);
    }

    public void Trigger()
    {
        StartCoroutine(recordAudio());
    }

    /*const int HEADER_SIZE = 44;

    static byte[] ConvertToWav(AudioClip clip)
    {
        var samples = new float[clip.samples];
        clip.GetData(samples, 0);
        ushort[] intData = new ushort[samples.Length];
        byte[] bytesData = new byte[HEADER_SIZE + samples.Length * 2];
        int rescaleFactor = 32767;
        WriteHeader(bytesData, clip);
        for (int i = 0; i<samples.Length; i++)
        {
            intData[i] = (ushort)(samples[i] * rescaleFactor);
            byte[] byteArr = new byte[2];
            byteArr = BitConverter.GetBytes(intData[i]);
            byteArr.CopyTo(bytesData, HEADER_SIZE + i * 2);
        }
        return bytesData;
    }

    static void WriteHeader(byte[] bytesData, AudioClip clip)
    {
        var hz = clip.frequency;
        var channels = clip.channels;
        var samples = clip.samples;
        byte[] riff = System.Text.Encoding.UTF8.GetBytes("RIFF");
        riff.CopyTo(bytesData, 0);
        byte[] chunkSize = BitConverter.GetBytes(HEADER_SIZE + clip.samples * 2 - 8);
        chunkSize.CopyTo(bytesData, 4);
        byte[] wave = System.Text.Encoding.UTF8.GetBytes("WAVE");
        wave.CopyTo(bytesData, 8);
        byte[] fmt = System.Text.Encoding.UTF8.GetBytes("fmt");
        fmt.CopyTo(bytesData, 12);
        byte[] subChunk1 = BitConverter.GetBytes(16);
        subChunk1.CopyTo(bytesData, 16);
        ushort one = 1;
        byte[] audioFormat = BitConverter.GetBytes(one);
        audioFormat.CopyTo(bytesData, 20);
        byte[] numChannels = BitConverter.GetBytes(channels);
        numChannels.CopyTo(bytesData, 22);
        byte[] sampleRate = BitConverter.GetBytes(hz);
        sampleRate.CopyTo(bytesData, 24);
        byte[] byteRate = BitConverter.GetBytes(hz * channels * 2);
        byteRate.CopyTo(bytesData, 28);
        ushort blockAlign = (ushort)(channels * 2);
        BitConverter.GetBytes(blockAlign).CopyTo(bytesData, 32);
        ushort bps = 16;
        byte[] bitsPerSample = BitConverter.GetBytes(bps);
        bitsPerSample.CopyTo(bytesData, 34);
        byte[] datastring = System.Text.Encoding.UTF8.GetBytes("data");
        datastring.CopyTo(bytesData, 36);
        byte[] subChunk2 = BitConverter.GetBytes(samples * 2);
        subChunk2.CopyTo(bytesData, 40);
    }*/

    const int HEADER_SIZE = 44;

    static byte[] ConvertToWav(AudioClip clip)
    {

        var samples = new float[clip.samples];

        clip.GetData(samples, 0);

        Int16[] intData = new Int16[samples.Length];
        //converting in 2 float[] steps to Int16[], //then Int16[] to Byte[]

        Byte[] bytesData = new Byte[HEADER_SIZE + samples.Length * 2];
        //bytesData array is twice the size of
        //dataSource array because a float converted in Int16 is 2 bytes.

        int rescaleFactor = 32767; //to convert float to Int16

        WriteHeader(bytesData, clip);

        for (int i = 0; i < samples.Length; i++)
        {
            intData[i] = (short)(samples[i] * rescaleFactor);
            Byte[] byteArr = new Byte[2];
            byteArr = BitConverter.GetBytes(intData[i]);
            byteArr.CopyTo(bytesData, HEADER_SIZE + i * 2);
        }

        return bytesData;
    }

    static void WriteHeader(byte[] bytesData, AudioClip clip)
    {

        var hz = clip.frequency;
        var channels = clip.channels;
        var samples = clip.samples;

        Byte[] riff = System.Text.Encoding.UTF8.GetBytes("RIFF");
        riff.CopyTo(bytesData, 0);

        Byte[] chunkSize = BitConverter.GetBytes(HEADER_SIZE + clip.samples * 2 - 8);
        chunkSize.CopyTo(bytesData, 4);

        Byte[] wave = System.Text.Encoding.UTF8.GetBytes("WAVE");
        wave.CopyTo(bytesData, 8);

        Byte[] fmt = System.Text.Encoding.UTF8.GetBytes("fmt ");
        fmt.CopyTo(bytesData, 12);

        Byte[] subChunk1 = BitConverter.GetBytes(16);
        subChunk1.CopyTo(bytesData, 16);

        UInt16 one = 1;

        Byte[] audioFormat = BitConverter.GetBytes(one);
        audioFormat.CopyTo(bytesData, 20);

        Byte[] numChannels = BitConverter.GetBytes(channels);
        numChannels.CopyTo(bytesData, 22);

        Byte[] sampleRate = BitConverter.GetBytes(hz);
        sampleRate.CopyTo(bytesData, 24);

        Byte[] byteRate = BitConverter.GetBytes(hz * channels * 2); // sampleRate * bytesPerSample*number of channels, here 44100*2*2
        byteRate.CopyTo(bytesData, 28);

        UInt16 blockAlign = (ushort)(channels * 2);
        BitConverter.GetBytes(blockAlign).CopyTo(bytesData, 32);

        UInt16 bps = 16;
        Byte[] bitsPerSample = BitConverter.GetBytes(bps);
        bitsPerSample.CopyTo(bytesData, 34);

        Byte[] datastring = System.Text.Encoding.UTF8.GetBytes("data");
        datastring.CopyTo(bytesData, 36);

        Byte[] subChunk2 = BitConverter.GetBytes(samples * channels * 2);
        subChunk2.CopyTo(bytesData, 40);
    }
}
