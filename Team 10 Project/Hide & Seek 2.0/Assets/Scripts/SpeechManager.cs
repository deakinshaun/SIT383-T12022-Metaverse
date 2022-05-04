// The code used here was obtained from https://github.com/Azure-Samples/cognitive-services-speech-sdk
// under the sample/unity/speechrecognizer path. The code has been adapted for our project's needs.

using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Microsoft.CognitiveServices.Speech;
using Microsoft.CognitiveServices.Speech.Audio;
using Microsoft.CognitiveServices.Speech.Translation;
using System.Threading.Tasks;
using System.Globalization;
using System;
using System.Diagnostics;
using UnityEngine.SceneManagement;
#if PLATFORM_ANDROID
using UnityEngine.Android;
#endif
using Debug = UnityEngine.Debug;

public class SpeechManager : MonoBehaviour
{
    // Public fields in the Unity inspector
    public Text RecognizedText;
    public Text ErrorText;

    // If scene is resetting, bool gets changed to true
    public bool resettingScene = false;

    // Used to show live messages on screen, must be locked to avoid threading deadlocks since
    // the recognition events are raised in a separate thread
    private string recognizedString = "";
    private string errorString = "";
    private System.Object threadLocker = new System.Object();

    // Speech recognition key, required
    public string SpeechServiceAPIKey = string.Empty;
    public string SpeechServiceRegion = "westus";

    // Cognitive Services Speech objects used for Speech Recognition
    private SpeechRecognizer recognizer;
    private TranslationRecognizer translator;
    // The current language of origin is locked to English-US in this sample. Change this
    // to another region & language code to use a different origin language.
    // e.g. fr-fr, es-es, etc.
    string fromLanguage = "en-us";

    private bool micPermissionGranted = false;
#if PLATFORM_ANDROID
    // Required to manifest microphone permission, cf.
    // https://docs.unity3d.com/Manual/android-manifest.html
    private Microphone mic;
#endif

    private void Awake()
    {
        // IMPORTANT INFO BEFORE YOU CAN USE THIS SAMPLE:
        // Get your own Cognitive Services Speech subscription key for free at the following
        // link: https://docs.microsoft.com/azure/cognitive-services/speech-service/get-started.
        // Use the inspector fields to manually set these values with your subscription info.
        // If you prefer to manually set your Speech Service API Key and Region in code,
        // then uncomment the two lines below and set the values to your own.
        //SpeechServiceAPIKey = "YourSubscriptionKey";
        //SpeechServiceRegion = "YourServiceRegion";
    }

    private void Start()
    {
#if PLATFORM_ANDROID
        // Request to use the microphone, cf.
        // https://docs.unity3d.com/Manual/android-RequestingPermissions.html
        recognizedString = "Waiting for microphone permission...";
        if (!Permission.HasUserAuthorizedPermission(Permission.Microphone))
        {
            recognizedString = "Permission has been granted";
            Permission.RequestUserPermission(Permission.Microphone);
        }
#else
        micPermissionGranted = true;
#endif
    }

    /// <summary>
    /// Attach to button component used to launch continuous recognition (with or without translation)
    /// </summary>
    public void StartContinuous()
    {
        errorString = "";
        if (micPermissionGranted)
        {
            StartContinuousRecognition();
        }
        else
        {
            recognizedString = "This app cannot function without access to the microphone.";
            errorString = "ERROR: Microphone access denied.";
            Debug.LogError(errorString);
        }
    }

    /// <summary>
    /// Creates a class-level Speech Recognizer for a specific language using Azure credentials
    /// and hooks-up lifecycle & recognition events
    /// </summary>
    void CreateSpeechRecognizer()
    {
        if (SpeechServiceAPIKey.Length == 0 || SpeechServiceAPIKey == "YourSubscriptionKey")
        {
            recognizedString = "You forgot to obtain Cognitive Services Speech credentials and inserting them in this app." + Environment.NewLine +
                               "See the README file and/or the instructions in the Awake() function for more info before proceeding.";
            errorString = "ERROR: Missing service credentials";
            Debug.LogError(errorString);
            return;
        }
        Debug.Log("Creating Speech Recognizer.");
        recognizedString = "Initializing speech recognition, please wait...";

        if (recognizer == null)
        {
            SpeechConfig config = SpeechConfig.FromSubscription(SpeechServiceAPIKey, SpeechServiceRegion);
            config.SpeechRecognitionLanguage = fromLanguage;
            recognizer = new SpeechRecognizer(config);

            if (recognizer != null)
            {
                // Subscribes to speech events.
                recognizer.Recognizing += RecognizingHandler;
                recognizer.Recognized += RecognizedHandler;
                recognizer.SpeechStartDetected += SpeechStartDetectedHandler;
                recognizer.SpeechEndDetected += SpeechEndDetectedHandler;
                recognizer.Canceled += CanceledHandler;
                recognizer.SessionStarted += SessionStartedHandler;
                recognizer.SessionStopped += SessionStoppedHandler;
            }
        }
        Debug.Log("CreateSpeechRecognizer exit");
    }

