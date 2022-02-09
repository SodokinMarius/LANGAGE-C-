// Avion.cpp
#include <iostream>
#include "Avion.h"
using namespace std;
Avion::Avion(): Vehicule(500, 150, "transport aérien"), en_vol(false)
{
}
Avion::Avion(int vmax, double cap):
Vehicule(vmax, cap, "transport aérien")
{
en_vol=false;
}
Avion::Avion(Avion const& original):
Vehicule(original),
en_vol(original.en_vol)
{
}
bool Avion::est_adapte(string terrain) const
{
if(terrain=="air" || terrain=="ciel")
return true;
return false;
}
void Avion::afficher_description() const
{
cout<<"C'est un avion pouvant transporter "<<capacite<<"personnes pour un usage de "<<usage<<". Sa vitesse de pointe est"<<vitesse_max;
}
// Methodes
bool Avion::decoller()
{
if(en_vol)
{
cout<<"L'avion est déjà en vol"<<endl;
return false;
}
else
{
cout<<"L'avion décolle"<<endl;
en_vol=true;
return true;
}
}
bool Avion::atterir()
{
if(en_vol)
{
cout<<"L'avion atterit"<<endl;
en_vol=false;
return true;
}
else
{
cout<<"L'avion est déjà au sol"<<endl;
return false;
}
}
Avion::~Avion()
{
}
