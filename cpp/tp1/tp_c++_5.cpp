#include <iostream>
using namespace std;
void methode1(char**& tab, int& n)
{
	cout << "saisir le nombre de chaine de characteres : ";
	cin >> n;
	tab = new char*[n];
	for(int i = 0; i < n; i++){
		char* str = new char[50];
		cin >> str;
		tab[i] = str;
	}
}

int main()
{
	int n;
	char** tab;
	methode1(tab, n);
	cout<<endl;
	for(int i = 0; i < n; i++)
		cout << tab[i] << endl;
	return 0;
}
