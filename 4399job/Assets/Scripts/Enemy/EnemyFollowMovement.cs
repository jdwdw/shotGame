using UnityEngine;
using System.Collections;

public class EnemyFollowMovement : MonoBehaviour
{
	GameObject player;
	Transform playerBeginPosition;
	PlayerHealth playerHealth;
	EnemyHealth enemyHealth;
	NavMeshAgent nav;

	Animator anim;

	void Awake ()
	{
		player = GameObject.FindGameObjectWithTag ("PlayerOwn");
		playerHealth = player.GetComponent <PlayerHealth> ();
		enemyHealth = GetComponent <EnemyHealth> ();
		nav = GetComponent <NavMeshAgent> ();
		anim=GetComponent<Animator>();
	
	}


	void Update ()
	{
		if(enemyHealth.currentHealth > 0 && playerHealth.currentHealth > 0&&playerHealth.isDead==false)
		{
			//GetComponent <NavMeshAgent> ().enabled = true;
			nav.SetDestination (player.transform.position);
			anim.SetBool ("Static_b", true);
			anim.SetFloat ("Speed_f", 0.6f);
		}
		else
		{
			anim.SetFloat ("Speed_f", 0.3f);
			nav.enabled = false;
			Destroy (gameObject, 1f);
			//GetComponent <NavMeshAgent> ().enabled = false;
		}
	}


}
