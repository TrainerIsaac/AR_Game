using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DataHolder : MonoBehaviour
{
    public string monster;
    public string environment;
    public string[] items;

    private void Start()
    {
        DontDestroyOnLoad(transform.gameObject);
    }
}
