﻿using UnityEngine;
using UnityEngine.UI;
using System.Collections;
using UnityProject;

public class PlayerHealth : MonoBehaviour
{
	public int startingHealth = 100;
	public int currentHealth;
	public Slider healthSlider;
	public Image damageImage;
	public AudioClip deathClip;
	public float flashSpeed = 5f;
	public Color flashColour = new Color(1f, 0f, 0f, 0.1f);

	GameObject player;
	GameObject playerOwn;
	Animator anim;
	AudioSource playerAudio;
	PlayerMovement playerMovement;
	PlayerShooting playerShooting;
	public bool isDead;
	bool damaged;
	Vector3 playerBeginPosition;

	CapsuleCollider playerCapsuleCollider;
	SphereCollider playerSphereCollider; 


	void Awake ()
	{
		playerOwn=GameObject.FindWithTag ("PlayerOwn");
		player = GameObject.FindWithTag ("Player");
		anim = player.GetComponent<Animator>();
		//anim = GetComponent <Animator> ();
		playerAudio = GetComponent <AudioSource> ();
		playerMovement = GetComponent <PlayerMovement> ();
		playerShooting = GetComponentInChildren <PlayerShooting> ();
		currentHealth = startingHealth;
		playerBeginPosition = player.transform.position;
		playerCapsuleCollider = playerOwn.GetComponent <CapsuleCollider> ();
		playerSphereCollider=playerOwn.GetComponent <SphereCollider> ();
	}


	void Update ()
	{
		if(damaged)
		{
			damageImage.color = flashColour;
		}
		else
		{
			damageImage.color = Color.Lerp (damageImage.color, Color.clear, flashSpeed * Time.deltaTime);
		}
		damaged = false;
	}


	public void TakeDamage (int amount)
	{
		damaged = true;

		currentHealth -= amount;

		healthSlider.value = currentHealth;


		//playerAudio.Play ();

		if(currentHealth <= 0 && !isDead)
		{
			Death ();
		}
	}

	public void AddHeart (int amount){
		if (currentHealth <= 100-amount) 
		{
			currentHealth += amount;
		} 
		else {
			currentHealth = 100;
		}
		healthSlider.value = currentHealth;
	}

	void Death ()
	{
		isDead = true;

		playerShooting.DisableEffects ();

		anim.SetBool ("Death_b", true);
		anim.SetInteger ("DeathType_int", 2);

		playerAudio.clip = deathClip;
		playerAudio.Play ();

		playerMovement.enabled = false;
		playerShooting.enabled = false;
		playerCapsuleCollider.enabled = false;
		playerSphereCollider.enabled = false;

	}

	public void PlayerRestart()
	{
		isDead = false;
		anim.SetBool ("Death_b", false);
		playerCapsuleCollider.enabled = true;
		playerSphereCollider.enabled = true;
		currentHealth=startingHealth;
		healthSlider.value = currentHealth;
		player.transform.position = playerBeginPosition;
		playerMovement.enabled = true;
		playerShooting.enabled = true;
		playerMovement.PlayerRestartMovement ();

	}
}
