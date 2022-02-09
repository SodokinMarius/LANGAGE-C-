#include <iostream>
#include <vector>
#include <fstream>
#include <string>

using namespace std;

double Moyenne(double notes[], int taille)
{
     int i;
    double moyenne(0);

    for (i=0;i<taille;i++)
    {
        moyenne+=notes[i];
    }
    moyenne/=taille;
    return moyenne;

}
void DisplayArray( vector<string> const& table)
{
    int i(0);
    for (i=0;i<table.size();i++)
    {
        cout <<"Indice : " << i+1 <<" :"<< table[i]<< endl;
    }
      cout << endl <<endl << endl;
}

/** DISPLAY VECTOR */
void DisplayVector(vector<vector<int>> const& vecteur)
{
int i(0),j(0);

for(i=0; i<vecteur.size();i++)
{
    for(j=0;j<vecteur[i].size();j++)
    {
        cout << "Valeur [" << i+1 <<"," <<j+1 <<"]:  " << vecteur[i][j]<< endl;
    }

    cout << endl <<endl << endl;
}
}

int main()
{

/****=========================*
*        FICHIERS              |
*==============================*/
 //CREATION ET OUVETURE

 string const monFichier("E:/CODING/LANGAGE C++/moyenne.txt");
 ofstream monFlux(monFichier.c_str());



   int effectif,i;
   cout <<" Veuillez entrer l'effectif de la salle : " << endl;
   cin >> effectif;


   double moyennes[effectif];

      for (i=0; i<effectif; i++)
      {
        cout << " Note  "<< i+1 <<" : " << endl;
        cin >> moyennes[i];

             monFlux  << moyennes[i] <<endl; ;
      }

      cout << " Moyenne : " <<Moyenne(moyennes,effectif)<<endl;

 /**
 VECTORS
 */
 vector<std::string> noms(20,"Usage des Vecteurs");
 noms.push_back("20");
 noms.push_back("Maintenat, c'est Yao Marius");

 DisplayArray(noms);
 if(monFlux)
 {
     cout << "Tout s'est bien passe ! " <<endl <<endl;
    monFlux <<endl << "Exercice Pratique sur les fichiers ";

 }
 else{
    cout <<"Une Erreur est survenue lors de la creation !!!!!!!!!!"<<endl <<endl <<endl;

 }

 //SUPRESSION DU DERNIER ELEMENT
 noms.pop_back();
// DisplayArray(noms);
  DisplayArray(noms);


 /**
 TABLEAUX MULTI-DIMENTIONELS
 */

 vector <vector<int>> notes;

 notes.push_back(vector<int>(10,75));
 notes.push_back(vector<int>(10,100));
 notes.push_back(vector<int>(20, 10000));
DisplayVector(notes);

    return 0;
}
