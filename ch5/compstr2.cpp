// C++ Primer Plus Page 144
// compstr2.cpp --- comparing strings using string
#include <iostream>
#include <cstring>
int main()
{
	using namespace std;
	string word = "?ate";
	for (char ch = 'a'; word != "mate";ch++)
	{
		cout << word << endl;
		word[0] = ch;
	}
	cout << "After loop ends, word is " << word << endl;

	return 0;
}
