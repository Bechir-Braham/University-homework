#ifndef RESPONS_H
#define RESPONS_H
#include "employe.h"
#include <vector>
class Responsable : public Employe {
public:
    Responsable(string, int, double);
    void afficher();
    Responsable(string nom = "", double indice = 1)
	: Employe(nom, indice)
    {
    }
    void affiche();
    vector<Employe> sous_employes;
};
#endif
