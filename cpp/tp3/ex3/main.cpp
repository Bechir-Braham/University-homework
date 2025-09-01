#include"Compte.h"
#include<iostream>
using namespace std;
int main(){
	Compte c1,c2,c3;
	c1=Compte(25);
	c2=Compte();
	c2.depot(69);
	c3=Compte(420);
	
	c1.depot(c2.retrait(44));
	c2.depot(c3.retrait(400));
	c1.depot(c3.retrait(21));



	c1.affiche_solde();
	c2.affiche_solde();
	c3.affiche_solde();
}
