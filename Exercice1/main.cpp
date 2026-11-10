#include <iostream>
#include "Etudiant.hpp"

using namespace std;

int main() {
    cout << "===== INFORMATIONS DE L'ETUDIANT ====="
         << endl;

    Etudiant e1("Lina El Mansouri", 22, "Master 1 - IA");

    e1.afficher();

    return 0;
}