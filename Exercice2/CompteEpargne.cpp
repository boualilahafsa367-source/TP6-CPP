#include "CompteEpargne.hpp"
#include <iostream>

// Initialise le compte de base et le taux d'interet.
CompteEpargne::CompteEpargne(const std::string& num,
                             double s, double taux)
    : Compte(num, s), tauxInteret(taux) {
}

// Calcule le montant des interets selon le solde et le taux.
double CompteEpargne::calculerInteret() const {
    return solde * tauxInteret / 100;
}