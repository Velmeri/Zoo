#pragma once
#include "Animal.h"

class Elephant : public Animal
{
private:
public:
    Elephant() : Animal() {}
    Elephant(string name, int age) : Animal(name, age) {}
    void Print() {
        Animal::Print();
        cout << "\n\t\Information: Elephants are the largest existing land animals.";
    }
    string Voice() {
        return "Trumpeting";
    }
};