#pragma once
#include <string>
#include <iostream>

using namespace std;

class Animal
{
protected:
	string name = "John Doe #" + to_string(JD_num);
	int age = 0;
	static int num;
	static int JD_num;
public:
	Animal() {
		num++;
		JD_num++;
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
			cout << "\n\tAge: Unknown";
	}
	void Inpute() {
		cout << "\tName?: ";
		getline(cin, name);
		cout << "\n\tAge?: ";
		cin >> age;
		JD_num--;
	}
	int GetCount() {
		return num;
	}

	virtual string Voice() = 0;
};

int Animal::num = 0;
int Animal::JD_num = 1;

