using UnityEngine;
using UnityEngine.SceneManagement;
using System.Collections;

public class GameOverManager : MonoBehaviour
{
	public PlayerHealth playerHealth;
	public float restartDelay = 5f;
	public ScoreManager scoreManager;
	public PlayerShot playerShot;


	GameObject[] heartsAdd;
	GameObject[] enemys;

	Animator anim;
	float restartTimer;
	 bool isRestart=false;


	void Awake ()
	{
		anim = GetComponent<Animator> ();
		heartsAdd = GameObject.FindGameObjectsWithTag ("HeartsAdd");
		enemys = GameObject.FindGameObjectsWithTag ("Enemy");
	}


	void Update ()
	{
		if (playerHealth.currentHealth <= 0&&isRestart==false)
		{
			anim.SetTrigger ("GameOver");

//			restartTimer += Time.deltaTime;
//
//			if (restartTimer >= restartDelay)
//			{
//				//Application.LoadLevel(Application.loadedLevel);
//				//SceneManager.LoadScene ("_Demo");
//				RestartAllObject();
//			}
			RestartGame();
			isRestart = true;
		}
	}

	void RestartGame ()
	{
		anim.SetTrigger ("GameOver");
		StartCoroutine(Wait(5f));
	}

	IEnumerator Wait (float waitTime)
	{
		yield return new WaitForSeconds (waitTime);
		RestartAllObject ();
	
	
	}

	void RestartAllObject ()
	{
		playerHealth.PlayerRestart ();
		scoreManager.ResetScore ();
		isRestart = false;
		playerShot.ResetAudioclip ();
		foreach(GameObject heartAdd in heartsAdd){
			heartAdd.SetActive (true);
		}
		foreach(GameObject enemy in enemys){
			enemy.SetActive (true);
			enemy.GetComponent<EnemyHealth> ().currentHealth = enemy.GetComponent<EnemyHealth> ().startingHealth;
		}

	}
}
