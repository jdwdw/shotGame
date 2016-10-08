using UnityEngine;
using System.Collections;

public class HeartAdd : MonoBehaviour {
	GameObject player;
	PlayerHealth playerHealth;
	public int HeartCount;

	// Use this for initialization
	void Start () {
		player = GameObject.FindGameObjectWithTag ("PlayerOwn");
		playerHealth = player.GetComponent <PlayerHealth> ();
	
	}
	
	// Update is called once per frame
	void Update () {
	
	}
	void OnTriggerEnter (Collider other)
	{
		//		if (other.gameObject.CompareTag ("Boundary"))
		//			return;
		//		Instantiate (explosion, transform.position, transform.rotation);
		if (other.gameObject==player)
		{
			PlayerHealth playerHealth = other.gameObject.GetComponent <PlayerHealth> ();
			playerHealth.AddHeart (HeartCount);
			Destroy (gameObject);
		}

	}
}
