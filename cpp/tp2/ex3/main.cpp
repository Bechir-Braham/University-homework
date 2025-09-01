#include "Etudiant.h"
#include "Filiere.h"
#include <iostream>

using namespace std;

int main()
{
    Etudiant samir = Etudiant(2929, 28283939, 3, 0.0, { Matiere("fr", 1, 12), Matiere("math", 3, 17), Matiere("cpp", 2, 17) });
    Etudiant fraj = Etudiant(33, 38283939, 3, 0, { Matiere("fr", 1, 10), Matiere("math", 3, 8), Matiere("cpp", 2, 20) });
    Etudiant sondes = Etudiant(32929, 24283939, 3, 0, { Matiere("fr", 1, 17), Matiere("math", 3, 9), Matiere("cpp", 2, 14) });
    Etudiant samira = Etudiant(255929, 28583939, 3, 0, { Matiere("fr", 1, 11), Matiere("math", 3, 3), Matiere("cpp", 2, 10) });

    Filiere gl = Filiere(1, 2, { samir, fraj });
    Filiere iia = Filiere(2, 2, { sondes, samira });

    cout << "les etudiants de la filiere gl: " << endl;
    gl.afficher();
    cout << "les etudiants de la filiere iia: " << endl;
    iia.afficher();

    for (int i = 0; i < gl.get_nbr_etudiants(); i++) {
	gl.get_etudiants()[i].calcul_moyenne();
    }
    for (int i = 0; i < iia.get_nbr_etudiants(); i++) {
	iia.get_etudiants()[i].calcul_moyenne();
    }
    cout << "les etudiants qui ont reussi de la filiere gl: " << endl;
    for (int i = 0; i < gl.get_nbr_etudiants(); i++) {
	if (gl.get_etudiants()[i].reussi()) {
	    cout << "l'etudiant d'id = " << gl.get_etudiants()[i].get_NumCarte() << " a reussi" << endl;
	}
    }
    cout << "les etudiants qui ont reussi de la filiere iia: " << endl;
    for (int i = 0; i < iia.get_nbr_etudiants(); i++) {
	if (iia.get_etudiants()[i].reussi()) {
	    cout << "l'etudiant d'id = " << iia.get_etudiants()[i].get_NumCarte() << " a reussi" << endl;
	}
    }
    return 0;
}
