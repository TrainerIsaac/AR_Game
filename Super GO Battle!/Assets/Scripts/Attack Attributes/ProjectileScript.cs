using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ProjectileScript : MonoBehaviour
{
    public int attackPower;
    public int attackSpeed;
    private float distanceDivider;
    public float totalDamage;
    public GameObject Origin;

    public GameObject redConfetti;
    public GameObject blueConfetti;

    void Start()
    {
        
        StartCoroutine(DestroyCount());
        distanceDivider = (Vector3.Distance(gameObject.transform.position, GameObject.FindGameObjectWithTag("Opponent").transform.position));
        DamageCalc();
        
    }
    void Update()
    {
        transform.Translate(Vector3.forward * Time.deltaTime * attackSpeed);
    }

    private IEnumerator DestroyCount()
    {
        yield return new WaitForSeconds(5);
        Destroy(gameObject);
    }


    public void DamageCalc()
    {
        if (Origin.gameObject.tag == ("Opponent"))
        {
            totalDamage = (attackPower * Origin.GetComponent<Enemy>().attackStat / GameObject.FindGameObjectWithTag("MainCamera").GetComponent<PlayerScript>().defenceStat);
        }

        if (Origin.gameObject.tag == ("MainCamera"))
        {
            totalDamage = ((attackPower * Origin.GetComponent<PlayerScript>().attackStat / GameObject.FindGameObjectWithTag("Opponent").GetComponent<Enemy>().defenceStat) / ((distanceDivider)));
            Debug.Log(totalDamage);
        }

    }

    private void OnTriggerEnter(Collider collision)
    {
        if (Origin.gameObject.tag == ("Opponent"))
        {

            if (collision.gameObject.tag == ("MainCamera"))
            {
                Instantiate(redConfetti, this.transform);
                Destroy(gameObject);
            }
        }
        if (Origin.gameObject.tag == ("MainCamera"))
        {
            if (collision.gameObject.tag == ("Opponent"))
            {
                Instantiate(blueConfetti, this.transform);
                Destroy(gameObject);
            }
        }
    }
}