#include <iostream>
#include <cmath>

//========== FONCTION DE NORMALISTION ===========
void Normalisation(int nombre1,int nombre2)
{

}

// ======= FONCTION FACTORIELLE =========
long factorielle(int nombre)
{ int i=0;
    long fact=1;
    for(i=0;i<nombre;i++)
    {
        fact*=i;
    }
    return fact;

}

//=========== FONCTION TRIER =========
void Trier (int maximum, int minimum)
{
    int temp=0;
        if(maximum <minimum)
        {
            temp=maximum;
            maximum=minimum;
            minimum=temp;
        }
}

//========= FONCTION PERMUTATION ======

long Permutation(int nombre1, int nombre2)
{
    Trier(nombre1,nombre2);
    return pow(nombre1,nombre2);
}

// ======= FONCTION  ARRANGEMENT ==========

long Arrangement(int maximum, int minimum)
{
    Trier(maximum,minimum);
 long arrang=(int)(factorielle(maximum)/factorielle(maximum-minimum));
}

long combinaison(int maximum,int minimum)
{
    Trier(maximum,minimum);
   long valeur=(int)(factorielle(maximum)/((factorielle(minimum))*(factorielle(maximum-minimum))));
   return valeur;

}

// ========= FONCTION PGCD =========
long PGCD(int maximum,int minimum)
{
 Trier(maximum,minimum);
   long rest=0,pgcd=0;
   rest=maximum%minimum;
   if(rest==0)
    pgcd=minimum;
   else{
    while(rest!=0)
    {
        maximum=minimum;
        minimum=rest;
        rest=maximum%minimum;
    }
    pgcd=minimum;
   }
   return pgcd;
}

// ============== FONCTION PPCM ============
long PPCM(int maximum,int minimum)
{
    return (maximum*minimum)/PGCD(maximum,minimum);
}
