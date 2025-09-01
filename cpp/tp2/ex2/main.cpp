#include "Voiture.h"
#include <iostream>
using namespace std;
int main()
{
	Voiture tmp;
	tmp.set_roues(4);
	tmp.set_portes(4);

	cout<<"la voiture a "<<tmp.get_roues()<<" roues."<<endl;
	cout<<"la voiture a "<<tmp.get_portes()<<" portes."<<endl;
}
