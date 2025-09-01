#include "compte.h"
#include <iostream>
using namespace std;

int Compte::max_id = 0;

Compte::Compte()
{
    debit = 0;
    credit = 0;
    id = ++max_id;
}
Compte::Compte(double a, double b)
{
    debit = a;
    credit = b;
    id = ++max_id;
}
void Compte::affiche()
{
    cout << "le compte d'id: " << id << endl;
    cout << "a comme debit " << debit << " et comme credit " << credit << endl;
    cout << "et son solde: " << solde() << endl;
}
void Compte::ajout(double val) { credit += val; }
void Compte::retire(double val){ debit +=val; }
double Compte::solde(){ return credit -debit; }
