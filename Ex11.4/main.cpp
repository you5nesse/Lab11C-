
#include <iostream>
#include "NoeudFichier.h"
#include "Fichier.h"
#include "Dossier.h"

using namespace std;

// Creer un dossier et ses elements
Dossier* creerDossier() {

    string nom;
    int n;

    cout << "Nom du dossier : ";
    cin >> nom;

    Dossier* d = new Dossier(nom);

    cout << "Nombre d'elements : ";
    cin >> n;

    for (int i = 0; i < n; i++) {

        int choix;

        cout << "\n1. Ajouter un fichier" << endl;
        cout << "2. Ajouter un sous-dossier" << endl;
        cout << "Votre choix : ";
        cin >> choix;

        if (choix == 1) {

            string nomF;
            int t;

            cout << "Nom du fichier : ";
            cin >> nomF;

            cout << "Taille du fichier (Ko) : ";
            cin >> t;

            d->ajouter(new Fichier(nomF, t));
        }
        else if (choix == 2) {

            Dossier* sousDossier = creerDossier();

            d->ajouter(sousDossier);
        }
        else {
            cout << "Choix invalide !" << endl;
            i--;
        }
    }

    return d;
}

// Afficher la structure
void afficher(NoeudFichier* noeud, int niveau = 0) {

    for (int i = 0; i < niveau; i++) {
        cout << "   ";
    }

    cout << noeud->nom() << " ("
         << noeud->taille() << " Ko)" << endl;

    Dossier* d = dynamic_cast<Dossier*>(noeud);

    if (d != nullptr) {

        for (NoeudFichier* enfant : d->getEnfants()) {
            afficher(enfant, niveau + 1);
        }
    }
}

// Rechercher un dossier
Dossier* rechercher(Dossier* d, string nom) {

    if (d->nom() == nom) {
        return d;
    }

    for (NoeudFichier* enfant : d->getEnfants()) {

        Dossier* sousDossier = dynamic_cast<Dossier*>(enfant);

        if (sousDossier != nullptr) {

            Dossier* resultat = rechercher(sousDossier, nom);

            if (resultat != nullptr) {
                return resultat;
            }
        }
    }

    return nullptr;
}

int main() {

    cout << "===== CREATION DES DOSSIERS =====" << endl;

    Dossier* racine = creerDossier();

    cout << "\n===== STRUCTURE HIERARCHIQUE =====" << endl;

    afficher(racine);

    string nomRecherche;

    cout << "\nDonner le nom du dossier a selectionner : ";
    cin >> nomRecherche;

    Dossier* selection = rechercher(racine, nomRecherche);

    if (selection != nullptr) {

        cout << "\nDossier : " << selection->nom() << endl;

        cout << "Taille totale : "
             << selection->taille() << " Ko" << endl;
    }
    else {
        cout << "\nDossier introuvable !" << endl;
    }

    delete racine;

    return 0;
}
