#include "Etudiant.h"
#include <utility>
int Etudiant::max_code;
Etudiant::Etudiant (string n, int ns)
{
    Etudiant::max_code++;
    code = Etudiant::max_code;
    nom = std::move(n);
    nbr_notes = ns;
    this->tab_notes = new int[ns];
	
}
void Etudiant::set_code (int c) { code = c; }
void Etudiant::set_nom (string nomm) { nom = std::move(nomm); }
void Etudiant::set_nbr_notes (int c) { nbr_notes = c; }
int Etudiant::get_code () { return code; }
int Etudiant::get_nbr_notes () { return nbr_notes; }
string Etudiant::get_nom () { return this->nom; }

Etudiant::Etudiant ()
{
max_code++;
this->code = max_code;
this->nom = "";
this->nbr_notes = 0;
}

Etudiant::~Etudiant () { 
	 delete[] tab_notes;
}

void Etudiant::saisie ()
{
    cout << "saisir les note pour " << nom << endl;
	int tmp=0;
    for (int i = 0; i < nbr_notes; i++) {
        cout << "saisir la note n°" << i + 1 << ": ";
        cin >>tmp;
		tab_notes[i]=tmp;
    }
}

void Etudiant::affichage ()
{
    cout << "nom=" << nom << " code=" << code << "\nnbr_notes=" << nbr_notes << endl;
    for (int i = 0; i < nbr_notes; i++) {
        cout << "notes n°" << i + 1 << "= " << tab_notes[i] << endl;
    }
    cout << "moyenne=" << moyenne () << endl;
    string s = "";
    s = (admis ()) ? "est" : "n'est pas";
    cout << "cet etudiant " << s << " admis" << endl;
}
float Etudiant::moyenne ()
{
    int sum = 0;
    for (int i = 0; i < nbr_notes; i++) {
        sum += tab_notes[i];
    }
    return 1.0 * sum / nbr_notes;
}
bool Etudiant::admis () { return this->moyenne () >= 10; }
bool Etudiant::comparer (Etudiant* tmp) { return this->moyenne () == tmp->moyenne (); }
