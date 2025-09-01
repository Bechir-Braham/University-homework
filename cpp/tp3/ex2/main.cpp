#include"Point.h"
#include<iostream>

using namespace std;
int main(){

	Point p1,p2;
	p1.x=1;
	p1.y=3;
	p2.x=4;
	p2.y=6;
	p1+=p2;
	cout<<p1.x<<"  "<<p1.y;

	return 0;
}
