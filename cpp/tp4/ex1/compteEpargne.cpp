#include <iostream>
#include "compte.h"
#include "compteEpargne.h"

using namespace std;

CompteEpargne::CompteEpargne(double d, double c, char* n, double t)
: Compte(d,c)
{
	nom=n;
	taux=t;
}
CompteEpargne::CompteEpargne(){
	nom=nullptr;
	taux=0;
}

void CompteEpargne::affiche(){
	Compte::affiche();
	cout<<"le nom du client: "<<nom<<endl;
	cout<<"le taux d'interet: "<<taux<<endl;
}
double CompteEpargne::interet(){
	return solde()*taux;
}
void CompteEpargne::update(){
	ajout(interet());
}
