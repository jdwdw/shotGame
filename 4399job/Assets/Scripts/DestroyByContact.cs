using UnityEngine;
using System.Collections;

public class DestroyByContact : MonoBehaviour
{
	public int damagePerShot = 20;
	//public GameObject explosion;
	//public GameObject playerExplosion;
	//public int scoreValue; // how many score will be added when an asteroid's shot


	void Start ()
	{

	}

	void OnTriggerEnter (Collider other)
	{
//		if (other.gameObject.CompareTag ("Boundary"))
//			return;
//		Instantiate (explosion, transform.position, transform.rotation);
		if (other.gameObject.CompareTag ("Enemy"))
		{
			EnemyHealth enemyHealth = other.gameObject.GetComponent <EnemyHealth> ();
			if(enemyHealth != null)
			{
				enemyHealth.TakeDamage (damagePerShot,other.gameObject.transform.position);
			}
		}
		Destroy (gameObject);
			
//		Destroy (other.gameObject);
//		Destroy (gameObject);
	}
}
