#include "Compte.hpp"
#include <iostream>

// Initialise le numero et le solde du compte.
Compte::Compte(const std::string& num, double s)
    : numero(num), solde(s) {
}

// Ajoute un montant au solde si celui-ci est valide.
void Compte::deposer(double montant) {
    if (montant > 0) {
        solde += montant;
        std::cout << "Depot effectue : " << montant << " DH" << std::endl;
    } else {
        std::cout << "Montant de depot invalide." << std::endl;
    }
}

// Retire un montant si le solde est suffisant.
void Compte::retirer(double montant) {
    if (montant <= 0) {
        std::cout << "Montant de retrait invalide." << std::endl;
    } else if (montant > solde) {
        std::cout << "Solde insuffisant." << std::endl;
    } else {
        solde -= montant;
        std::cout << "Retrait effectue : " << montant << " DH" << std::endl;
    }
}

// Affiche le numero et le solde actuel.
void Compte::afficherSolde() const {
    std::cout << "Numero du compte : " << numero << std::endl;
    std::cout << "Solde actuel : " << solde << " DH" << std::endl;
}