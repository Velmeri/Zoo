#pragma once
#include "Animal.h"

class Penguin :
    public Animal
{
private:
public:
    Penguin() : Animal(){}
    Penguin(string name, int age) : Animal(name, age){}
    void Print() {
        Animal::Print();
        cout << "\n\tInformation: Penguins (order Sphenisciformes, family Spheniscidae) are a group of aquatic flightless birds.";
    }
    string Voice() {
        return "GAA!!!";
    }
};