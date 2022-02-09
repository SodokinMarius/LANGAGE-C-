#include <iostream>
#include <vector>
#include <string>
#include "Ordinateur.h"
#include "Serveur.h"


using namespace std;

int main()
{

Ordinateur Ordinateur1("ORD0001","PC","AA:C1:12:00:DE:4F","192.168.72.1");
Serveur Serveur1("ssh");

    cout << Ordinateur1.getNom()<< endl;
     cout << Serveur1.getNom()<< endl;
     cout <<endl<<endl;

     int age;
     cout <<"Entrer l'age : " <<endl;
     int& autre_age(age);
     cin >> age;

    cout <<"Entrer un autre age  : " <<endl;
    cin >> autre_age;

    cout << age <<endl <<autre_age<<endl;
    return 0;
}
