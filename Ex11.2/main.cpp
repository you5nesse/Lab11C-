#include <iostream>
#include "Paiement.h"
#include "PaiementCarte.h"
#include "PaiementEspece.h"

using namespace std;

int main() {


    Paiement* paiements[4];

    paiements[0] = new PaiementCarte();
    paiements[1] = new PaiementEspece();
    paiements[2] = new PaiementCarte();
    paiements[3] = new PaiementEspece();

    double montants[4] = {200, 150, 500, 100};

    cout << "----- Simulation des paiements -----" << endl;

    for (int i = 0; i < 4; i++) {
        paiements[i]->effectuerPaiement(montants[i]);
    }

    // Libération de la mémoire
    for (int i = 0; i < 4; i++) {
        delete paiements[i];
    }

    return 0;
}
