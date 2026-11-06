#include <iostream>
#include <vector>

#include "Animal.h"
#include "Chien.h"
#include "Chat.h"
#include "Vache.h"

using namespace std;

int main() {

    vector<Animal*> animaux;

    animaux.push_back(new Chien());
    animaux.push_back(new Chat());
    animaux.push_back(new Vache());


    for (int i = 0; i < animaux.size(); i++) {

        animaux[i]->info();

        animaux[i]->crier();

        cout << "////////" << endl;
    }

    // Libération de la mémoire
    for (int i = 0; i < animaux.size(); i++) {
        delete animaux[i];
    }

    return 0;
}
