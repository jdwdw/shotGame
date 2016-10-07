using UnityEngine;
using System.Collections;

public class EnemyStandTurn : MonoBehaviour {

	Transform player;
	// Use this for initialization
	void Start () {
		player = GameObject.FindGameObjectWithTag ("PlayerOwn").transform;
	
	}
	
	// Update is called once per frame
	void Update () {
		Turning ();
	
	}


	void Turning ()
	{
		transform.rotation = Quaternion.Slerp(transform.rotation, Quaternion.LookRotation(player.transform.position - transform.position), 90 * Time.deltaTime); 
	}
}
