#pragma once
#include "Animal.h"

class Dog :
    public Animal
{
private:
public:
    Dog() : Animal() {}
    Dog(string name, int age) : Animal(name, age) {}
    
};