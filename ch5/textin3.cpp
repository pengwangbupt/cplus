// C++ Primer Plus Page 155
// textin3.cpp --- reading chars to end of file
#include <iostream>
int main()
{
	using namespace std;
	char ch;
	int count = 0;
	cin.get(ch);			// use the cin.get(ch) function
	while (cin.fail() == false)  // test for EOF
	{
		cout << ch;
		++count;
		cin.get(ch);
	}

	cout << endl << count << " characters read\n";

	return 0;
}
