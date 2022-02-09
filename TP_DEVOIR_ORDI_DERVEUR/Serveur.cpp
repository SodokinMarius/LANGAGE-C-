#include <iostream>
#include <vector>
#include "Serveur.h"
using namespace std;

/**DEFINITION DES CONSTRUCTRURS**/
Serveur::Serveur(): Ordinateur("","MAINTRAME","A0:A2:F1:D0:B2:EA","192.168.1.0"),
                    nomApp("Web")
                    {

                    }

Serveur::Serveur(string newNomApp): Ordinateur("","MAINTRAME","A0:A2:F1:D0:B2:EA","192.168.1.0"),nomApp(newNomApp)
{

}

Serveur::Serveur(Serveur const& original):Ordinateur(original),nomApp(original.nomApp)
{

}
/**DEFINITION DES GETTERS ET SETTERS**/

string Serveur::getNomApp() const
{
    return nomApp;
}

bool Serveur::setNomApp(string newNomApp)
{
    nomApp=newNomApp;
    return true;
}


/**DEFINITION DU DESTRUCTEUR**/
Serveur::~Serveur()
{

}


