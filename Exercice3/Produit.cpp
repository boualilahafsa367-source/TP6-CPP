#include "Produit.hpp"
#include <iostream>

// Initialise le nom et le prix du produit.
Produit::Produit(const std::string& n, double p)
    : nom(n), prix(p) {
}

// Affiche les informations generales d'un produit.
void Produit::afficherInfos() const {
    std::cout << "Nom : " << nom << std::endl;
    std::cout << "Prix : " << prix << " DH" << std::endl;
}

// Definition du destructeur virtuel.
Produit::~Produit() {
}