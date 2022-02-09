#include <iostream>
#include <string>
#include "Son.h"
using namespace std;

Son::Son():Father(01,"01/01/1990","ZONON","Vincent",150000.5),
        Id_number(02),Sfirst_name("Remi Jude"),age(10)
        {

        }


Son::Son(int id_number,string newlast_name,string newfirst_name,int Age,double Revenu):
    Father(id_number,"01/01/1990",newlast_name,"Vincent Jude",Revenu),
        Sfirst_name(newfirst_name),age(Age)
        {

        }

Son:: Son(Son const& original):Father(original),Sfirst_name(original.Sfirst_name),age(original.age)
{

}

/**DEFINITION DES GETTERS ET SETTERS**/

string Son::getSFirst_name() const
 {
     return Sfirst_name;
 }

int Son::getSAge() const
{
    return age;
}

     bool Son::setSFirst_name(string  prenom_fils)
     {
         Sfirst_name=prenom_fils;
         return true;
     }

     bool Son::setSAge(int newAge)
     {
         age=newAge;
         return true;
     }



   /** METHODE  se_presenter()*/

string Son:: se_presenter()
{
    string info;
    info = last_name + " " + Sfirst_name;
    return info;
}

Son::~Son()
{

}
