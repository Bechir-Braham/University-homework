#include "Etudiant.h"
#include <iostream>
Etudiant::Etudiant(int n, int x, int y, double a, std::vector<Matiere> v)
{
    Num_carte = n;
    telephone = x;
    nbr_matieres = y;
    matieres = v;
    Moyenne = a;
}
int Etudiant::get_NumCarte() { return Num_carte; }
int Etudiant::get_telephone() { return telephone; }
int Etudiant::get_nbr_matieres() { return nbr_matieres; }
std::vector<Matiere> Etudiant::get_matieres() { return matieres; }

void Etudiant::set_NumCarte(int n) { Num_carte = n; }
void Etudiant::set_telephone(int n) { telephone = n; }
void Etudiant::set_nbr_matieres(int n) { nbr_matieres = n; }
void Etudiant::set_matieres(std::vector<Matiere> v) { matieres = v; }

void Etudiant::afficher()
{
    using namespace std;
    cout << "Num_carte= " << Num_carte << endl;
    cout << "telephone= " << telephone << endl;
    cout << "nbr_matieres" << nbr_matieres << endl;
    for (int i = 0; i < nbr_matieres; i++) {
	cout << matieres[i].get_intitule() << " note=" << matieres[i].get_note() << " coef= " << matieres[i].get_coeffecient() << endl;
    }
}
bool Etudiant::reussi()
{
    return Moyenne >= 10.0;
}
double Etudiant::calcul_moyenne()
{
    double total_coef = 0, a, b;
    Moyenne = 0;
    for (int i = 0; i < nbr_matieres; i++) {
	a = matieres[i].get_note();
	b = matieres[i].get_coeffecient();
	total_coef += b;
	Moyenne += b * a;
    }
    Moyenne = Moyenne / total_coef;
    return Moyenne;
}
