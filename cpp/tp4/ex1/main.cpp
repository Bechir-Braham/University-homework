#include <iostream>
#include <string>
#include "compteEpargne.h"

using namespace std;

int main() {
	CompteEpargne client{12, 500, "omar", 0.69};
	client.affiche();
	client.retire(420);
	cout<<"\n*****on retire 420*****\n********************\n";
	client.affiche();
	client.update();
	cout<<"\n*****on applique l'interet*****\n********************\n";
	client.affiche();
	cout<<"\n*****on cree un deuxieme compte*****\n********************\n";
	CompteEpargne client2{420, 10000, "ahmed", 0.02};
	client2.affiche();
	client2.update();
	cout<<"\n*****compte apres interet*****\n********************\n";
	client2.affiche();
	return 0;
}
