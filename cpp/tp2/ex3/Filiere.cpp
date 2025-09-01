#include "Filiere.h"
#include <iostream>

void Filiere::afficher()
{
    using namespace std;
    for (int i = 0; i < (int)etudiants.size(); i++) {
	etudiants[i].afficher();
	cout << endl;
    }
}

Filiere::Filiere(int id, int nbr,std::vector<Etudiant> v){
	id_filiere=id;
	nbr_etudiants=nbr;
	etudiants=v;
}
