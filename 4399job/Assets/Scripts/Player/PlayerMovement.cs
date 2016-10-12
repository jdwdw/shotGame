using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;
using System.Collections;

namespace UnityProject
{
	public class PlayerMovement : MonoBehaviour
	{
		public float speed = 6f;

		Vector3 movement;
		Animator anim;
		Rigidbody rb;
		int floorMask;
		float camRayLength = 100f;
		GameObject player;
	

		private Vector3 direction;
		private Quaternion quaternion;
		private Vector3 quaternionDirection;
		private Coroutine cououtine;

		void Awake()
		{
			floorMask = LayerMask.GetMask("Floor");
			player = GameObject.FindWithTag ("Player");
			anim = player.GetComponent<Animator>();
			rb = GetComponent<Rigidbody>();

		}

		void FixedUpdate ()
		{
			//float h = Input.GetAxisRaw ("Horizontal");
			//float v = Input.GetAxisRaw ("Vertical");
			float h=this.direction.x;
			float v =this.direction.y;

			Move(h, v);
			Turning ();
			Animating(h, v);
		}

		void Move (float h, float v)
		{
			movement.Set (h, 0f, v);
			movement = movement.normalized * speed * Time.deltaTime;
			rb.MovePosition (transform.position + movement);
		}

		void Turning ()
		{
//用触屏位置控制主角角度
			if (Input.touchCount > 0)
			{
				if (EventSystem.current.currentSelectedGameObject != null)
				{
//					Debug.Log (EventSystem.current.currentSelectedGameObject.tag);
//					if (EventSystem.current.currentSelectedGameObject.tag == "JoyStick")
//					{
//					
//
//						Ray camRay = Camera.main.ScreenPointToRay (Input.GetTouch (0).position);
//
//					}
//					else
//					{
//					Ray camRay = Camera.main.ScreenPointToRay (Input.mousePosition);
//					RaycastHit floorHit;
//					if (Physics.Raycast (camRay, out floorHit, camRayLength, floorMask))
//					{
//						Vector3 playerToMouse = floorHit.point - transform.position;
//						playerToMouse.y = 0f;
//						Quaternion newRotation = Quaternion.LookRotation (playerToMouse);
//						rb.MoveRotation (newRotation);
//					}
//					}
				}
				else
				{

					StartCoroutine(Wait(0.02f));
				}
			}
//用控制主角角度
			if (this.quaternionDirection.magnitude>0.001f )
			{
				Quaternion quaternion=Quaternion.LookRotation(new Vector3(quaternionDirection.x,0,quaternionDirection.y));
				Quaternion theQuaternion=Quaternion.Lerp(rb.rotation,quaternion,15*Time.deltaTime);
				rb.MoveRotation (theQuaternion);
			}
			//Quaternion quaternion=Quaternion.LookRotation(new Vector3(quaternionDirection.x,0,quaternionDirection.y));


			//rb.MoveRotation (this.quaternion);
			//this.quaternion=Quaternion.LookRotation(new Vector3(quaternionDirection.x,0,quaternionDirection.y));

			//Quaternion theQuaternion=Quaternion.Slerp(rb.rotation,this.quaternion,100);
			//rb.rotation=theQuaternion;

		}

		IEnumerator Wait(float waitTime)
		{
			yield return new WaitForSeconds (waitTime);

			if (EventSystem.current.currentSelectedGameObject == null)
			{
				Ray camRay = Camera.main.ScreenPointToRay (Input.GetTouch (0).position);
				RaycastHit floorHit;
				if (Physics.Raycast (camRay, out floorHit, camRayLength, floorMask))
				{
					Vector3 playerToMouse = floorHit.point - transform.position;
					playerToMouse.y = 0f;
					Quaternion newRotation = Quaternion.LookRotation (playerToMouse);
					rb.MoveRotation (newRotation);
				}
			}
		}
		void Animating (float h, float v)
		{
			bool walking = h != 0f || v != 0f;
			//anim.SetBool ("IsWalking", walking);

			if (walking) {
				anim.SetBool ("Static_b", true);
				anim.SetFloat ("Speed_f", 0.6f);
			} else {
				//anim.SetBool ("Static_b", true);
				anim.SetFloat ("Speed_f", 0.3f);
			}
		}
		public void BeginMove(){

			//this.cououtine = StartCoroutine();
			resetDirection();
	
		}

		public void EndMove(){

			//StopCoroutine(this.cououtine);
			resetDirection();
		}

		public void UpdateDirection(Vector3 direction){

			this.direction = direction;


		}
		private void resetDirection(){

			this.direction = Vector3.zero;
		}


		public void BeginTurning(){

		}

		public void EndTurning(){


		}

		public void UpdateTurning(Vector3 direction){
			direction=direction.normalized;
//			if (this.quaternion == null)
//			{
//				this.quaternion=Quaternion.LookRotation(new Vector3(0,0,1));
//			}
			//print (direction);
			this.quaternionDirection = direction;
//			if (this.quaternion == Quaternion.LookRotation (this.quaternionDirection))
//			{
//				this.quaternion = Quaternion.LookRotation (this.quaternionDirection);
//			}
//			else
//			{		
//				if (this.quaternion != Quaternion.LookRotation(new Vector3(0,0,0)))
//				{
//					this.quaternion += this.quaternion / 100;
//				}
//				else
//				{
//					this.quaternion = Quaternion.LookRotation (new Vector3 (0, 0, 0));
//				}
//			}
		}
	}

}
