#include <iostream>
#include "suite_arithmetique.h"
using namespace std;

SuiteArithmetique::SuiteArithmetique():premierT(0),raison(1){ }
SuiteArithmetique::SuiteArithmetique(SuiteArithmetique const& original):premierT(original.premierT),raison(original.raison){ }
SuiteArithmetique::SuiteArithmetique(float premier_T,float raison_suite):premierT(premier_T),raison(raison_suite){ }
float SuiteArithmetique::get_premiert()
{
    return premierT;
}
float SuiteArithmetique::get_raison()
{
    return raison;
}
void SuiteArithmetique::set_premierT(float premier_T)
{
    premierT=premier_T;
}
void SuiteArithmetique::set_raison(float raison_suite)
{
    raison=raison_suite;
}
float SuiteArithmetique::sommeT(int n)
{
    return (n+1)*(premierT+(this->niemeT(n)))/2;
}
float SuiteArithmetique::niemeT(int k)
{
    return premierT + k*raison;
}
SuiteArithmetique::~SuiteArithmetique(){ }
