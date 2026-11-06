#ifndef PAIEMENTESPECE_H
#define PAIEMENTESPECE_H

#include <iostream>
#include "Paiement.h"

using namespace std;

class PaiementEspece : public Paiement {
public:
    void effectuerPaiement(double montant) override {
        cout << "Paiement de " << montant
             << " DH en especes." << endl;
    }
};

#endif
