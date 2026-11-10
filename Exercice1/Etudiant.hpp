#ifndef ETUDIANT_HPP
#define ETUDIANT_HPP

#include "Personne.hpp"

class Etudiant : public Personne {
private:
    std::string niveau;

public:
    Etudiant(const std::string& n, int a,
             const std::string& niv);

    void afficher() const;
};

#endif