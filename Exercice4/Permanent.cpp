#include "Permanent.hpp"

Permanent::Permanent(string n, int i, double salaire, double prime)
    : Employe(n, i, salaire) {
    primeAnnuelle = prime;
}

void Permanent::afficherInfos() const {
    cout << "Type : Employe permanent" << endl;

    // Afficher les informations héritées de la classe Employe.
    Employe::afficherInfos();

    cout << "Prime annuelle : " << primeAnnuelle << " DH" << endl;
}

Permanent::~Permanent() {
    cout << "Destruction de l'employe permanent : " << nom << endl;
}