// C++_Primer Plus Page 257
// secref.cpp --- defing and using a reference
#include <iostream>
int main()
{
	using namespace std;
	int rats = 101;
	int & rodents = rats;

	cout << "rats = " << rats;
	cout << ", rodents = " << rodents << endl;
	
	cout << "rats address = " << &rats;
	cout << ", rodents address = " << &rodents << endl;

	int bounnies = 50;
	rodents = bounnies;

	cout << "bounnies = " << bounnies;
	cout << ", rats = " << rats;
	cout << ", rodents = " << rodents << endl;

	cout << "bounnies address = " << &bounnies;
	cout << ", rodents address = " << &rodents << endl;

	return 0;
}
