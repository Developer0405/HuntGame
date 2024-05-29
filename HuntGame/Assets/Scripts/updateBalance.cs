using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Networking;

public class updateBalance : MonoBehaviour
{
    private string URL = "http://localhost/mydb/userUpdate.php";
    public string MoneyNewValue, Username;
    public void Go()
    {
        Debug.Log("Go");
      StartCoroutine(UpdateMoneyValue(MoneyNewValue,Username));
    }
     IEnumerator UpdateMoneyValue(string newValue, string username)
    {
        WWWForm form = new WWWForm();
        form.AddField("editMoney", newValue);
        form.AddField("Username", username);
WWW www = new WWW(URL, form);
        yield return www;
        Debug.Log("Sent");
    }

}
