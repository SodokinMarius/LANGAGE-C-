#include <iostream>

using namespace std;

int main()
{
    int pterme;
    cout << "Entrer le premier terme de la suite : " << endl;
    cin >>pterme;

    for (int i=0; i<50;i++)
    {

         double terme=(pterme/2)+(1/pterme);
         cout<< "Terme " <<i <<"========> " <<terme <<endl;
         pterme=terme;

    }
    return 0;
}
