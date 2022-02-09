#ifndef VOITURE_H_INCLUDED
#define VOITURE_H_INCLUDED
#include "Vehicule.h"

class Voiture: public Vehicule{
//Constructeurs

Voiture();
Voiture( std::string couleur, std::string marque,int immatriculation);
Voiture(Voiture const& originale);


//setters
public :
bool set_couleur(std::string newCouleur) const;
bool set_marque(std::string newmarque) const;
bool set_immatriculation(int newimmatriculation) const;

// Getters

std::string get_couleur() ;
std::string get_marque();
std::string get_immatriculation();

//METHODES PARTICULIERES
void seDeplacer(std::string source, std::string destination) ;
void afficher_description();
bool est_adapte();
bool demarrer();
bool atterrir();

//ATTRIBUTS DE LA CLASSE
std::string couleur;
std::string marque;
std::string immatriuculation;

//DESTRUCTEURS
~Voiture();


};


#endif // VOITURE_H_INCLUDED
