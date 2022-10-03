#pragma once
#include <string>
#include <iostream>

using namespace std;

class Animal
{
protected:
	string name;
	int age;
public:
	virtual void print() = 0;
	void inpute() {
		cout << "\tName?: ";
		cin >> name;
		cout << "\n\tAge?: ";
		cin >> age;
	}
};

