#ifndef FILIERE_H
#define FILIERE_H
#include "Etudiant.h"
#include <vector>

class Filiere {
private:
    int id_filiere, nbr_etudiants;
    std::vector<Etudiant> etudiants;

public:
    Filiere(int, int ,std::vector<Etudiant>);
    int get_idFiliere()
    {
	return id_filiere;
    }
    int get_nbr_etudiants() 
    {
	return nbr_etudiants;
    }
    void set_id_filiere(int id)
    {
	id_filiere = id;
    }
    void set_nbr_etudiants(int n)
    {
	nbr_etudiants = n;
    }
    std::vector<Etudiant>& get_etudiants()
    {
	return etudiants;
    }
    void afficher();
};

#endif
