using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;
using Com.Kawaiisun.SimpleHostile;

public class AnimalsController : MonoBehaviour
{
    private Manager manager;
    public bool move,dead = false;
    public Vector3[] spawnPoints;
    private PhotonView _view;
    public Animal animal;
    private int _hp;
    public Animator _animController;
    int j;
    void Start()
    {
        manager = GameObject.Find("Manager").GetComponent<Manager>();
        _view = GetComponent<PhotonView>();
        _hp = animal.HP;
        j = Random.Range(-1, 1);
    }

    // Update is called once per frame
    
    void Update()
    {
        if(_view.IsMine)
        {
        
        if (move==true)
        {
            if(j==0)
                {
                    _animController.SetBool("WalkRight", move);
                }
            else
                {
                    _animController.SetBool("WalkLeft", move);
                }
            transform.Translate(Vector3.forward * 1* Time.deltaTime);   
        } 
        }
    }
    [PunRPC]
    public void TakeDamageAnimal(int Damage,int p_actor)
    {
       if(_view.IsMine)
        {
            _hp -= Damage;
            if(dead == false)
            {
            if (_hp <= 0)
            {
                if (p_actor >= 0)
                    manager.ChangeStat_S(p_actor, 0, 1);
                    
                move = false;
                _animController.SetBool("WalkRight", move);
                _animController.SetBool("WalkLeft", move);
                _animController.SetBool("Dead", true);
                    dead = true;
            }
            }

        }

        

        
    }
}
