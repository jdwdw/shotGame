using UnityEngine;
using System.Collections;

public class EnemyFollowShooterMovement : MonoBehaviour
{
	Transform player;
	PlayerHealth playerHealth;
	EnemyHealth enemyHealth;
	NavMeshAgent nav;

	bool playerInRange;

	Animator anim;

	void Awake ()
	{
		player = GameObject.FindGameObjectWithTag ("PlayerOwn").transform;
		playerHealth = player.GetComponent <PlayerHealth> ();
		enemyHealth = GetComponent <EnemyHealth> ();
		nav = GetComponent <NavMeshAgent> ();
		anim=GetComponent<Animator>();
	}


	void Update ()
	{

		IsPlayerInArea();
		if(enemyHealth.currentHealth > 0 && playerHealth.currentHealth > 0&&!playerInRange)
		{
			nav.enabled = true;
			nav.SetDestination (player.position);
			anim.SetBool ("Static_b", true);
			anim.SetFloat ("Speed_f", 0.6f);
		}
		else
		{
			anim.SetFloat ("Speed_f", 0.3f);
			nav.enabled = false;
			Turning ();
		}
	}



	void IsPlayerInArea(){
		if (Vector3.Distance (transform.position, player.transform.position) <= 15.0f) {
			playerInRange = true;
		} else {
			playerInRange=false;
		}

	}

	void Turning ()
	{
		transform.rotation = Quaternion.Slerp(transform.rotation, Quaternion.LookRotation(player.transform.position - transform.position), 90 * Time.deltaTime); 
	}
}
