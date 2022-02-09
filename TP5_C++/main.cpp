#include <iostream>
#include "Vehicule.h"
#include "Avion.h"

using namespace std;

int main()
{
    Vehicule rav4(200,500,"sorties Personnel");

    rav4.afficher_description();
   cout << rav4.get_capacite() << endl;
   rav4.set_capacite(5000,1000);
   cout << rav4.set_vitesse_max(10000) << endl;
    return 0;
}

