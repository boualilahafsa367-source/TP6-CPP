#include "Etudiant.hpp"
#include <iostream>

// Initialise d'abord la classe Personne, puis le niveau.
Etudiant::Etudiant(const std::string& n, int a,
                   const std::string& niv)
    : Personne(n, a), niveau(niv) {
}

// Affiche les informations complètes de l'étudiant.
void Etudiant::afficher() const {
    Personne::afficher();

    std::cout << "Niveau : " << niveau << std::endl;
}