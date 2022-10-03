#pragma once
#include <string>
#include <iostream>

using namespace std;

class Animal
{
protected:
	string name = "John Doe";
	int age = 0;
	static int num;
public:
	Animal() {
		num++;
	}
	Animal(string name, int age) {
		this->name = name;
		this->age = age;
		num++;
	}
	~Animal() {
		num++;
	}
	void Print() {
		cout << "\tName: " << name;
		if (age != 0)
			cout << "\n\tAge: " << age;
		else
			cout << "Age: Unknown";
	}
	void Inpute() {
		cout << "\tName?: ";
		getline(cin, name);
		cout << "\n\tAge?: ";
		cin >> age;
	}
	int GetCount() {
		return num;
	}
};

int Animal::num = 0;

