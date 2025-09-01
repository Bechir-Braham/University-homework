#ifndef ETUDIANT_H
#define ETUDIANT_H
#include "Matiere.h"
#include <vector>

class Etudiant {
public:
    int Num_carte, telephone, nbr_matieres;
    double Moyenne=3;
    std::vector<Matiere> matieres;

public:
    Etudiant(int, int, int, double,std::vector<Matiere>);
    int get_NumCarte();
    int get_telephone();
    int get_nbr_matieres();
    std::vector<Matiere> get_matieres();

    void set_NumCarte(int);
    void set_telephone(int);
	void set_Moyenne(double x){ Moyenne=x; }
    void set_nbr_matieres(int);
    void set_matieres(std::vector<Matiere>);

    void afficher();
    double calcul_moyenne();
    bool reussi();
};
#endif
