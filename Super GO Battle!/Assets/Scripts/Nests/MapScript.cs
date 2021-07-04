using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MapScript : MonoBehaviour
{
    public string[][][] environments = new string[][][] {    
    
    new string[][] { new string[] { "pidgeon", "Gull", "Eagle", "plane", "Hot Air Balloon", "Blimp" }, new string[] { "god", "Jesus" } }, //Sky World
    new string[][] { new string[] { "Rock Man", "Lava Blob", "Fire Bat", "Burning Bug", "Diamond Dude", "Demon" }, new string[] { "Devil", "Satan" } }, //Under Ground
    new string[][] { new string[] { "fly", "spider", "dragonfly", "Leaf Bug", "Tarantula", "Ogre" }, new string[] { "Shrek", "Donkey" } } //Forest
    
    };

    private int[] monsterOdds = new int[] {0,0,0,0,  1,1,1,1,  2,2,2,  3,3,3,  4,4, 5};
    private int selectedMonsterOdd;

    private int[] environmentOdds = new int[] { 0, 0, 0, 1, 1, 1, 2, 2 };
    private int selectedEnvironmentOdd;

    private float nestCount;
    public List<string> monsterList = new List<string>();
    private float difficulty;
    private int roundedNestCount;

    //This will be in charge of generating the nest's theme
    //The theme will contain a pool of monsters that it can select from
    //Nest Generation will also be done here

    private void Start()
    {
        difficulty = Random.Range(1f, 3f);
        nestCount = Random.Range(3, 5) * difficulty;
        roundedNestCount = (Mathf.RoundToInt(nestCount));

        selectedEnvironmentOdd = environmentOdds[Random.Range(0, environmentOdds.Length)];

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

        for (int i = 0; i < roundedNestCount; i++)
        {
            selectedMonsterOdd = monsterOdds[Random.Range(0, monsterOdds.Length)];
            Debug.Log(roundedNestCount);

            monsterList.Add(environments[selectedEnvironmentOdd][0][selectedMonsterOdd]);
        }

        foreach (var x in monsterList)
        {
            Debug.Log(x.ToString());
        }
    }
    private void Update()
    {
    }
}
