#include <iostream>
#include<cmath>
#include "Calcul.h"

using namespace std;

int main()
{
    int maximum=52, minimum;

    cout << "Veuiielz entrer le nombre de cartes : " << endl;
    cin >> minimum;

    cout << " \nPGCD (" <<maximum <<" , " << minimum <<") : " << PGCD(maximum,minimum) <<endl;
    cout << " \nPPCM (" <<maximum <<" , " << minimum <<") : " << PPCM(maximum,minimum) <<endl;
    cout <<minimum <<"! = " << factorielle(minimum) <<endl;
    cout << " \nArrangement de " <<minimum <<" dans  " << maximum <<" : " << Arrangement(maximum,minimum) <<endl;
    cout << " \nPermutation : " <<maximum <<" puissance " << minimum <<" : " << Permutation(maximum,minimum) <<endl;
    cout << " \nCombinaison de " <<minimum <<" dans  " << maximum <<" : " << combinaison(maximum,minimum) <<endl;
    cout << pow(maximum,minimum);

    return 0;
}
