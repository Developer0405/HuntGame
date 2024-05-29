using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;

public class AnimalSpawn : MonoBehaviour
{
    public List<Transform> spawnPoints;
    public List<Animal> animal;
    public int numberOfAnimals;
    private string prefabName;
    // Start is called before the first frame update
    void Start()
    {
        if (PhotonNetwork.IsMasterClient)
        {
            for (int i = 0; i < numberOfAnimals; i++)
            {
                int j = Random.Range(0, spawnPoints.Count);
                int b = Random.Range(0, animal.Count*10);

                Debug.Log("j" + j + "b" + b);
                PhotonNetwork.Instantiate(animal[b/10].prefab, spawnPoints[j].position, Quaternion.identity);
                spawnPoints.RemoveAt(j);
            }


          
        }

    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
