#ifndef DOSSIER_H
#define DOSSIER_H

#include "NoeudFichier.h"
#include <vector>

class Dossier : public NoeudFichier {
private:
    vector<NoeudFichier*> enfants;

public:
    Dossier(string n) : NoeudFichier(n) {}

    void ajouter(NoeudFichier* element) {
        enfants.push_back(element);
    }

    int taille() const override {
        int total = 0;

        for (int i = 0; i < enfants.size(); i++) {
            total += enfants[i]->taille();
        }

        return total;
    }

    const vector<NoeudFichier*>& getEnfants() const {
        return enfants;
    }

    ~Dossier() {
        for (int i = 0; i < enfants.size(); i++) {
            delete enfants[i];
        }
    }
};

#endif
