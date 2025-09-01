#include <iostream>
using namespace std;
void remplirA(int* A)
{
    for (int i = 0; i < 10; i++) {
	cout << "saisir A[" << i << "] = ";
	cin >> A[i];
    }
}

void afficherA(int* A)
{
    for (int i = 0; i < 10; i++)
	cout << "A[" << i << "] = " << A[i] << endl;
}

int main()
{
    int A[10];
    remplirA(A);

	int& reference_vers_5=A[5];
	reference_vers_5++;

	int* pointeur_vers_7 =A+7;
	pointeur_vers_7++;
	(*pointeur_vers_7)++;

	afficherA(A);

    return 0;
}
