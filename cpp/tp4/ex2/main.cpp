#include "responsable.h"
double somme_total(vector<Responsable*> resp)
{
    double sum = 0;
    for (int i = 0; i < resp.size(); i++) {
	for (int j = 0; j < resp[i]->sous_employes.size(); j++) {
	    sum += resp[i]->sous_employes[j].salaire();
	}
	sum += resp[i]->salaire();
    }
    return sum;
}
int main()
{
    vector<Responsable*> responsables;
    Responsable omar("omar", 1000);
    responsables.push_back(&omar);
    Responsable samar("samar", 1000);
    responsables.push_back(&samar);
    Employe bechir("bechir", 420);
    omar.sous_employes.push_back(bechir);
    Employe ala("ala", 690);
    omar.sous_employes.push_back(ala);
    Employe dhafer("dhafer", 505);
    samar.sous_employes.push_back(dhafer);
    Employe salma("salma", 520);
    samar.sous_employes.push_back(salma);
    Employe sondes("sondes", 442);
    omar.sous_employes.push_back(sondes);
    Employe john("john", 9);
    omar.sous_employes.push_back(john);
    samar.affiche();
    omar.affiche();
    cout << "\nla somme des salaires de tous les personels: " << somme_total(responsables) << endl;
    return 0;
}
