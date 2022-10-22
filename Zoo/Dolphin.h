#pragma once
#include "Fish.h"

class Dolphin :
    public Fish
{
private:
public:
    Dolphin() : Fish() {}
    Dolphin(string name, int age) : Fish(name, age) {}

    virtual void Move() {
        cout << "";
    }
    virtual void Eat() {
        cout << name << " is eating fish";
    };
};