#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
using namespace std;

class Animal {
public:
    virtual void crier() const = 0;

    void info() const {
        cout << "Je suis un animal." << endl;
    }

    virtual ~Animal() {}
};

#endif
