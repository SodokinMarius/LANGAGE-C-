#include <iostream>
#include <vector>

using namespace std;
vector<vector<double>> ProduitMatrice(vector<vector<double>> mat1, vector<vector<double>> mat2)
{
    int i,j,t;
    double  somme;
     vector<vector<double>> Produit;
     vector<double> Produit_ligne;

    for(i=0;i<mat1.size();i++)
    {

         Produit_ligne.clear();
        for(j=0;j<mat2[0].size();j++)
        {
            somme=0;
            for(t=0;t<mat1[0].size();t++)
            {
                somme+=mat1[i][t]*mat2[t][j];

            }
            Produit_ligne.push_back(somme);

        }
        Produit.push_back(Produit_ligne);
    }
    return Produit;
}

vector<vector<double>> RemplirMatrice(int ligne,int colonne)
{
    int i,j;
    double element;
    vector<double>ligneMatrice;
    vector<vector<double>> MatriceRemplie;

    /**RECUPERATION DES ELEMENTS DE LA MATRICE**/
    for(i=0;i<ligne;i++)
  {
      ligneMatrice.clear();
      for(j=0;j<colonne;j++)
      {
          cout <<" Element d indice [" <<i+1 <<","<<j+1<<"]:"  ;
          cin >> element;
          ligneMatrice.push_back(element);
      }
      MatriceRemplie.push_back(ligneMatrice);
  }
  return MatriceRemplie;
}



int main()
{
int ligne1, ligne2,col1,col2,i,j;
double element;
vector<double> ligneMatrice;
vector <vector<double>> Matrice1,Matrice2,Produit;

  cout << "Taille de la Matrice 1 : "<<endl ;

  cin>> ligne1 >>col1;

   Matrice1=RemplirMatrice(ligne1,col1);

 cout <<endl<<endl;
  cout << "Taille de la Matrice 2 : "<<endl ;

  cin>> ligne2 >>col2;

  Matrice2=RemplirMatrice(ligne2,col2);

Produit=ProduitMatrice(Matrice1,Matrice2);

/** AFFICHAGE DU PRODUIT*/
for(i=0;i<Produit.size();i++)
{
    for(j=0;j<Produit[0].size();j++)
    {
        cout <<"\t"<<Produit[i][j];
    }
    cout<<endl;
}


    return 0;
}
