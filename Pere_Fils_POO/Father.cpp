#include <iostream>
#include <string>
#include "Father.h"
using namespace std;

Father::Father(): IDnumber(01),birthday("01/01/1990"),last_name("ZONON"),first_name("Vincent"),income(500000.5)
{


}

Father::Father(int id,string dateNais, string nom,string prenoms,double revenu):
    IDnumber(id),birthday(dateNais),last_name(nom),first_name(prenoms),income(revenu)
    {

    }

 Father::Father(Father const& original):IDnumber(original.IDnumber),birthday(original.birthday),
                last_name(original.last_name),first_name(original.first_name),income(original.income)

    {

    }

    /**DEFINITION DES GETTERS ET DES SETTERS**/

    int Father::getIDnumber() const
    {
        return IDnumber;
    }

    string Father:: getBirthday() const
    {
        return birthday;
    }

    string Father::getLast_name()const

    {
        return last_name;
    }
    string Father::getFirst_name() const
    {

        return first_name;
    }

   double Father:: getIncome() const
    {
       return income;
    }


    bool Father::setIDnumber(int id)
    {
        if(id<0)
            id=1;

        IDnumber=id;
        return true;
    }

    bool Father::setBirthday(string Birthday )
    {
        birthday=Birthday;
        return true;
    }


    bool Father::setLast_name(string Last_name)
    {
        last_name=Last_name;
        return true;
    }

    bool Father::setFirst_name(string First_name)
    {
        first_name=First_name;
        return true;
    }

    bool Father::setIncome(double revenu)
    {
        income=revenu;
        return true;
    }

    /**DESTRUCTEURS**/
    Father::~Father()
    {

    }

