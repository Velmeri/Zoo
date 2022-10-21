#pragma once
#include "Animal.h"

class Parrot : public Animal
{
private:
public:
    Parrot() : Animal() {}
    Parrot(string name, int age) : Animal(name, age) {}
    
};