#include <iostream>
using namespace std;
int v_square(int n)
{
    cout << "\nIn v_square(): " << &n << endl; // 0x22ff00
    n *= n;
    return n;
}
void p_square(int* pNumber)
{
    cout << "\nIn p_square(): " << pNumber << endl; // 0x22ff1c
    *pNumber *= *pNumber;
}
void r_square(int& rNumber)
{
    cout << "\nIn r_square(): " << &rNumber << endl; // 0x22ff1c
    rNumber *= rNumber;
}
int main()
{
	int n,aux;
	n=13;
	aux=v_square(n);
	cout<<"avec passage par valeur n="<<n<<endl;
	n=13;
	p_square(&n);
	cout<<"avec passage par pointeur n="<<n<<endl;
	n=13;
	r_square(n);
	cout<<"avec passage par reference n="<<n<<endl;
}
