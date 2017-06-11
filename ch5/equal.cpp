// C++ Primer Plus Page 141
// equal.cpp --- equality vs assignment
#include <iostream>
int main()
{
	using namespace std;
	int quizecores[10] = 
		{20,20,20,20,20,19,20,18,20,20};

	cout << "Doing it right:\n";
	int i;
	for( i = 0; quizecores[i] == 20; i++)
		cout << "quize " << i << " is a 20\n";
	// Warning: you may prefer reading about this program
	// to actually running it
	cout << "Doing it dangerously wrong:\n";
	for( i = 0; quizecores[i] = 20; i++)
		cout << "quize " << i << " is a 20\n";

	return 0;
}