    /// <summary>
    /// Initiate continuous speech recognition from the default microphone.
    /// </summary>
    private async void StartContinuousRecognition()
    {
        Debug.Log("Starting Continuous Speech Recognition.");
        CreateSpeechRecognizer();

        if (recognizer != null)
        {
            Debug.Log("Starting Speech Recognizer.");
            await recognizer.StartContinuousRecognitionAsync().ConfigureAwait(false);

            recognizedString = "Speech Recognizer is now running.";
            Debug.Log("Speech Recognizer is now running.");
        }
        Debug.Log("Start Continuous Speech Recognition exit");
    }

    #region Speech Recognition event handlers
    private void SessionStartedHandler(object sender, SessionEventArgs e)
    {
        Debug.Log($"\n    Session started event. Event: {e.ToString()}.");
    }

    private void SessionStoppedHandler(object sender, SessionEventArgs e)
    {
        Debug.Log($"\n    Session event. Event: {e.ToString()}.");
        Debug.Log($"Session Stop detected. Stop the recognition.");
    }

    private void SpeechStartDetectedHandler(object sender, RecognitionEventArgs e)
    {
        Debug.Log($"SpeechStartDetected received: offset: {e.Offset}.");
    }

    private void SpeechEndDetectedHandler(object sender, RecognitionEventArgs e)
    {
        Debug.Log($"SpeechEndDetected received: offset: {e.Offset}.");
        Debug.Log($"Speech end detected.");
    }

    // "Recognizing" events are fired every time we receive interim results during recognition (i.e. hypotheses)
    private void RecognizingHandler(object sender, SpeechRecognitionEventArgs e)
    {
        if (e.Result.Reason == ResultReason.RecognizingSpeech)
        {
            Debug.Log($"HYPOTHESIS: Text={e.Result.Text}");
            lock (threadLocker)
            {
                recognizedString = $"HYPOTHESIS: {Environment.NewLine}{e.Result.Text}";
            }
        }
    }

    // "Recognized" events are fired when the utterance end was detected by the server
    private void RecognizedHandler(object sender, SpeechRecognitionEventArgs e)
    {
        if (e.Result.Reason == ResultReason.RecognizedSpeech)
        {
            Debug.Log($"RECOGNIZED: Text={e.Result.Text}");
            lock (threadLocker)
            {
                recognizedString = $"RESULT: {Environment.NewLine}{e.Result.Text}";
            }
        }
        else if (e.Result.Reason == ResultReason.NoMatch)
        {
            Debug.Log($"NOMATCH: Speech could not be recognized.");
        }
    }

    // "Canceled" events are fired if the server encounters some kind of error.
    // This is often caused by invalid subscription credentials.
    private void CanceledHandler(object sender, SpeechRecognitionCanceledEventArgs e)
    {
        Debug.Log($"CANCELED: Reason={e.Reason}");

        errorString = e.ToString();
        if (e.Reason == CancellationReason.Error)
        {
            Debug.LogError($"CANCELED: ErrorDetails={e.ErrorDetails}");
            Debug.LogError("CANCELED: Did you update the subscription info?");
        }
    }
    #endregion

    #region Speech Translation event handlers
    // "Recognizing" events are fired every time we receive interim results during recognition (i.e. hypotheses)
    private void RecognizingTranslationHandler(object sender, TranslationRecognitionEventArgs e)
    {
        if (e.Result.Reason == ResultReason.TranslatingSpeech)
        {
            Debug.Log($"RECOGNIZED HYPOTHESIS: Text={e.Result.Text}");
            lock (threadLocker)
            {
                recognizedString = $"RECOGNIZED HYPOTHESIS ({fromLanguage}): {Environment.NewLine}{e.Result.Text}";
                recognizedString += $"{Environment.NewLine}TRANSLATED HYPOTHESESE:";
                foreach (var element in e.Result.Translations)
                {
                    recognizedString += $"{Environment.NewLine}[{element.Key}]: {element.Value}";
                }
            }
        }
    }

