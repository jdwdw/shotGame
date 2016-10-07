using UnityEngine;
using System.Collections;

public class EnemyAroundMovement : MonoBehaviour
{
	public Transform[] WayPoints;
	Transform player;
	PlayerHealth playerHealth;
	EnemyHealth enemyHealth;
	public NavMeshAgent nav;
	int m_WayPointIndex=0;

	int floorMask;
	float camRayLength = 100f;
	Rigidbody rb;
	bool playerInRange;



	void Awake ()
	{
		floorMask = LayerMask.GetMask("Floor");
		player = GameObject.FindGameObjectWithTag ("PlayerOwn").transform;
		playerHealth = player.GetComponent <PlayerHealth> ();
		enemyHealth = GetComponent <EnemyHealth> ();
		nav = GetComponent <NavMeshAgent> ();
		rb = GetComponent<Rigidbody>();


	}




	void Update ()
	{
		IsPlayerInArea();
		
		if (enemyHealth.currentHealth > 0&&!playerInRange) {
			nav.enabled = true;
			if (WayPoints.Length < 0)
				return;
			Transform target = WayPoints [m_WayPointIndex];
			target.position = WayPoints [m_WayPointIndex].position;
			if (target == null)
				return;
			if (AgentStopping ()) {
				nav.SetDestination (target.position);
			} else {
				//nav.enabled = false;
				m_WayPointIndex = (m_WayPointIndex + 1) % WayPoints.Length;
	
			}
		} 
		else 
		{
			nav.enabled = false;
			Turning ();
		}
		//Turning ();
	}

	void Turning ()
	{
		transform.rotation = Quaternion.Slerp(transform.rotation, Quaternion.LookRotation(player.transform.position - transform.position), 90 * Time.deltaTime); 
	}

	void IsPlayerInArea(){
		if (Vector3.Distance (transform.position, player.transform.position) <= 15.0f) {
			playerInRange = true;
		} else {
			playerInRange=false;
		}

	}

	protected bool AgentStopping()
	{
		return nav.remainingDistance <= nav.stoppingDistance;
	
	}





}

