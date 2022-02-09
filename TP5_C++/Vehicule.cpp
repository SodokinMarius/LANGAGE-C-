// Vehicule.cpp

#include <iostream>
#include "Vehicule.h"
using namespace std;
// Constructeurs
Vehicule::Vehicule():
vitesse_max(10),
capacite(1),
usage("personnel")
{
}
Vehicule::Vehicule(int vmax, double cap, string use)
{
if(vmax<0)
vitesse_max=(-vmax);
else
vitesse_max=vmax;
if(cap<1)
capacite=1;
else
capacite=cap;
usage=use;
}
Vehicule::Vehicule(Vehicule const& original):
vitesse_max(original.vitesse_max),
capacite(original.capacite),
usage(original.usage)
{
}
bool Vehicule::est_adapte(string terrain) const
{
return false;
}
void Vehicule::afficher_description() const
{
cout<<"C'est un véhicule quelconque d'une capacité de "<<capacite<<" pour un usage "<<usage<<" . Sa vitesse de pointe est "<<vitesse_max;
cout << "\n";
}
// Accesseurs
int Vehicule::get_vitesse_max() const
{
return vitesse_max;
}
double Vehicule::get_capacite() const
{
return capacite;
}
string Vehicule::get_usage() const
{
return usage;
}
// Mutateurs
bool Vehicule::set_vitesse_max(int vmax)
{
if(vmax<0)
vitesse_max=(-vmax);
else
vitesse_max=vmax;
return true;
}
bool Vehicule::set_capacite(double cap, double capacite)
{
if(cap<1)
    capacite=1;
else
    capacite=cap;
return true;
}
bool Vehicule::set_usage(string use)
{
usage=use;
return true;
}
Vehicule::~Vehicule()
{
}

