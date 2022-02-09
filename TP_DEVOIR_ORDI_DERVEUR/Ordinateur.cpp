#include <iostream>
#include <vector>
#include "Ordinateur.h"
using namespace std;

/**DEFINITION DES CONSTRUCTEURS**/

Ordinateur::Ordinateur(): Id(""),nom("DESKTOP"),adMac("A0:A2:F1:D0:B2:EA"),adIp("192.168.1.0")
{

}
 Ordinateur::Ordinateur(string id,string Nom, string admac,string adip):
     Id(id),nom(Nom),adMac(admac),adIp(adip)
     {

     }

     Ordinateur:: Ordinateur(Ordinateur const& original): Id(original.Id),
            nom(original.nom),adMac(original.adMac),adIp(original.adIp)
            {

            }


            /**DEFINITION DES getters et setters**/

    string Ordinateur::getId() const
    {
        return Id;
    }
    string Ordinateur::getNom()const
    {
        return nom;
    }
    string Ordinateur::getMac()const
    {
        return adMac;
    }
    string Ordinateur::getIp() const
    {
        return adIp;
    }


    bool Ordinateur::setId(string newId)
    {
        Id=newId;
        return true;
    }

    bool Ordinateur::setNom(string newNom)
    {
        nom=newNom;
        return true;
    }

    bool Ordinateur::setMac(string newAdmac)
    {
        adMac=newAdmac;
        return true;
    }
    bool Ordinateur::setIp(string newIp)
    {
        adIp=newIp;
        return true;
    }


    /**CONSTRUCTEURS**/

    Ordinateur::~Ordinateur()
    {

    }

