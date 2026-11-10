#include <iostream>
#include "Employe.hpp"
#include "Permanent.hpp"
#include "Contractuel.hpp"

using namespace std;

int main() {

    // Création d'un tableau dynamique de 3 pointeurs Employe.
    Employe** employes = new Employe*[3];

    // Création des objets de différents types.
    employes[0] = new Permanent("Samira El Fassi", 73041, 9200, 14500);

    Contractuel* c1 = new Contractuel(
        "Imad Berrada", 73042, 0, 8, 82
    );

    employes[1] = c1;

    employes[2] = new Permanent("Hicham Amrani", 73043, 10500, 18000);

    // Affichage des informations des employés.
    cout << "===== GESTION DES EMPLOYES =====" << endl;

    for (int i = 0; i < 3; i++) {
        cout << "\n-----------------------------" << endl;
        employes[i]->afficherInfos();
    }

    // Calcul du salaire mensuel du contractuel pour 156 heures.
    cout << "\n===== CALCUL DU SALAIRE DU CONTRACTUEL =====" << endl;

    cout << "Salaire mensuel d'Imad : "
         << c1->calculerSalaireMensuel(156) << " DH" << endl;

    // Libération de chaque objet créé avec new.
    cout << "\n===== LIBERATION DE LA MEMOIRE =====" << endl;

    for (int i = 0; i < 3; i++) {
        delete employes[i];
    }

    // Libération du tableau dynamique lui-même.
    delete[] employes;

    return 0;
}