#ifndef FICHIER_H
#define FICHIER_H

#include "NoeudFichier.h"

class Fichier : public NoeudFichier {
private:
    int m_taille;

public:
    Fichier(string n, int t) : NoeudFichier(n) {
        m_taille = t;
    }

    int taille() const override {
        return m_taille;
    }
};

#endif
