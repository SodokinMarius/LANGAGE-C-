#ifndef FATHER_H_INCLUDED
#define FATHER_H_INCLUDED
class Father
{

    /**CONSTRUCTEURS**/
public:
    Father();
    Father(int IDnumber,std::string birthday,std::string last_name, std::string fist_name,double income);
    Father(Father const& Original);

    /**GETTERS ET SETTERS*/
    int getIDnumber() const;
    std::string getBirthday() const;
    std::string getLast_name()const;
    std::string getFirst_name() const;
    double getIncome() const;

    bool setIDnumber(int id);
    bool setBirthday(std::string Birthday );
    bool setLast_name(std::string Last_name);
    bool setFirst_name(std::string First_name);
    bool setIncome(double revenu);


    /**LES ATTRIBUTS DE CLASSE**/
protected:

    int IDnumber;
    std::string last_name;
    double income;

private:

    std::string birthday;
    std::string first_name;

public:
    /** DESTRUCTEUR*/
    ~Father();


};


#endif // FATHER_H_INCLUDED
