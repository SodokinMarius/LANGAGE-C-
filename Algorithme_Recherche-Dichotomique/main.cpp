#include <iostream>
#include<vector>
#include<string>

using namespace std;

/**=============ALGORITHME DE RECHERCHE DICHOTOMIQUE================*/
bool Recherche_dichotomique(double val_recherche, vector<double> & tab)
{
    int debut=0, fin=tab.size();
     int milieu;
     bool trouve=false;
     while(trouve==false && debut<=fin)
     {

         milieu=(debut+fin)/2;

         if(tab[milieu]==val_recherche)
         {
             trouve=true;
         }
         else{
            if(val_recherche>tab[milieu])
            {
                debut=milieu+1;
            }
            else
            {
                fin=milieu-1;
            }
         }
     }

         return trouve;
}

/**======================== FONCTION TRI D'UN VECTEUR========================*/
vector<double> TrierUnVecteur(vector<double> tab)
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

   double val_recherche;

   cout << "Veillez entter la taille du tableau : "  ;
   cin >> taille;
   vector <double> tab(taille);

   /** Recuperation des valeurs du trableau */

   for(i=0;i<taille;i++)
   {
       cout << "Entrer l element d indice "<< i+1 << " : ";
       cin >> tab[i];
   }

tab=TrierUnVecteur(tab);


   system("cls");

   /**
    /**AFFICHAGE DU TABLEAU */

    cout <<"CONTENU DU TABLEAU" <<endl;

   for(i=0;i<taille;i++)
   {
       cout <<"\t"  << tab[i]  ;

   }
   cout <<endl << endl;


   /** RECUPERATION DE LA VALEUR DE LA VALEUR RECHERCHE*/

   cout <<"Veuillez entrer la valeur a rechercher : " ;
   cin >> val_recherche;
   cout <<endl;


   /**RECHERCHE DE LA VALEUR EN FAISANT APPEL A LA FONCTION DE RECHERCHE*/
   if(Recherche_dichotomique(val_recherche,tab))
   {
       cout <<val_recherche <<" est trouvee dans le vecteur " <<endl;

   }
   else{
    cout <<val_recherche <<" n est pas trouvee dans le vecteur " <<endl;
   }
    return 0;
}
