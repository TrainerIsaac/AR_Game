using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class NestScript : MonoBehaviour
{
    public string Monster;

    public int maxDistance;
    public int currentDistance;
    public Vector3 oldPos;

    void Start()
    {
        maxDistance = Random.Range(1, 5);   //Multiply by difficulty modifier - perhaps have script assigned to each map that sets things like difficulty and potential species?
        if(oldPos != new Vector3 (0,0,0))
        {
            gameObject.GetComponent<LineRenderer>().enabled = true;
        }
        gameObject.GetComponent<LineRenderer>().SetPosition(0, oldPos);
        gameObject.GetComponent<LineRenderer>().SetPosition(1, this.gameObject.transform.position);
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

    //void OnCollisionEnter2D(Collision2D c)
    //{
    //    print("AA");
    //    // force is how forcefully we will push the player away from the enemy.
    //    float force = 3;

    //    // Calculate Angle Between the collision point and the player
    //    Vector2 dir = c.contacts[0].point - new Vector2(transform.position.x, transform.position.y);
    //    // We then get the opposite (-Vector3) and normalize it
    //    dir = -dir.normalized;
    //    // And finally we add force in the direction of dir and multiply it by force. 
    //    // This will push back the player
    //    GetComponent<Rigidbody2D>().AddForce(dir * force);

    //}
}
