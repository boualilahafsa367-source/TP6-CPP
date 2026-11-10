#include "ProduitAlimentaire.hpp"
#include <iostream>

// Initialise les attributs de Produit et la date d'expiration.
ProduitAlimentaire::ProduitAlimentaire(
    const std::string& n, double p, const std::string& date)
    : Produit(n, p), dateExpiration(date) {
}

// Redefinit l'affichage pour un produit alimentaire.
void ProduitAlimentaire::afficherInfos() const {
    std::cout << "Type : Produit alimentaire" << std::endl;
    Produit::afficherInfos();
    std::cout << "Date d'expiration : "
              << dateExpiration << std::endl;
}