    // "Recognized" events are fired when the utterance end was detected by the server
    private void RecognizedTranslationHandler(object sender, TranslationRecognitionEventArgs e)
    {
        if (e.Result.Reason == ResultReason.TranslatedSpeech)
        {
            Debug.Log($"RECOGNIZED: Text={e.Result.Text}");
            lock (threadLocker)
            {
                recognizedString = $"RECOGNIZED RESULT ({fromLanguage}): {Environment.NewLine}{e.Result.Text}";
                recognizedString += $"{Environment.NewLine}TRANSLATED RESULTS:";
                foreach (var element in e.Result.Translations)
                {
                    recognizedString += $"{Environment.NewLine}[{element.Key}]: {element.Value}";
                }
            }
        }
        else if (e.Result.Reason == ResultReason.RecognizedSpeech)
        {
            Debug.Log($"RECOGNIZED: Text={e.Result.Text}");
            lock (threadLocker)
            {
                recognizedString = $"NON-TRANSLATED RESULT: {Environment.NewLine}{e.Result.Text}";
            }
        }
        else if (e.Result.Reason == ResultReason.NoMatch)
        {
            Debug.Log($"NOMATCH: Speech could not be recognized or translated.");
        }
    }

    // "Canceled" events are fired if the server encounters some kind of error.
    // This is often caused by invalid subscription credentials.
    private void CanceledTranslationHandler(object sender, TranslationRecognitionCanceledEventArgs e)
    {
        Debug.Log($"CANCELED: Reason={e.Reason}");

        errorString = e.ToString();
        if (e.Reason == CancellationReason.Error)
        {
            Debug.LogError($"CANCELED: ErrorDetails={e.ErrorDetails}");
            Debug.LogError($"CANCELED: Did you update the subscription info?");
        }
    }
    #endregion

    /// <summary>
    /// Main update loop: Runs every frame
    /// </summary>
    void Update()
    {
#if PLATFORM_ANDROID
        if (!micPermissionGranted && Permission.HasUserAuthorizedPermission(Permission.Microphone))
        {
            micPermissionGranted = true;
        }
#endif
        // Used to update results on screen during updates
        lock (threadLocker)
        {
            RecognizedText.text = recognizedString;
            ErrorText.text = errorString;
        }

        if (recognizedString.Contains("I give up as seeker"))
        {
            resettingScene = true;
            recognizedString = "";
        }

        if (resettingScene)
        {
            Debug.Log("Restarting Scene");
            resettingScene = false;
            StartCoroutine(RestartScene());
        }
    }
    
    public IEnumerator RestartScene()
    {
        float delay = 5f;
        RecognizedText.text = "Resetting game in " + delay + " seconds";
        yield return new WaitForSeconds(delay);
        SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex);
    }

    void OnDisable()
    {
        StopRecognition();
    }

    /// <summary>
    /// Stops the recognition on the speech recognizer or translator as applicable.
    /// Important: Unhook all events & clean-up resources.
    /// </summary>
    public async void StopRecognition()
    {
        if (recognizer != null)
        {
            await recognizer.StopContinuousRecognitionAsync().ConfigureAwait(false);
            recognizer.Recognizing -= RecognizingHandler;
            recognizer.Recognized -= RecognizedHandler;
            recognizer.SpeechStartDetected -= SpeechStartDetectedHandler;
            recognizer.SpeechEndDetected -= SpeechEndDetectedHandler;
            recognizer.Canceled -= CanceledHandler;
            recognizer.SessionStarted -= SessionStartedHandler;
            recognizer.SessionStopped -= SessionStoppedHandler;
            recognizer.Dispose();
            recognizer = null;
            recognizedString = "Speech Recognizer is now stopped.";
            Debug.Log("Speech Recognizer is now stopped.");
        }
        if (translator != null)
        {
            await translator.StopContinuousRecognitionAsync().ConfigureAwait(false);
            translator.Recognizing -= RecognizingTranslationHandler;
            translator.Recognized -= RecognizedTranslationHandler;
            translator.SpeechStartDetected -= SpeechStartDetectedHandler;
            translator.SpeechEndDetected -= SpeechEndDetectedHandler;
            translator.Canceled -= CanceledTranslationHandler;
            translator.SessionStarted -= SessionStartedHandler;
            translator.SessionStopped -= SessionStoppedHandler;
            translator.Dispose();
            translator = null;
            recognizedString = "Speech Translator is now stopped.";
            Debug.Log("Speech Translator is now stopped.");
        }
    }
}