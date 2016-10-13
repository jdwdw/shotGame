using UnityEngine;
using System.Collections;

public class EnemyShooting : MonoBehaviour {

	public float timeBetweenAttacks = 0.5f;
	public int attackDamage = 10;

	public float fireRate = 6f;
	public GameObject shot;
	public Transform shotSpawn;
	private float nextFire=0.0f;

	public AudioClip shotClip;


	Animator anim;
	GameObject player;
	PlayerHealth playerHealth;
	EnemyHealth enemyHealth;
	bool playerInRange;

	//Rigidbody rb;

	//EnemyAroundMovement enemyAroundMovement;

	void Awake ()
	{
		player = GameObject.FindGameObjectWithTag ("PlayerOwn");
		playerHealth = player.GetComponent <PlayerHealth> ();
		enemyHealth = GetComponent<EnemyHealth>();
		anim = GetComponent <Animator> ();
		//rb = GetComponent<Rigidbody>();
		//enemyAroundMovement = GetComponent <EnemyAroundMovement> ();
	}


//	void OnTriggerEnter (Collider other)
//	{
//		if(other.gameObject == player)
//		{
//			playerInRange = true;
//		}
//	}
//
//
//	void OnTriggerExit (Collider other)
//	{
//		if(other.gameObject == player)
//		{
//			playerInRange = false;
//		}
//	}

	void IsPlayerInArea(){
		if (Vector3.Distance (transform.position, player.transform.position) <= 15.0f) {
			playerInRange = true;
		} else {
			playerInRange=false;
		}
			
	}

	void Update ()
	{
		//timer += Time.deltaTime;

		IsPlayerInArea ();
		if( playerInRange && enemyHealth.currentHealth > 0)
		{
			//enemyAroundMovement.nav.enabled = false;
			//Turning ();
			//Attack ();
			if (Time.time > nextFire) 
			{
				nextFire = Time.time + fireRate;
				Shot ();
				//Turning ();
			}
		}

		if(playerHealth.currentHealth <= 0)
		{
			//anim.SetTrigger ("PlayerDead");
			GetComponent<AudioSource> ().clip=shotClip;

		}
	}


	void Turning ()
	{
//		Ray camRay = Camera.main.ScreenPointToRay (player.transform.position);
//		RaycastHit floorHit;
//		if(Physics.Raycast (camRay, out floorHit, camRayLength, floorMask))
//		{
//		Vector3 EnemyToPlayer = player.transform.position - transform.position;
//			EnemyToPlayer.y = 0f;
//			Quaternion newRotation = Quaternion.LookRotation (EnemyToPlayer);
//			rb.MoveRotation (newRotation);
		transform.rotation = Quaternion.Slerp(transform.rotation, Quaternion.LookRotation(player.transform.position - transform.position), 90 * Time.deltaTime); 
//		}
	}

	void Attack ()
	{

		if(playerHealth.currentHealth > 0)
		{
			playerHealth.TakeDamage (attackDamage);
		}
	}

	void Shot()
	{
//		if ( Time.time > nextFire) 
//		nextFire = Time.time + fireRate;
		anim.SetTrigger("Shoot_b");
		GetComponent<AudioSource> ().Play ();
		Instantiate (shot, shotSpawn.position, shotSpawn.rotation);

	}
}
