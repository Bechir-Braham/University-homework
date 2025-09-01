#ifndef COMPTE_EPARGNE_H
#define COMPTE_EPARGNE_H
#include "compte.h"
class CompteEpargne : public Compte{
	public:
		CompteEpargne();
		CompteEpargne(double debit,double credit,char* nom,double taux);
		void affiche();
		double interet();
		void update();
	private:
		char* nom;
		double taux;
};
#endif
