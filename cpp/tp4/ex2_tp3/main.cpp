#include"Point.h"
#include<iostream>

using namespace std;
void affiche(Point tmp){
	cout<<"("<<tmp.x<<", "<<tmp.y<<") \n";
}
int main(){

	Point p1=Point(2,4);
	Point p2=Point(7,0);
	cout<<"point1: ";
	affiche(p1);
	cout<<"point2: ";
	affiche(p2);
	p1+=p2;
	cout<<"\npoint1=point1 + point2: \n";
	cout<<"point1: ";
	affiche(p1);
	cout<<"point2: ";
	affiche(p2);
	cout<<"\nmilieu point1 et point 2: ";
	affiche(p1.milieu(p2));
	cout<<"\ndistance point1 et point 2: "<<p1.distance(p2)<<endl;
	

	return 0;
}
