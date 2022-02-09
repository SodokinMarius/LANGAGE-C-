#include <iostream>
#include <vector>

using namespace std;

/**===============FONCTION PRODUIT DE MATRICE===========*/
vector<vector<double>> ProduitMatrice(vector<vector<double>> mat1, vector<vector<double>> mat2)
{
    int i,j,t;
    double  somme;
    vector<vector<double>> Produit;
    vector<double> Produit_ligne;

    for(i=0; i<mat1.size(); i++)
    {

        Produit_ligne.clear();
        for(j=0; j<mat2[0].size(); j++)
        {
            somme=0;
            for(t=0; t<mat1[0].size(); t++)
            {
                somme+=mat1[i][t]*mat2[t][j];

            }
            Produit_ligne.push_back(somme);

        }
        Produit.push_back(Produit_ligne);
    }
    return Produit;
}

/**========= FONCTION REMPLIR MATICE=====================*/
vector<vector<double>> RemplirMatrice(int ligne,int colonne)
{
    int i,j;
    double element;
    vector<double>ligneMatrice;
    vector<vector<double>> MatriceRemplie;

    //RECUPERATION DES ELEMENTS DE LA MATRICE
    for(i=0; i<ligne; i++)
    {
        ligneMatrice.clear();
        for(j=0; j<colonne; j++)
        {
            cout <<" Element d indice [" <<i+1 <<","<<j+1<<"]: "  ;
            cin >> element;
            ligneMatrice.push_back(element);
            cout <<endl;
        }
        MatriceRemplie.push_back(ligneMatrice);
        cout <<endl ;
    }
    return MatriceRemplie;
}

/**==============FONCTION AFFICHER MATRICE==========*/
void AfficherMatrice(vector<vector<double>>& Matrice)
{
    int i,j;
    for(i=0; i<Matrice.size(); i++)
    {
        for(j=0; j<Matrice[0].size(); j++)
        {
            cout <<"\t"<<Matrice[i][j];
        }
        cout<<endl;
    }
}


/**================MAIN===========================*/
int main()
{
    int ligne1, ligne2,col1,col2,i,j;
    double element;
    vector<double> ligneMatrice;
    vector <vector<double>> Matrice1,Matrice2,Produit;

    cout << "Saisir des Dimensions (Ligne et Colonne) de la Matrice 1 : ";

    cin>> ligne1 >>col1;
     cout <<endl;


    Matrice1=RemplirMatrice(ligne1,col1);

    cout <<endl<<endl;
    cout << "Saisir des Dimensions (Ligne et Colonne) de la Matrice 2 : " ;

    cin>> ligne2 >>col2;
    cout <<endl;

    Matrice2=RemplirMatrice(ligne2,col2);

   system("cls");

    cout<< endl<<"====== Matrice 1 ====== " <<endl;
        AfficherMatrice(Matrice1);
        cout <<endl;

        cout <<"====== Matrice 2 ====== " <<endl;
        AfficherMatrice(Matrice2);
        cout <<endl;

         /** AFFICHAGE DU PRODUIT*/
        cout <<"====== PRODUIT ======" <<endl;

    if(Matrice1[0].size()==Matrice2.size())
    {
        Produit=ProduitMatrice(Matrice1,Matrice2);

        AfficherMatrice(Produit);
    }
    else
    {
        cout <<" Le Produit est impossible : Dimensions non correspondante"<<endl;
    }



    return 0;
}
