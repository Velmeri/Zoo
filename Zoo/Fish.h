#pragma once
#include "Animal.h"

class Fish :
    public Animal
{
private:
public:
    Fish() : Animal() {}
    Fish(string name, int age) : Animal(name, age) {}

    virtual void Move() = 0;
    virtual void Eat() {};
    virtual void swim() {
        cout << name << " is swiming";
    };
};