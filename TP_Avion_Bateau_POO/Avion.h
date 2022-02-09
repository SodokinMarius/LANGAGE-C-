#ifndef AVION_H_INCLUDED
#define AVION_H_INCLUDED

// Avion.h
#include "Vehicule.h"
class Avion: public Vehicule
{
public:
// Constructeurs
Avion();
Avion(int vmax, double cap);
Avion(Avion const& original);
// Methodes
bool est_adapte(std::string terrain) const;
void afficher_description() const;
bool decoller();
bool atterir();
// Accesseurs
// Mutateurs
~Avion();
protected:
bool en_vol;
};

#endif // AVION_H_INCLUDED
