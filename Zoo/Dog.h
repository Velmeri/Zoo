#pragma once
#include "Animal.h"

class Dog :
    public Animal
{
private:
public:
    Dog() : Animal() {}
    Dog(string name, int age) : Animal(name, age) {}
    void Print() {
        Animal::Print();
        cout << "\n\tThe dog or domestic dog (Canis familiaris or Canis lupus familiaris[5]) is a domesticated descendant of the wolf.";
    }
    string Voice() {
        return "BARK!!!!";
    }
};