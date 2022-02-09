#include <iostream>

using namespace std;

//========= FONCTION QUI UNE FONCTION QUI DETERMINE LE MIN ET LE MAX ET EN SERT POUR CALCULER LA DIFFERNCE =========//
int Calculdifference(int nbr1,int nbr2)
{
    if(nbr1 >nbr2)
        return nbr1-nbr2;
    else
        return nbr2-nbr1;
}
 //========= FONCTION QUI UNE FONCTION QUI DETERMINE LE MIN ET LE MAX ET EN SERT POUR CALCULER LA DIVISION =========//
int CalculDivision(int nbr1,int nbr2)
{
    if(nbr1 >nbr2)
        return int(nbr1/nbr2);
    else
        return int(nbr2/nbr1);
}

//Fonction dui retourne le MAX
int Max(int nombre1,int nombre2)
{
     if(nombre1>nombre2)
        return nombre1;
     else
       return nombre2;
}

//Fonction dui retourne le MIN
int Min(int nombre1,int nombre2)
    {
        if(nombre1<nombre2)
            return nombre1;
        else
            return nombre2;
    }


int main()
{
    int nombre1,nombre2;
    int maxN=Max(nombre1,nombre2);
    int minN=Min(nombre1,nombre2);
    /*long somme,produit,diference,division_entiere;
    float quotient,modulo;*/

    cout   n<<"Veuillez entrer au clavier les deux nombres :" <<endl;
    cin >> nombre1 >>nombre2;

    //Affichage
    cout <<"\n " <<nombre1 <<"+" <<nombre2 <<"= " <<nombre1+nombre2 <<endl;
    cout <<"\n " <<nombre1 <<"*" <<nombre2 <<"= " <<nombre1*nombre2 <<endl;
    cout <<"\n " <<maxN <<"-" <<minN <<"= " <<int(maxN-minN) <<endl;
    cout <<"\n " <<maxN <<" Division entiere " <<minN <<"= " <<int(maxN/minN)<<endl;
    cout <<"\n " <<nombre1 <<"Quotient"  <<nombre2 <<"= " <<nombre1/nombre2 <<endl;
    cout <<"\n " <<nombre1 <<"Modulo " <<nombre2 <<"= " <<nombre1%nombre2 <<endl;
    return 0;
}
