#include "employe.h"

int Employe::max_mat = 0;
double Employe::val_salaire = 1.2;

Employe::Employe() { matricule = ++max_mat; }
Employe::Employe(string nom, double indice)
    : nom(nom)
    , indice(indice)
{
    matricule = ++max_mat;
}

void Employe::afficher()
{
    cout << "\n********employe:" << nom << "************ \n";
    cout << "matricule: " << matricule << "\nsalaire: " << Employe::salaire();
}
double Employe::salaire() { return indice * val_salaire; }
