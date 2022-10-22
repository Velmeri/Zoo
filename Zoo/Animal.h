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

	virtual void Move() = 0;
	virtual void Eat() = 0;
	
};

int Animal::num = 0;
int Animal::JD_num = 1;

