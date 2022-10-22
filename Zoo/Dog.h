#pragma once
#include "Animal.h"

class Dog :
    public Animal
{
private:
public:
    Dog() : Animal() {}
    Dog(string name, int age) : Animal(name, age) {}
    
    void Move() {
        cout << name << " is runing on paws";
    }
    void Eat() {
        cout << name << " is eating meat";
    }
};