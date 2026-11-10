#include "Employe.hpp"

Employe::Employe(string n, int i, double salaire) {
    nom = n;
    id = i;
    salaireDeBase = salaire;
}

void Employe::afficherInfos() const {
    cout << "Nom : " << nom << endl;
    cout << "Identifiant : " << id << endl;
    cout << "Salaire de base : " << salaireDeBase << " DH" << endl;
}

Employe::~Employe() {
    cout << "Destruction de l'employe : " << nom << endl;
}