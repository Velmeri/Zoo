#pragma once
#include "Animal.h"

class Elephant : public Animal
{
private:
public:
    Elephant() : Animal() {}
    Elephant(string name, int age) : Animal(name, age) {}
    
};