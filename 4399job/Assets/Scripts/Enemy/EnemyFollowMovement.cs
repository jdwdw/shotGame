using UnityEngine;
using System.Collections;

public class EnemyFollowMovement : MonoBehaviour
{
	Transform player;
	PlayerHealth playerHealth;
	EnemyHealth enemyHealth;
	NavMeshAgent nav;

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
		if(enemyHealth.currentHealth > 0 && playerHealth.currentHealth > 0)
		{
			nav.SetDestination (player.position);
			anim.SetBool ("Static_b", true);
			anim.SetFloat ("Speed_f", 0.6f);
		}
		else
		{
			anim.SetFloat ("Speed_f", 0.3f);
			nav.enabled = false;
		}
	}
}
