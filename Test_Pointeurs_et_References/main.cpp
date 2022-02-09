#include <iostream>

using namespace std;

int main()
{
    /**
    POINTEURS
    */

    int* nbr1=nullptr;
    int nbr=2;
    nbr1=&nbr;
    cout <<"Adresse de nbr : " << nbr1<<endl;
    cout <<"Valeure de nbr : " << *nbr1<<endl;
    *nbr1=28;
    cout <<"Nouvelle Valeure de nbr : " << nbr<<endl;


    /**(-
    REFERENCES
    */
    int& alias=nbr;

cout <<"Adresse de nbr : " <<&alias<<endl;
cout <<"Valeure de nbr : " << alias <<endl;
alias=14;
cout <<"Nouvelle Valeure de alias: " << alias <<endl;

    return 0;
}
