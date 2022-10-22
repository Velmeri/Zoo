#pragma once
#include "Animal.h"

class Bird :
public Animal
{
private:
public:
    Bird() : Animal() {}
    Bird(string name, int age) : Animal(name, age) {}

    virtual void Move() {
        cout << name << " slowly move";
    };
    virtual void Eat(){};
    virtual void Fly(){};

};