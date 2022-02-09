#ifndef ORDINATEUR_H_INCLUDED
#define ORDINATEUR_H_INCLUDED

class Ordinateur
{
public :
    Ordinateur();
    Ordinateur(std::string Id,std::string nom,std::string adMac,std::string adIp);
    Ordinateur(Ordinateur const& original) ;

    //GETTERS ET SETTERS

    std::string getId() const;
    std::string getNom()const;
    std::string getMac()const;
    std::string getIp() const;


    bool setId(std::string newId);
    bool setNom(std::string newNom);
    bool setMac(std::string newAdmac);
    bool setIp(std::string newIp);

    //ATTRIBUTS
protected:
    std::string Id;
    std::string nom;
    std::string adMac;
    std::string adIp;

    //DESTRUCTEUR

    public:
    ~Ordinateur();
};


#endif // ORDINATEUR_H_INCLUDED
