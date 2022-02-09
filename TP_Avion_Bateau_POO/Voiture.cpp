
#include <iostream>
#include "Voiture.h"
using namespace std;
Voiture::Voiture(): Vehicule(), std::string couleur(200), std::string marque(100),int immatriculation(200)
{
    couleur=("Jaune "),
     marque("TOYOTA"),
     immatriculation(00004157)
}
   /*, couleur("Rouge"), marque("TOYOTA"), immatriculation(00004157)*/

/**
using namespace std;
Avion::Avion(): Vehicule(500, 150, "transport a�rien"), en_vol(false)
{
}
Avion::Avion(int vmax, double cap):
Vehicule(vmax, cap, "transport a�rien")
{
en_vol=false;
}
Avion::Avion(Avion const& original):
Vehicule(original),
en_vol(original.en_vol)
{
}
*/

Voiture::Voiture():
    Vehicule(std::string couleur, std::string marque,int immatriculation):
    Voiture(std::string couleur, std::string marque,int immatriculation,"transport terrestre")
    {
        //en_vol=false;
    }

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
