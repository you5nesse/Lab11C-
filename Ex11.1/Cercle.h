#ifndef CERCLE_H
#define CERCLE_H

#include "Forme.h"

class Cercle : public Forme {
private:
    double rayon;

public:
    Cercle(double r) {
        rayon = r;
    }

    double aire() const override {
        return 3.14 * rayon * rayon;
    }
};

#endif
