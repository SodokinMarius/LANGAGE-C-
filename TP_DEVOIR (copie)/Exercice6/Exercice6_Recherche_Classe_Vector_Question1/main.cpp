#include <iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

/**========= FONCTION REMPLIR VECTEUR=====================*/
vector<double>RemplirVecteur(int taille)
{
    int i;
    double element;
    vector<double>vecteur;

    //RECUPERATION DES ELEMENTS DU VECTEUR
    for(i=0; i<taille; i++)
    {
            cout <<" Element d indice " <<i+1 <<" : "  ;
            cin >> element;
            vecteur.push_back(element);
            cout <<endl;

    }
    return vecteur;
}

/**==============FONCTION AFFICHER MATRICE==========*/
void AfficherVector(vector<double>& Vecteur)
{
    int i;
    for(i=0; i<Vecteur.size(); i++)
    {
            cout <<"\t"<<Vecteur[i];

    }
    cout<<endl;

}
/**=================MAIN======================*/

int main()
{

    vector <double>::iterator iterateur;
    int taille;
    double val_recherche;

    cout <<" Veuillez entrer la taille du vecteur : " ;
    cin>>taille;
    cout <<endl;

       vector <double> tab(taille);

    //REMPLISSAGE DU VECTEUR AVEC LA FONCTION RemplirVecteur()
    tab=RemplirVecteur(taille);

    cout<<endl;

    //TRI ET AFFICHAGE DU VECTEUR
     sort(tab.begin(), tab.end());

        system("cls");

        cout <<"AFFICHAGE DU CONTENU DU VECTEUR :" <<endl;

     AfficherVector(tab);

    cout<<"Quelle valeure voulez rechercher ? " ;
    cin>>val_recherche;


    //RECHERCHE SEQUENTIELLE AVEC LA FONCTION find()
    iterateur = find(tab.begin() , tab.end() , val_recherche);
    if (iterateur == tab.end() )
        cout << val_recherche << " non trouve !" << endl<<endl;
    else
         cout << val_recherche << " est trouve !" << endl<<endl;

    vector<int> v = {2, 1, 20, 17, 5, 6};
    sort(v.begin(), v.end());

    if (binary_search(v.begin(), v.end(), 5)) {
        cout << "Element found" << endl;
    }
    else {
        cout << "Element not found" << endl;
    }

    return 0;
}
