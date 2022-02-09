#ifndef SERVEUR_H_INCLUDED
#define SERVEUR_H_INCLUDED
#include "Ordinateur.h"

class Serveur:public Ordinateur
{

public :
     /**CONSTRUCTEURS**/
    Serveur();
    Serveur(std::string nomApp);
    Serveur(Serveur const& original);


    /**GETTERS ET SETTERS**/
    std::string getNomApp()const;

    bool setNomApp(std::string newNameApp);

/**ATRIBUTS*/
    protected:
    std::string nomApp;

    /**DESTRUCTEURS**/
    public:
  ~Serveur();
};
#endif // SERVEUR_H_INCLUDED
