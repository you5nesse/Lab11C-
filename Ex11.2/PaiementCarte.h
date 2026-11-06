#ifndef PAIEMENTCARTE_H
#define PAIEMENTCARTE_H

#include <iostream>
#include "Paiement.h"

using namespace std;

class PaiementCarte : public Paiement {
public:
    void effectuerPaiement(double montant) override {
        cout << "Paiement de " << montant
             << " DH par carte bancaire." << endl;
    }
};

#endif
