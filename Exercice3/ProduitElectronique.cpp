#include "ProduitElectronique.hpp"
#include <iostream>

// Initialise les attributs de Produit et la garantie.
ProduitElectronique::ProduitElectronique(
    const std::string& n, double p, int g)
    : Produit(n, p), garantie(g) {
}

// Redefinit l'affichage pour un produit electronique.
void ProduitElectronique::afficherInfos() const {
    std::cout << "Type : Produit electronique" << std::endl;
    Produit::afficherInfos();
    std::cout << "Garantie : " << garantie
              << " mois" << std::endl;
}