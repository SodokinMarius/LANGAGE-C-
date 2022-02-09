#ifndef VEHICULE_H_INCLUDED
#define VEHICULE_H_INCLUDED



// Vehicule.h
class Vehicule
{

public:
// Constructeurs
Vehicule();
Vehicule(int vmax, double cap, std::string use);
Vehicule(Vehicule const& original);
// Methodes
bool est_adapte(std::string terrain) const;
void afficher_description() const;
// Accesseurs
int get_vitesse_max() const;
double get_capacite() const;
std::string get_usage() const;
// Mutateurs
bool set_vitesse_max(int vmax);
bool set_capacite(double cap,double capacite);
bool set_usage(std::string use);
~Vehicule();
protected:
int vitesse_max;
double capacite;
std::string usage;
};
// Vehicule.cp
#endif // VEHICULE_H_INCLUDED
