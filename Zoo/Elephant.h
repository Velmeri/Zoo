#pragma once
#include "Animal.h"

class Elephant : public Animal
{
private:
public:
    Elephant() : Animal() {}
    Elephant(string name, int age) : Animal(name, age) {}
    
    void Move() {
        cout << name << " is walking on 4 paws";
    }
    void Eat() {
        cout << " is eating grean";
    }
};