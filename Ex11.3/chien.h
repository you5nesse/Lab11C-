#ifndef CHIEN_H
#define CHIEN_H

#include "Animal.h"

class Chien : public Animal {
public:
    void crier() const override {
        cout << "Wouf !" << endl;
    }
};

#endif
