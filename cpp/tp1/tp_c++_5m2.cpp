#include <iostream>
#include <string>
#include <vector>
using namespace std;
void methode2(vector<string>& vect, int& n)
{
    string aux;
    cout << "saisir le nombre de chaine de characteres : ";
    cin >> n;
    for (int i = 0; i < n; i++) {
	cin >> aux;
	vect.push_back(aux);
    }
}
int main()
{
    int n;
    vector<string> vect;
    methode2(vect, n);

	cout<<endl;
    for (int i = 0; i < n; i++)
	cout << vect[i] << endl;

    return 0;
}
