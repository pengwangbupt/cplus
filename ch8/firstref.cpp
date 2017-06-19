// C++_Primer Plus Page 256
// firstref.cpp --- defing and using a reference
#include <iostream>
int main()
{
	using namespace std;
	int rats = 101;
	int & rodents = rats;
	cout << "rats = " << rats;
	cout << ", rodents = " << rodents << endl;
	rodents++;
	cout << "rats = " << rats;
	cout << ", rodents = " << rodents << endl;

	// some implementations require type casting the following
	// addresses to type unsigned
	cout << "rats address = " << &rats;
	cout << ", rodents address = " << &rodents << endl;

	return 0;
}
