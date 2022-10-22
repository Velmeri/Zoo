#pragma once
#include "Bird.h"

class Parrot : 
    public Bird
{
private:
public:
    Parrot() : Bird() {}
    Parrot(string name, int age) : Bird(name, age) {}
    
    void Eat() {
        cout << " eating corn";
    };
    void Fly() {
        cout << name << " is flying";
    }
};