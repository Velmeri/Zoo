using namespace std;

#include "All.h"

int main() {
	Penguin A("Mark", 6);
	Elephant B;
	
	cout << endl;
	A.Print();
	cout << endl << endl;
	B.Print();
	cout << endl << endl;
	cout << "\tNum of animal: " << A.GetCount();
	cout << endl << endl;
	
	cout << '\t' << A.Voice() << endl;
	cout << '\t' << B.Voice() << endl;

	return 0;
}