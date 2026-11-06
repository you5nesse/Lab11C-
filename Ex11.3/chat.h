#ifndef CHAT_H
#define CHAT_H

#include "Animal.h"

class Chat : public Animal {
public:
    void crier() const override {
        cout << "Miaou !" << endl;
    }
};

#endif
