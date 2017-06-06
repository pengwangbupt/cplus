//C++ Primer Plus Page 91
// assgn_st.cpp --- assigning structures
#include <iostream>
struct inflatable
{
	char name[20];
	float volume;
	double price;
};

int main()
{
	using namespace std;
	inflatable bouyquet = 
	{
		"sunflowers",
		0.20,
		12.49
	};

	inflatable choice;
	cout << "bouyquet: " << bouyquet.name << " for $";
	cout << bouyquet.price << endl;

	choice = bouyquet;  // assign one structure to another
	cout << "choice: " << choice.name << " for $";
	cout << choice.price << endl;

	return 0;
}
