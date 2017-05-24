// C++ Primer Plus Page 46
// hecoct2.cpp --- displays values in hex and octal 
#include <iostream>
using namespace std;
int main()
{
	int chest = 42;
	int waist = 42;
	int inseam = 42;

	cout << "Monsieur cuts a striking figure!\n";
	cout << "chest = " << chest << "(decimal for 42)\n";
	cout << hex;   // manipulator for changing number base
	cout << "waist = " << waist << "(hexadcimal for 42)\n";
	cout << oct;	// manipulator for changing number base
	cout << "inseam = " << inseam << "(octal for 42)\n";

	return 0;
}
