#include "Personne.hpp"
#include <iostream>

// Initialise les informations communes à une personne.
Personne::Personne(const std::string& n, int a)
    : nom(n), age(a) {
}

// Affiche le nom et l'âge.
void Personne::afficher() const {
    std::cout << "Nom : " << nom << std::endl;
    std::cout << "Age : " << age << " ans" << std::endl;
}