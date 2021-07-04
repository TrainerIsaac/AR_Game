using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MapScript : MonoBehaviour
{
    public string[][] skyWorld = new string[][] { new string[] { "Gull", "Eagle", "plane", "Blimp" }, new string[] {"god", "Jesus" } };
    public string[] underGround; //Update these two to reflect skyworld code
    public string[] Volcano;
    //This will be in charge of generating the nest's theme
    //The theme will contain a pool of monsters that it can select from
    //Nest Generation will also be done here

    private void Start()
    {

        //Randomly create list of encounters from the required string
        //Encounters should be ordered from most to least common
        //List should be more likely to pick from the beginning. For instance has a 1 in 3 chance to select gull, if not has a 1 in 3 chance to select eagle, etc.
        //Play around with values until it feels right. 

        //Before this, list the environments and randomly select them in a similar way - some maps should be rare but others shouldn't be common.

        //get randomly generated environment
        //load item in environments folder of same name

        //Generate map length & difficulty
        //create list of randomly generated monsters, with amount of encounters based on map length, and monsters based on difficulty
        //Randomly generate nest count based on map length - must be equal to amount of monsters
        //Also generate a random number of KM between each nest, and make the distance between each one reflected by the actual distance on the map
        //Assign each distance to their respective nest.


        // generate nests and their locations on the map - assign each one a monster with a generated level based on difficulty
        //POSSIBLY Try and weight tougher monsters towards the end of the map?
        //MUST have something in place to prevent duplicate monsters being generated

    }
}
