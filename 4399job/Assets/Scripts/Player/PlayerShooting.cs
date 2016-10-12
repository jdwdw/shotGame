﻿

using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;
using System.Collections;

public class PlayerShooting : MonoBehaviour
{
	public int damagePerShot = 20;
	public float timeBetweenBullets = 0.15f;
	public float range = 100f;


	float timer;
	Ray shootRay;
	RaycastHit shootHit;
	int shootableMask;
	ParticleSystem gunParticles;
	LineRenderer gunLine;
	AudioSource gunAudio;
	Light gunLight;
	float effectsDisplayTime = 0.2f;


	void Awake ()
	{
		shootableMask = LayerMask.GetMask ("Shootable");
		gunParticles = GetComponent<ParticleSystem> ();
		gunLine = GetComponent <LineRenderer> ();
		gunAudio = GetComponent<AudioSource> ();
		gunLight = GetComponent<Light> ();
		gunLine.enabled = true;

	}

	void Line()
	{
		shootRay.origin = transform.position;
		shootRay.direction = transform.forward;
		gunLine.SetPosition (0, transform.position);
		gunLine.SetPosition (1, shootRay.origin + shootRay.direction * range);
	}

	void Update ()
	{
//		timer += Time.deltaTime;
//
//		if (Input.GetButton ("Fire1") && timer >= timeBetweenBullets)
//		{
//			if ((Input.GetMouseButtonDown (0)) || (Input.touchCount > 0 && Input.GetTouch (0).phase == TouchPhase.Began))
//			{
//
//					Shoot ();
//
//			}
//		}
//
//		if (timer >= timeBetweenBullets * effectsDisplayTime)
//		{
//			DisableEffects ();
//		}
		Line ();

	}


	public void DisableEffects ()
	{
		//gunLine.enabled = false;
		gunLight.enabled = false;
	}


	public void Shoot ()
	{
		timer = 0f;

		gunAudio.Play ();

		gunLight.enabled = true;

		gunParticles.Stop ();
		gunParticles.Play ();

		StartCoroutine (Wait (0.05f));

//		gunLine.enabled = true;
//		gunLine.SetPosition (0, transform.position);
//
//		shootRay.origin = transform.position;
//		shootRay.direction = transform.forward;
//
//		if (Physics.Raycast (shootRay, out shootHit, range, shootableMask))
//		{
//			EnemyHealth enemyHealth = shootHit.collider.GetComponent <EnemyHealth> ();
//			if (enemyHealth != null)
//			{
//				enemyHealth.TakeDamage (damagePerShot, shootHit.point);
//			}
//			gunLine.SetPosition (1, shootHit.point);
//		} else
//		{
//			gunLine.SetPosition (1, shootRay.origin + shootRay.direction * range);
//		}
	}

	IEnumerator Wait(float waitTime)
	{
		yield return new WaitForSeconds (waitTime);

		DisableEffects ();
	}
}
