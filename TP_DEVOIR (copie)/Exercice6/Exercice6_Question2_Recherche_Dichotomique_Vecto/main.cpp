#include <iostream>
#include <vector>
#include <algorithm>
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

/**==============FONCTION AFFICHER VECTEUR==========*/
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


   //RECHERCHE DICHOTOMIQUE AVEC LA FONCTION binary_search()
    if (binary_search(tab.begin() , tab.end() , val_recherche)) {
        cout << val_recherche<< " est trouve dans le vecteur !" << endl;
    }
    else {
        cout <<" Desole ! "<< val_recherche<< " non trouve dans le vecteur !" << endl;
    }

    return 0;
}
