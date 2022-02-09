#include <iostream>

using namespace std;

int pgcd(int a, int b)
{
while (b != 0)
{
const int t = b;
b = a%b;
a=t;
}
return a;
}

int main()
{
    int a=17, b=0;
    cout << "PGCD : " << pgcd(a,b)<<endl;
    return 0;
}
