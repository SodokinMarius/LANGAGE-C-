
#include <iostream>
#include "Voiture.h"
using namespace std;
Voiture::Voiture(): Vehicule(500, 150, "transport terrestre")/*, en_vol(false)*/
{
}

Voiture::Voiture(std::string couleur, std::string marque,int immatriculation):
    Vehicule(std::string couleur, std::string marque,int immatriculation,"transport terrestre");
    /*{
        //en_vol=false;
    }*/

    Voiture ::Voiture(Voiture const& originale):
        Vehicule(originale),
        en_vol(originale.en_vol)
        {

        }


   bool Voiture::set_couleur(std::string newcouleur)
   {
        couleur=newcouleur;
        return true;
   }

   bool Voiture::set_marque(std::string newmarque)
   {
       marque=newmarque;
       return true;
   }

   bool Voiture::set_immatriculation(int numero)
   {
       immatriculation=numero;
       return true;
   }

   //METODES GETTERS

   std::string Voiture::get_couleur()
   {
       return couleur;
   }

   std::string Voiture::get_immatriculation()
   {
       return immatriculation;
   }

   std::string Voiture::get_marque()
   {

       return marque;
   }
