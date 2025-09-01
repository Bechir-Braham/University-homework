#include "Etudiant.h"
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;
int main ()
{
    Etudiant::max_code = 0;
    vector<Etudiant *> etudians;
	string nomEtudiant[]={"ahmed","samir","hamza","sondes","juan"};
    for (int i = 0; i < 5; i++) {
        Etudiant *karlos = new Etudiant (nomEtudiant[i], 3);
        etudians.push_back (karlos);
    }
    for (int i = 0; i < 5; i++) {
        etudians[i]->saisie ();
    }
    for (int i = 0; i < 5; i++) {
        etudians[i]->affichage ();
    }
    vector<int> toDel;
    while (etudians.size () != 0) {
        toDel = { 0 };
        cout << "les etudians avec moyenne= "<<etudians[0]->moyenne()<<" :\n"<<etudians[0]->get_nom () << " ";
        for (int j = 1; j < etudians.size (); j++) {
            if (etudians[0]->comparer (etudians[j])) {
                cout << etudians[j]->get_nom () << " ";
                toDel.push_back (j);
            }
        }
        cout << endl;
        int xxx = 0;
        for (int s = 0; s < toDel.size (); s++, xxx++) {
            delete etudians[toDel[s] - xxx];
            etudians.erase (etudians.begin () + toDel[s] - xxx);
        }
    }
    return 0;
}
