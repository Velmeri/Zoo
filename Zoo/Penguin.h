#pragma once
#include "Animal.h"

class Penguin :
    public Animal
{
private:
public:
    Penguin() : Animal(){}
    Penguin(string name, int age) : Animal(name, age){}
    
};