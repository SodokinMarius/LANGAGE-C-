#include <iostream>
#include <vector>
#include "suite_arithmetique.h"

using namespace std;

int main()
{
    SuiteArithmetique suite1;
    // affichage de la somme des 100 premier terme de la suite1
    cout << "La somme des 100 premier terme de la suite1 est  "<<suite1.sommeT(100) << endl;

    //comparaison de la somme des 100 premier terme des suite
    float premier_T , raison_suite;
    cout << " \n***************CREATION DE L4OBJET SUITE2*********************\n\n";
    cout <<" Enter le premier terme et la raison de la suite2\n" ;
    cin >> premier_T >> raison_suite;
    SuiteArithmetique suite2(premier_T ,raison_suite);
    if(suite1.sommeT(100) > suite2.sommeT(100))
    {
        cout << " \nLa suite dont la somme des 100 premier est superieur a pour 100ieme terme : "<<suite1.niemeT(100) << endl;
    }
    else
    {
        cout << " \nLa suite dont la somme des 100 premier est superieur a pour 100ieme terme : "<< suite2.niemeT(100) << endl;
    }

    //Remplissage des objet de la classe suite
    int i=0,nbre;
    cout << "\nEntez le nombre d'element de votre liste\n";
    cin >> nbre;
    vector <SuiteArithmetique> tab(nbre);
    while(i < nbre)
    {
        cout << "entrer le premier terme et la raison de la suite" << i+1 << endl;
        cin >> premier_T >> raison_suite;
        tab[i].set_premierT(premier_T);
        tab[i].set_raison(raison_suite);
        i++ ;
    }

    //Affichage des suite dont la somme des 100 premier terme sont superieur a 2000
    i = 0;
    while(i < nbre)
    {
        if(tab[i].sommeT(100) > 2000)
            cout << "la somme des 100 premiers termes de la suite" << i+1 <<" qui a pour premier terme " << tab[i].get_premiert() << " et pour raison " << tab[i].get_raison() << " est superieur à 2000" << endl ;
        i++ ;
    }
    return 0;
}
