#ifndef EMPLOYE_H
#define EMPLOYE_H

#include <iostream>
using namespace std;

class Employe {
public:
    static double val_salaire;
    static int max_mat;
    Employe(string, double);
    Employe();
    void afficher();
    double salaire();
    string get_nom();

protected:
    string nom;
    double indice;
    int matricule;
};

#endif
