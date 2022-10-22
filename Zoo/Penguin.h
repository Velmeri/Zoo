#pragma once
#include "Bird.h"

class Penguin :
    public Bird
{
private:
public:
    Penguin() : Bird(){}
    Penguin(string name, int age) : Bird(name, age){}
    
    void Fly() {
        cout << name << " can't flying but " << name << " can swim";
    }
    void Eat() {
        cout << name << " eating fish";
    }
};