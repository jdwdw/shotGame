using UnityEngine;
using System.Collections;

public class PlayerShot : MonoBehaviour {
	public float fireRate = 0.5f;
	public GameObject shot;
	public Transform shotSpawn;
	private float nextFire=0.0f;

	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
		if (Input.GetButton ("Fire1") && Time.time > nextFire) 
		{
			nextFire = Time.time + fireRate;
			Instantiate (shot, shotSpawn.position, shotSpawn.rotation);
		}
	
	}
}
