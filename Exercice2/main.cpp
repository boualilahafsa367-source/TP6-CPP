#include <iostream>
#include <iomanip>
#include "CompteEpargne.hpp"

using namespace std;

int main() {
    cout << "===== GESTION DU COMPTE EPARGNE =====" << endl;

    // Creation d'un compte epargne.
    CompteEpargne compte("MA-58421", 12500, 3.5);

    cout << "\n--- Informations initiales ---" << endl;
    compte.afficherSolde();

    // Effectuer un depot.
    cout << "\n--- Operation de depot ---" << endl;
    compte.deposer(1800);

    // Effectuer un retrait.
    cout << "\n--- Operation de retrait ---" << endl;
    compte.retirer(2300);

    // Afficher le solde apres les operations.
    cout << "\n--- Solde apres operations ---" << endl;
    compte.afficherSolde();

    // Calculer les interets.
    cout << "\n--- Calcul des interets ---" << endl;
    cout << fixed << setprecision(2);
    cout << "Interets : " << compte.calculerInteret()
         << " DH" << endl;

    return 0;
}