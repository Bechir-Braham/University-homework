#include "Compte.h"
#include <iostream>
int Compte::max_code = 0;
using namespace std;

Compte::Compte ()
{
    solde = 0;
    code = ++max_code;
}
Compte::Compte (int solde)
{
    this->solde = solde;
    code = ++max_code;
}
void Compte::affiche_solde () { cout << "votre solde=" << solde << endl; }
int Compte::get_code () { return this->code; }
int Compte::get_solde () { return this->solde; }

int Compte::depot (int montant)
{
    this->solde += montant;
    return montant;
}
int Compte::retrait (int montant)
{
    this->solde -= montant;
    return montant;
}
