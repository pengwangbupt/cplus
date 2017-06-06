// C++ Primer Plus Page 98
// address.cpp --- using the & oprator to find addresses
#include <iostream>
int main()
{
	using namespace std;
	int dounts = 6;
	double cups = 4.5;

	cout << "dounts value = " << dounts;
	cout << " and dounts address = " << &dounts << endl;
	// NOTE: you may need to use unsigned (&dounts)
	// and unsigned (&cups)
	cout << "cups values = " << cups;
	cout << " and cups address = " << &cups << endl;

	return 0;
}
