#include <iostream>
#include "Forme.h"
#include "Cercle.h"
#include "Rectangle.h"

using namespace std;

int main() {

    Forme* formes[2];

    double rayon, longueur, largeur;

    cout << "Donner le rayon du cercle : ";
    cin >> rayon;

    formes[0] = new Cercle(rayon);

    cout << "Donner la longueur du rectangle : ";
    cin >> longueur;

    cout << "Donner la largeur du rectangle : ";
    cin >> largeur;

    formes[1] = new Rectangle(longueur, largeur);

    cout << "\n--- Les aires des formes ---" << endl;

    for (int i = 0; i < 2; i++) {
        cout << "Aire de la forme " << i + 1
             << " = " << formes[i]->aire() << endl;
    }

    for (int i = 0; i < 2; i++) {
        delete formes[i];
    }

    return 0;
}
