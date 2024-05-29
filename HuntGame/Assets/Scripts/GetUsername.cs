using UnityEngine;
using System.Runtime.InteropServices;
using System;
using UnityEngine.UI;

public class GetUsername : MonoBehaviour
{

    public Text text;
    [DllImport("__Internal")]
    public static extern void GetJSON(string path, string objectName, string callback, string fallback);

    private void Start()
    {
        GetJSON("GetUsername", gameObject.name, "OnRequestSuccess", "OnRequestFail");
    }
    void OnRequestSuccess(string Data)
    {
        text.text = Data;
    }
    void OnRequestFail(string Error)
    {
        text.text = Error;
    }
}
