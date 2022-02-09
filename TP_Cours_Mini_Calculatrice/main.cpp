#include <iostream>

using namespace std;

//Fonction dui retourne le MAX
void Normalisation(float nombre1,float  nombre2)
{
    float temp=0;
     if(nombre2>nombre2)
     {
        temp=nombre1;
        nombre1=nombre2;
        nombre2=temp;
     }

     }

//Fonction dui retourne le MIN
float Min(float nombre1,float nombre2)
    {
        if(nombre1<nombre2)
            return nombre1;
        else
            return nombre2;
    }
//Fonction qui traite les Cas choisi et retourne un Message
/*void MessageDeChoix(int choix){
    char message[20];
    if(choix==1)
        message="ADDITION";
    else if(choix==2)
         message="PRODUIT";
    else if(choix==3)
         message="SOUSTRATION";
    else if(choix==4)
         message="DIVISION";
    else message="QUITTER";

    cout <<"VOUS AVEZ CHOISI LA " <<message <<endl;

}*/

//FONCTION QUI AFFCICHE LE MENU
void Menu()
{
     cout <<"===========* VOTRE MENU DE CHOIX *==============" <<endl;
 cout <<"1==========>Addition\n2==========>Produit\n3==========>Soustration\n4==========>Division\n5==========>Quiter\n\n\nQue voulez vous choisir ? " <<endl;

}

void TraitementCalcul(int choix)
{
    float nombre1,nombre2;
 cout <<"Entrez au Clavier deux nombres :" <<endl;
  cin >> nombre1 >> nombre2;
  Normalisation(nombre1,nombre2);
  cout <<nombre1 <<"  " <<nombre2 <<endl;
  //Traitement des Cas
 switch(choix)
 {
 case 1:

  cout << "\n" <<nombre1 <<" + " <<nombre2 <<" = " <<nombre1+nombre2 <<endl;
    break;
 case 2:
     cout << "\n" <<nombre1 <<" x " <<nombre2 <<" = " <<nombre1*nombre2<<endl;
    break;
 case 3:
     cout << "\n" <<nombre1 <<" - " <<nombre2 <<" = " <<nombre1-nombre2<<endl;
    break;
 case 4:
     cout << "\n" <<nombre1 <<" / " <<nombre2 <<" = " <<nombre1/nombre2<<endl;
    break;

 default:
    cout <<"Choix Invalide, Veuillez reesaiyez" <<endl;
 }
}



int main()
{

int choix=1;

 cout <<"BIENVENUE DANS LE MINI-CALCULATRICE" <<endl;
 do
 {
Menu();

 cin >>choix;
 if(choix==5)
    break;

 TraitementCalcul(choix);
 int nbr1(5);
 cout <<"Valeur de a :" <<
  nbr1 <<endl;

 }while(choix!=5);

return 0;
}
