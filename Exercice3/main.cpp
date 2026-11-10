#include <iostream>
#include <iomanip>
#include "ProduitAlimentaire.hpp"
#include "ProduitElectronique.hpp"

using namespace std;

int main() {
    cout << "===== GESTION DES PRODUITS =====" << endl;

    // Creation des objets derives.
    ProduitAlimentaire p1("Fromage artisanal", 68.0, "15/12/2026");
    ProduitElectronique p2("Casque Bluetooth", 640.0, 24);

    // Tableau de pointeurs vers la classe de base.
    Produit* produits[2];

    produits[0] = &p1;
    produits[1] = &p2;

    // Affichage polymorphique des produits.
    for (int i = 0; i < 2; i++) {
        cout << "\n--- Produit " << i + 1 << " ---" << endl;
        produits[i]->afficherInfos();
    }

    return 0;
}