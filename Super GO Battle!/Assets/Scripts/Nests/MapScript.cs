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

    private List<int> monsterOdds = new List<int>() { 0, 0, 0, 1, 1, 1, 2, 2, 3, 3, 4, 4, 5 }; //Generates odds for selecting a monster from an environment - 
    //as each monster list goes up in rarity, the odds of selecting a higher number is low, making rarer monsters less likely to appear.

    private int selectedMonsterOdd; //The selected number from the above array

    private int[] environmentOdds = new int[] { 0, 0, 0, 1, 1, 1, 2, 2 }; //The same as the monster odds, but for environments. 
    private int selectedEnvironmentOdd;

    private float nestCount; //The number of nests for a map - is a float as the number is randomly generated then rounded up
    public List<string> monsterList = new List<string>();
    private List<int> usedMonsterOdds = new List<int>();
    private float difficulty; //Each map has a difficulty that will be displayed on the front of each map.
    private int roundedNestCount; //The rounded up nest value, and the final number of nests to be created in a map.

    private float notRoundedDistance; //The number of KM between each map - to be stored in a nest. Also randomly generated and needs to be rounded up
    public List<int> distances = new List<int>(); //Said rounded up KM number.
    private Vector3 oldDistance;

    private int counter;
    private List<GameObject> nestList = new List<GameObject>();
    private List<GameObject> hasBranch = new List<GameObject>();
    private GameObject randomNest;

    private int branchCounter;
    private int branchTotal;

    private Collider2D localCollider;
    private List<Vector3> placedNests = new List<Vector3>();

    private int testicle;
    private Vector3 test;

    //This will be in charge of generating the nest's theme
    //The theme will contain a pool of monsters that it can select from
    //Nest Generation will also be done here

    private void Start()
    {
        selectedEnvironmentOdd = environmentOdds[Random.Range(0, environmentOdds.Length)]; //Generates the environment for the map

        difficulty = Random.Range(1f, 3f);
        nestCount = Random.Range(4, 5) * difficulty;
        roundedNestCount = (Mathf.RoundToInt(nestCount));
        branchTotal = Random.Range(4, 10);

        for (int i = 0; i < roundedNestCount; i++) //For every nest, generate:
        {

            if (monsterOdds.Count != 0)
            {
                selectedMonsterOdd = monsterOdds[Random.Range(0, monsterOdds.Count)]; //its own monster, taken from the array of monsters for the selected environment
                monsterOdds.Remove(selectedMonsterOdd);
                usedMonsterOdds.Add(selectedMonsterOdd);
            }

            else
            {
                selectedMonsterOdd = usedMonsterOdds[Random.Range(0, usedMonsterOdds.Count)]; //If the used monsters list is empty, re-use previous ones
            }

            notRoundedDistance = (Random.Range(1.0f, 2.0f) * (selectedMonsterOdd + 1) / (Random.Range(2.0f, 3.0f)) * difficulty); //a distance to the next nest
            LocalNest = Nest;

            LocalNest.GetComponent<NestScript>().Monster = environments[selectedEnvironmentOdd][0][selectedMonsterOdd];
            LocalNest.GetComponent<NestScript>().maxDistance = Mathf.RoundToInt(notRoundedDistance);
            LocalNest.GetComponent<NestScript>().oldPos = oldDistance;

            if (counter == 0)
            {
                LocalNest.name = "Nest " + counter.ToString();
                Instantiate(LocalNest, oldDistance = new Vector3(0, -105, 0), Quaternion.identity, this.gameObject.transform);
                placedNests.Add(oldDistance);
                GetUnnocupiedSpace();
                //AA
                counter += 1;
            }

            else
            {
                LocalNest.name = "Nest " + counter.ToString();
                nestList.Add(Instantiate(LocalNest, oldDistance = new Vector3(Random.Range(-50, 50), oldDistance.y + (Mathf.RoundToInt(notRoundedDistance) * 100) / (nestCount * 6) + 20, 0), Quaternion.identity, this.gameObject.transform));
                placedNests.Add(oldDistance);
                GetUnnocupiedSpace();
                //AA
                counter += 1;
            }
        }
        //foreach (var x in nestList)
        //{
        //    Debug.Log(x.ToString());
        //}

        for (int k = 0; k < branchTotal; k++)
        {
            GetUnusedNest();
            oldDistance = randomNest.transform.position;
            for (int i = 0; i < (nestList.Count - (nestList.IndexOf(randomNest))); i++)
            {
                if (monsterOdds.Count != 0)
                {
                    selectedMonsterOdd = monsterOdds[Random.Range(0, monsterOdds.Count)]; //its own monster, taken from the array of monsters for the selected environment
                    monsterOdds.Remove(selectedMonsterOdd);
                    usedMonsterOdds.Add(selectedMonsterOdd);
                }

                else
                {
                    selectedMonsterOdd = usedMonsterOdds[Random.Range(0, usedMonsterOdds.Count)]; //If the used monsters list is empty, re-use previous ones
                }

                notRoundedDistance = (Random.Range(1.0f, 2.0f) * (selectedMonsterOdd + 1) / (Random.Range(2.0f, 3.0f)) * difficulty); //a distance to the next nest

                LocalNest = Nest;


                LocalNest.GetComponent<NestScript>().Monster = environments[selectedEnvironmentOdd][0][selectedMonsterOdd];
                LocalNest.GetComponent<NestScript>().maxDistance = Mathf.RoundToInt(notRoundedDistance);
                LocalNest.GetComponent<NestScript>().oldPos = oldDistance;
                LocalNest.name = randomNest.name + " branch " + branchCounter;
                LocalNest.name = LocalNest.name.Replace("(Clone)", "").Trim();

                Instantiate(LocalNest, oldDistance = new Vector3(Random.Range(-50, 50), oldDistance.y + (Mathf.RoundToInt(notRoundedDistance) * 100) / (nestCount * 6) + 20, 0), Quaternion.identity, randomNest.transform);
                placedNests.Add(oldDistance);
                GetUnnocupiedSpace();
                //AA

                counter += 1;
                branchCounter += 1;
            }
            hasBranch.Add(randomNest);
            branchCounter = 0;
        }

    }

    void GetUnusedNest()
    {
        if (hasBranch.Count + 1 == roundedNestCount)
        {
            hasBranch.Clear();
        }

        randomNest = nestList[Random.Range(0, nestList.Count)];
        if (hasBranch.Contains(randomNest))
        {
            GetUnusedNest();
        }
    }

    void GetUnnocupiedSpace()
    {
        //gameObject.GetComponent<CompositeCollider2D>().bounds;
        test = new Vector3(Random.Range(-50, 50), oldDistance.y + (Mathf.RoundToInt(notRoundedDistance) * 100) / (nestCount * 6) + 20, 0);
        var checkResult = Physics.OverlapSphere(test, 5);
        if (checkResult.Length == 0)
        {
            // all clear!
            nestList.Add(Instantiate(LocalNest, oldDistance = new Vector3(Random.Range(-50, 50), oldDistance.y + (Mathf.RoundToInt(notRoundedDistance) * 100) / (nestCount * 6) + 20, 0), Quaternion.identity, this.gameObject.transform));
        }
    }
}

//Impliment multiple branches occuring rather than just one every time.
//load item in environments folder of same name
//POSSIBLY Try and weight tougher monsters towards the end of the map?
//Give player the ability to traverse through a map.