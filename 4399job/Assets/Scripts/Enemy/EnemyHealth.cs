﻿using UnityEngine;
using System.Collections;

public class EnemyHealth : MonoBehaviour
{
	public int startingHealth = 100;
	public int currentHealth;
	public float sinkSpeed = 2.5f;
	public int scoreValue = 10;
	public AudioClip deathClip;


	Animator anim;
	AudioSource enemyAudio;
	ParticleSystem hitParticles;
	CapsuleCollider capsuleCollider;
	bool isDead;
	bool isSinking;


	void Awake ()
	{
		anim = GetComponent <Animator> ();
		enemyAudio = GetComponent <AudioSource> ();
		hitParticles = GetComponentInChildren <ParticleSystem> ();
		capsuleCollider = GetComponent <CapsuleCollider> ();
		currentHealth = startingHealth;
	}


	void Update ()
	{
		if(isSinking)
		{
			transform.Translate (-Vector3.up * sinkSpeed * Time.deltaTime);
		}
	}


	public void TakeDamage (int amount, Vector3 hitPoint)
	{
		if(isDead)
			return;

//		enemyAudio.Play ();

		currentHealth -= amount;

		hitParticles.transform.position = hitPoint;
		hitParticles.Play();

		if(currentHealth <= 0)
		{
			Death ();
			//Debug.Log ("Death");
		}
	}


	void Death ()
	{
		isDead = true;

		capsuleCollider.isTrigger = true;

		anim.SetBool ("Death_b", true);
		anim.SetInteger ("DeathType_int", 1);


     	//anim.SetTrigger ("Dead");
		StartSinking();
		enemyAudio.clip = deathClip;
		enemyAudio.Play ();
	}


	public void StartSinking ()
	{
		//GetComponent <NavMeshAgent> ().enabled = false;
		//GetComponent <Rigidbody> ().isKinematic = true;
		//isSinking = true;
		ScoreManager.score += scoreValue;
		//Destroy (gameObject, 2f);
		StartCoroutine(Wait(2f));
	}

	IEnumerator Wait(float waitTime)
	{
		yield return new WaitForSeconds (waitTime);
		capsuleCollider.isTrigger = false;
		isDead = false;
		gameObject.SetActive(false);
	}
}
