using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class NestNavigator : MonoBehaviour
{
    public GameObject currentNest;
    private GameObject nextNest;

    void Start()
    {
        Debug.Log(currentNest.transform.position);
        gameObject.transform.position = currentNest.transform.position;
    }

    // Update is called once per frame
    void Update()
    {
    }
}
