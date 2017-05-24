// C++ Primer Plus Page 51
// bondini.cpp --- using escape sequence
#include <iostream>
int main()
{
	using namespace std;
	cout << "\aOperation \"HyperHype\" is now activates!\n";
	cout << "Enter your agent code:________ \b\b\b\b\b\b\b\b";
	long code;
	cin >> code;
	cout << "\aYou entered " << code << "...\n";
	cout << "\aCode verified! Proceed with Plan Z3!\n";

	return 0;	
}
