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
    cout << "Entrez l'identifiant (entier),le noms,le prenom,la date de naissance et le revenu du pere : " << endl;
    cin >> id >> nom >> prenom >> date >> revenu ;
    cout <<endl;
    Father pere(id,date,nom,prenom,revenu);


   cout << "INFORMATIONS RELATIVE AU FILS1" << endl;
    cout << "Entrez dans l ordre l'identifiant (un entier),le noms,le prenom ,l'age et le revenu du fils 1 : " << endl;
    cin >> id >> nom >> prenom >> age >> revenu ;
     cout << endl;
   Son fils1(id,nom,prenom,age,revenu);


    cout << "INFORMATIONS RELATIVE AU FILS 2 : " << endl;
    cout << "Entrez dans l ordre l'identifiant (un entier),le nom,les prenoms ,l'age et le revenu du fils 2 :" << endl;
    cin >> id >> nom >> prenom >> age >> revenu ;
     cout <<endl;

    Son fils2(id,nom,prenom,age,revenu);

    if (fils1.getSAge() < fils2.getSAge())
    {
        cout << "L'enfant le plus age est :" << " " << fils2.getBirthday() << endl;
    }
    else
    {
        cout << "L'enfant le plus age est : " << " " <<fils1.se_presenter() << endl;
    }
    return 0;
}

