using UnityEngine;
using System.Collections;

public class CubeController : MonoBehaviour {

	[System.Serializable]
	public class AnimatorParameters{
		public string moving;
		public string horizotal;
		public string vertical;
	}

	public Animator target;
	public float speed = 2.5f;
	public AnimatorParameters parameters;

	private Vector3 direction;
	private Coroutine cououtine;

	private IEnumerator Move(){
		
		while(true){
	
			this.target.transform.position += this.direction * Time.deltaTime * this.speed;
	
			this.target.SetFloat(this.parameters.horizotal , this.direction.x);
			this.target.SetFloat(this.parameters.vertical , this.direction.y);
	
			yield return null;
		}
	}

	public void BeginMove(){
		
		this.target.SetBool(this.parameters.moving, true);
		this.cououtine = StartCoroutine(this.Move());
	}

	public void EndMove(){
		
		this.target.SetBool(this.parameters.moving, false);
		StopCoroutine(this.cououtine);
	}

	public void UpdateDirection(Vector3 direction){
		
		this.direction = direction;
		print (direction.x);
		print ("////////");
		print (direction.y);
	}
}