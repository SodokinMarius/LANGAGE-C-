#include <iostream>
#include <string>
#include "Father.h"
#include "Son.h"

using namespace std;

int main()
{
    int id, age;
    string  nom, prenom, date;
    float revenu;
    cout << "INFORMATIONS RELATIVE AU PERE" << endl;
    cout << "Entrez l'identifiant,le noms,le prenom,la date de naissance et le revenu du père" << endl;
    cin >> id >> nom >> prenom >> date >> revenu ;
    Father pere(id,date,nom,prenom,revenu);
    /*cout << "INFORMATIONS RELATIVE AU FILS1" << endl;
    cout << "Entrez l'identifiant,le noms,le prenom ,l'age et le revenu du fils1" << endl;
    cin >> id >> nom >> prenom >> age >> revenu ;*/

    //Son fils1(id,nom,prenom,age,revenu);
    Son fils1;
    cout << "INFORMATIONS RELATIVE AU FILS2" << endl;
    cout << "Entrez l'identifiant,le noms,le prenom ,l'age et le revenu du fils2" << endl;
    cin >> id >> nom >> prenom >> age >> revenu ;
    Son fils2(id,nom,prenom,age,revenu);

    if (fils1.getSAge() < fils2.getSAge())
    {
        cout << "L'enfant le plus age est :" << " " << fils2.se_presenter() << endl;
    }
    else
    {
        cout << "L'enfant le plus age est : " << " " <<fils1.se_presenter() << endl;
    }
    return 0;
}

