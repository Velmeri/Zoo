﻿#pragma once
#include "Animal.h"

class Penguin :
    public Animal
{
private:
public:

    void Print() {
        Animal::Print();
        cout << "\n\tInformation: Penguins (order Sphenisciformes, family Spheniscidae) are a group of aquatic flightless birds.";
    }
};