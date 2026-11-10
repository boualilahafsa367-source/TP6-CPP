#include "Contractuel.hpp"

Contractuel::Contractuel(string n, int i, double salaire,
                         int duree, double taux)
    : Employe(n, i, salaire) {
    dureeContrat = duree;
    tauxHoraire = taux;
}

double Contractuel::calculerSalaireMensuel(int heures) const {
    if (heures < 0) {
        return 0;
    }

    return tauxHoraire * heures;
}

void Contractuel::afficherInfos() const {
    cout << "Type : Employe contractuel" << endl;

    // Afficher les informations héritées.
    Employe::afficherInfos();

    cout << "Duree du contrat : " << dureeContrat << " mois" << endl;
    cout << "Taux horaire : " << tauxHoraire << " DH" << endl;
}

Contractuel::~Contractuel() {
    cout << "Destruction de l'employe contractuel : " << nom << endl;
}