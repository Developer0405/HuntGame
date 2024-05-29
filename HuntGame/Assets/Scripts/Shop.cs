using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using System;


public class Shop : MonoBehaviour
{
    public GameObject buyButton;
    private string URL = "http://localhost/mydb/userUpdate.php";
    public int price;
    public int balance;
    public Text balanceText,usernameText;
    // Start is called before the first frame update
    public void Parse()
    {
        balance = int.Parse(balanceText.text);
        if(balance%10 != 0)
        {
            buyButton.SetActive(false);
        }
    }

    // Update is called once per frame
    public void Buy()
    {
       
        if (balance>price)
        {
            balance -= price;
            StartCoroutine(UpdateBalance());
        }
    }
    public IEnumerator UpdateBalance()
    {
        WWWForm form = new WWWForm();
        form.AddField("editMoney", balance.ToString());
        form.AddField("Username", usernameText.text);
        WWW www = new WWW(URL, form);
        balanceText.text = balance.ToString();
        buyButton.SetActive(false);
        yield return www;
    }
}
