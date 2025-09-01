#include "responsable.h"

void Responsable::affiche()
{
    cout << "\nles sous_employes de " << nom << " sont :";
    for (int i = 0; i < sous_employes.size(); i++) {
	sous_employes[i].afficher();
    }
    cout << endl;
}
