#ifndef SON_H_INCLUDED
#define SON_H_INCLUDED

#include "Father.h"
class Son : protected Father
{
    /**CONSTRUCTEUR**/
public :

    Son();
    Son(int id_number,std::string last_name,std::string Sfirst_name,int age,double revenu);
    Son(Son const& original);

    /**GETTERS ET SETTERS*/

    std::string getSFirst_name() const;

    int getSAge() const;

    bool setSFirst_name(std::string  prenom_fils);
    bool setSAge(int newAge);

    std::string se_presenter();


    /**ATTRIBUTS DE CLASSE*/
private :
    int Id_number;
    std::string Sfirst_name;
    int age;


    /**DESTRUCTEUR*/
public:
    ~Son();





};

#endif // SON_H_INCLUDED
