using UnityEngine;
using System.Collections;

public class PlayerShot : MonoBehaviour {
	public float fireRate = 0.5f;
	public GameObject shot;
	public Transform shotSpawn;
	private float nextFire=0.0f;
	Animator anim;
	GameObject player;
	AudioSource gunAudio;
	// Use this for initialization
	void Start () {
		player = GameObject.FindWithTag ("Player");
		anim = player.GetComponent<Animator>();
		//anim.SetLayerWeight(3, 1);  
		gunAudio = GetComponent<AudioSource> ();

	
	}
	
	// Update is called once per frame
	void Update () {
		if (Input.GetButton ("Fire1") && Time.time > nextFire) 
		{
//			anim.SetFloat ("WeaponType_int",8);
			anim.SetTrigger("Shoot_b");
			gunAudio.Play ();
			nextFire = Time.time + fireRate;
			Instantiate (shot, shotSpawn.position, shotSpawn.rotation);
		}
	
	}
}
