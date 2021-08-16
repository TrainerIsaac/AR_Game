using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;
public class NestNavigator : MonoBehaviour
{
    public GameObject DataHolder;
    public GameObject currentNest;
    private GameObject nextNest;

    private float currentDistance;
    private float maxDistance;

    private int holders;

    private UnityEngine.UI.Text distanceText;
    private UnityEngine.UI.Text goalText;

    private DataHolder localDataHolder;
    private NestScript localNestScript;

    public string environment;

    void Start()
    {
        gameObject.transform.position = currentNest.transform.position;
        distanceText = GameObject.Find("Distance").GetComponent<Text>();
        goalText = GameObject.Find("DistanceGoal").GetComponent<Text>();

        localNestScript = currentNest.GetComponent<NestScript>();
        localDataHolder = DataHolder.GetComponent<DataHolder>();

        maxDistance = localNestScript.maxDistance;
    }

    // Update is called once per frame
    void Update()
    {
        distanceText.text = currentDistance.ToString();
        goalText.text = maxDistance.ToString();

        if (Input.touchCount > 0 || Input.GetKeyDown(KeyCode.E) == true)
        {
            currentDistance += 1;
        }


        if (currentDistance == maxDistance)
        {
            currentDistance = 0;
            localDataHolder.GetComponent<DataHolder>().map = transform.parent.gameObject;
            localDataHolder.monster = localNestScript.Monster;
            if (holders == 0)
            {
                Instantiate(DataHolder);
                holders = 1;
            }
            SceneManager.LoadScene("FIGHT");
            transform.parent.gameObject.SetActive(false);
        }
    }
}
