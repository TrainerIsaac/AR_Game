using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SocialPlatforms;

public class MapScript : MonoBehaviour
{
    public GameObject Nest;
    private GameObject LocalNest;

    public string[][][] environments = new string[][][] {    
    
    new string[][] { new string[] { "pidgeon", "Gull", "Eagle", "plane", "Hot Air Balloon", "Blimp" }, new string[] { "god", "Jesus" } }, //Sky World
    new string[][] { new string[] { "Rock Man", "Lava Blob", "Fire Bat", "Burning Bug", "Diamond Dude", "Demon" }, new string[] { "Devil", "Satan" } }, //Under Ground
    new string[][] { new string[] { "fly", "spider", "dragonfly", "Leaf Bug", "Tarantula", "Ogre" }, new string[] { "Shrek", "Donkey" } } //Forest
    
    }; //An array of different envionments. Each environment contains both an array of standard encounters, and an array of bosses.

    //Encounters are to be replaced with actual monsters and environments - to be planned later.

    private int[] monsterOdds = new int[] {0,0,0,0,  1,1,1,1,  2,2,2,  3,3,3,  4,4, 5}; //Generates odds for selecting a monster from an environment - 
    //as each monster list goes up in rarity, the odds of selecting a higher number is low, making rarer monsters less likely to appear.
    private int selectedMonsterOdd; //The selected number from the above array

    private int[] environmentOdds = new int[] { 0, 0, 0, 1, 1, 1, 2, 2 }; //The same as the monster odds, but for environments. 
    private int selectedEnvironmentOdd;

    private float nestCount; //The number of nests for a map - is a float as the number is randomly generated then rounded up
    public List<string> monsterList = new List<string>();
    private float difficulty; //Each map has a difficulty that will be displayed on the front of each map.
    private int roundedNestCount; //The rounded up nest value, and the final number of nests to be created in a map.

    private float notRoundedDistance; //The number of KM between each map - to be stored in a nest. Also randomly generated and needs to be rounded up
    public List<int> distances = new List<int>(); //Said rounded up KM number.
    private Vector3 oldDistance;
    bool spawnedOne = false;

    private int counter;

    //This will be in charge of generating the nest's theme
    //The theme will contain a pool of monsters that it can select from
    //Nest Generation will also be done here

    private void Start()
    {
        difficulty = Random.Range(1f, 3f);
        nestCount = Random.Range(4, 5) * difficulty;
        roundedNestCount = (Mathf.RoundToInt(nestCount));

        selectedEnvironmentOdd = environmentOdds[Random.Range(0, environmentOdds.Length)]; //Generates the environment for the map

        for (int i = 0; i < roundedNestCount; i++) //For every nest, generate:
        {
            selectedMonsterOdd = monsterOdds[Random.Range(0, monsterOdds.Length)]; //its own monster, taken from the array of monsters for the selected environment

            notRoundedDistance = (Random.Range(1.0f, 3.0f) * (selectedMonsterOdd + 1) / (Random.Range(2.0f, 4.0f)) * difficulty); //a distance to the next nest

            //distances.Add(Mathf.RoundToInt(notRoundedDistance));
            //monsterList.Add(environments[selectedEnvironmentOdd][0][selectedMonsterOdd]);

            LocalNest = Nest;

            LocalNest.GetComponent<NestScript>().Monster = environments[selectedEnvironmentOdd][0][selectedMonsterOdd];
            LocalNest.GetComponent<NestScript>().maxDistance = Mathf.RoundToInt(notRoundedDistance);

            if(spawnedOne == false)
            {
                LocalNest.name = "Nest " + counter.ToString();
                Instantiate(LocalNest, oldDistance = new Vector3 (0, -105, 0), Quaternion.identity, this.gameObject.transform);
                spawnedOne = true;
                counter += 1;
            }

            else
            {
                LocalNest.name = "Nest " + counter.ToString();
                Instantiate(LocalNest, oldDistance = new Vector3(Random.Range(-50,50), oldDistance.y + (Mathf.RoundToInt(notRoundedDistance) * 100) / (nestCount * 6) + 20, 0), Quaternion.identity, this.gameObject.transform);
                Debug.Log(Mathf.RoundToInt(notRoundedDistance) * 10);
                counter += 1;
            }

            //ADD ABILITY TO REMOVE NUMBER FROM ODDS ONCE IT'S SELECTED!
        }

        foreach (var x in monsterList)
        {
            Debug.Log(x.ToString());
        }

        foreach (var x in distances)
        {
            Debug.Log(x.ToString());
        }
    }

    private void Update()
    {
    }
}


//Randomly create list of encounters from the required string - DONE
//Encounters should be ordered from most to least common 
//List should be more likely to pick from the beginning. For instance has a 1 in 3 chance to select gull, if not has a 1 in 3 chance to select eagle, etc. - DONE
//Play around with values until it feels right. 

//DONE - COULD USE SOME REFINEMENT


//Before this, list the environments and randomly select them in a similar way - some maps should be rare but others shouldn't be common. - DONE

//get randomly generated environment - DONE
//load item in environments folder of same name - NEED TO DO - LOW PRIORITY

//Generate map length & difficulty - DONE
//create list of randomly generated monsters, with amount of encounters based on map length, and monsters based on difficulty - DONE
//Randomly generate nest count based on map length - must be equal to amount of monsters - DONE

//Also generate a random number of KM between each nest, and make the distance between each one reflected by the actual distance on the map
//Assign each distance to their respective nest.

// generate nests and their locations on the map - assign each one a monster with a generated level based on difficulty
//POSSIBLY Try and weight tougher monsters towards the end of the map?
//MUST have something in place to prevent duplicate monsters being generated