#pragma once
#include "Animal.h"

class Parrot : public Animal
{
private:
public:
    Parrot() : Animal() {}
    Parrot(string name, int age) : Animal(name, age) {}
    void Print() {
        Animal::Print();
        cout << "\n\tCharacteristic features of parrots include a strong, curved bill, an upright stance, strong legs, and clawed zygodactyl feet.";
    }
    string Voice() {
        return "Hello!";
    }
};