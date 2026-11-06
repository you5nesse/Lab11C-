#ifndef NOEUDFICHIER_H
#define NOEUDFICHIER_H

#include <iostream>
#include <string>
using namespace std;

class NoeudFichier {
protected:
    string m_nom;

public:
    NoeudFichier(string n) {
        m_nom = n;
    }

    string nom() const {
        return m_nom;
    }

    virtual int taille() const = 0;

    virtual ~NoeudFichier() {}
};

#endif
