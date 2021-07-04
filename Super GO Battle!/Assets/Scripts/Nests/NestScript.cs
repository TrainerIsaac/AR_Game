using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class NestScript : MonoBehaviour
{
    public GameObject Monster;
    // public envionment!! 
    public int maxDistance;
    public int currentDistance;

    void Start()
    {
        maxDistance = Random.Range(1, 5);   //Multiply by difficulty modifier - perhaps have script assigned to each map that sets things like difficulty and potential species?
        //uses distance generated from MapScript. 
        //Keeps track of current KM Walked. Can have max - current taken away from banked distance.
    }

    // Update is called once per frame
    void Update()
    {
        if(currentDistance == maxDistance)
        {
            //find object with activate scene script (which will be a button on the canvas), pass through the monster + stage info and set it to active/interactable
        }
    }
}
