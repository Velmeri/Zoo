using namespace std;

#include "All.h"

int main() {
	Penguin A("Mark", 6);
	Elephant B;
	Parrot C;
	C.Inpute();
	Dog D;

	cout << endl;
	A.Print();
	cout << endl << endl;
	B.Print();
	cout << endl << endl;
	C.Print();
	cout << endl << endl;
	D.Print();
	cout << endl << endl;
	cout << "\tNum of animal: " << A.GetCount();
	cout << endl << endl;
	
	cout << '\t' << A.Voice() << endl;
	cout << '\t' << B.Voice() << endl;
	cout << '\t' << C.Voice() << endl;
	cout << '\t' << D.Voice() << endl;

	return 0;
}