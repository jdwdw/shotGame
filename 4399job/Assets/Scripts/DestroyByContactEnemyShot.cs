﻿using UnityEngine;
using System.Collections;

public class DestroyByContactEnemyShot : MonoBehaviour {

	// Use this for initialization
	public int damagePerShot = 20;
	//public GameObject explosion;
	//public GameObject playerExplosion;
	//public int scoreValue; // how many score will be added when an asteroid's shot


	Animator anim;
	GameObject player;
	PlayerHealth playerHealth;
	EnemyHealth enemyHealth;
	bool playerInRange;
	float timer;


	void Awake ()
	{
		player = GameObject.FindGameObjectWithTag ("PlayerOwn");
		playerHealth = player.GetComponent <PlayerHealth> ();
		enemyHealth = GetComponent<EnemyHealth>();
		anim = GetComponent <Animator> ();
	}


	void OnTriggerEnter (Collider other)
	{
		//		if (other.gameObject.CompareTag ("Boundary"))
		//			return;
		//		Instantiate (explosion, transform.position, transform.rotation);
		if (other.gameObject==player)
		{
			PlayerHealth playerHealth = other.gameObject.GetComponent <PlayerHealth> ();
			if(playerHealth != null)
			{
				playerHealth.TakeDamage (damagePerShot);
			}
		}
		Destroy (gameObject);

		//		Destroy (other.gameObject);
		//		Destroy (gameObject);
	}
}
