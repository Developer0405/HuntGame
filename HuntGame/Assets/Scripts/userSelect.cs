using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Networking;

public class userSelect : MonoBehaviour
{
    private string URL = "http://localhost/mydb/userSelect.php";
    public string[] userData;

    //[System.Obsolete]
    IEnumerator Start()
    {

        UnityWebRequest user = UnityWebRequest.Get(URL);
        yield return user.SendWebRequest();
        if (user.isNetworkError)
            Debug.Log("Error:" + user.error);
        else
        {
            string userDataString = user.downloadHandler.text;
            userData = userDataString.Split('|');
        }
    }
}

