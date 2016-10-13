using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;
using System.Collections;

public class PlayerShot : MonoBehaviour
{
	public float fireRate = 0.5f;
	public GameObject shot;
	public Transform shotSpawn;
	public AudioClip shotClip;
	private float nextFire = 0.0f;
	Animator anim;
	GameObject player;
	GameObject playerGun;
	AudioSource gunAudio;
	bool shoted = false;
	PlayerShooting playershooting;

	// Use this for initialization
	void Start ()
	{
		player = GameObject.FindWithTag ("Player");
		playerGun = GameObject.FindWithTag ("PlayerGun");
		playershooting = playerGun.GetComponent<PlayerShooting> ();
		anim = player.GetComponent<Animator> ();
		//anim.SetLayerWeight(3, 1);  
		gunAudio = GetComponent<AudioSource> ();

	
	}
	
	// Update is called once per frame
	void Update ()
	{
//		if (EventSystem.current.IsPointerOverGameObject ())
//		{
//			Debug.Log("On the ugui");
//		}
//		else
//		{
//			Debug.Log ("not on the ugui");
//		}
//		if (Input.GetButton ("Fire1") && Time.time > nextFire)
//		{
//			if ((Input.GetMouseButtonDown (0)) || (Input.touchCount > 0 && Input.GetTouch (0).phase == TouchPhase.Began))
//			{
//
//					anim.SetInteger ("WeaponType_int", 8);
//					anim.SetTrigger ("Shoot_b");
//					gunAudio.Play ();
//					nextFire = Time.time + fireRate;
//					Instantiate (shot, shotSpawn.position, shotSpawn.rotation);
//
//			}
//		}
		if (Time.time > nextFire && shoted == true)
		{
			nextFire = Time.time + fireRate;
			shoted = false;
		}
	
	}

	public void Shot ()
	{
		if (shoted == false)
		{
			playershooting.Shoot ();
			anim.SetInteger ("WeaponType_int", 8);
			anim.SetTrigger ("Shoot_b");
			gunAudio.Play ();
			//nextFire = Time.time + fireRate;
			Instantiate (shot, shotSpawn.position, shotSpawn.rotation);
			shoted = true;
		}

	}

	public void ResetAudioclip ()
	{
		gunAudio.clip = shotClip;
	}
}
