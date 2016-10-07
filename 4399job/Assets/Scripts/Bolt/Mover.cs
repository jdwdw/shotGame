using UnityEngine;
using System.Collections;

public class Mover : MonoBehaviour
{
	public float speed = 20.0f;
	public float destroyTime = 1f;

	void Start ()
	{

		GetComponent<Rigidbody>().velocity = transform.forward * speed;

		Destroy (gameObject, 1f);
	}
}
