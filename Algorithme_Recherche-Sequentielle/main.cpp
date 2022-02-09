#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;

/**======================== FONCTION DE RECHERCHE SEQUENTIELLE========================*/
bool Recherche_sequentielle(double V_rechercher,vector<double>& tab)
{
    int i=0;
    bool trouve=false;

    while(i<tab.size() && trouve==false)
    {
        if(tab[i]==V_rechercher)
            trouve=true;

        i++;
    }
    return trouve;
}

/**======================== FONCTION TRI D'UN VECTEUR========================*/
vector<double> TrierUnTableau(vector<double> tab)
{
    int i,j;
    double temp;
    for(i=0;i<tab.size();i++)
    {
        for(j=0;j<tab.size()-1;j++)
        {
            if(tab[j]>tab[j+1])
            {
                temp=tab[j];
                tab[j]=tab[j+1];
                tab[j+1]=temp;
            }
        }
    }
    return tab;
}

/**========================MAIN========================*/
int main()
{
    int taille=0,i;

   double val_recherche,element;

   cout << "Veillez entter la taille du vecteur : "  ;
   cin >> taille;
   vector <double> tab;

   /** Recuperation des valeurs du trableau */

   for(i=0;i<taille;i++)
   {
       cout << "Entrer l element d indice "<< i+1 << " : ";
       cin >> element;
       tab.push_back(element);
   }

//TRI DU VECTEUR
tab=TrierUnTableau(tab);

   system("cls");


  //AFFICHAGE DU VECTEUR

    cout <<"CONTENU DU TABLEAU" <<endl;

   for(i=0;i<taille;i++)
   {
       cout <<"\t"  << tab[i]  ;

   }
   cout <<endl << endl;


   // RECUPERATION DE LA VALEUR DE LA VALEUR RECHERCHE

   cout <<"Veuillez entrer la valeur a rechercher : " ;
   cin >> val_recherche;
   cout <<endl;


   /**RECHERCHE DE LA VALEUR EN FAISANT APPEL A LA FONCTION DE RECHERCHE*/
   if(Recherche_sequentielle(val_recherche,tab))
   {
       cout <<val_recherche <<" est trouvee dans le vecteur " <<endl;

   }
   else{
    cout <<val_recherche <<" n est pas trouvee dans le vecteur " <<endl;
   }
    return 0;
}
