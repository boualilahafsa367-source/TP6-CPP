#ifndef COMPTE_HPP
#define COMPTE_HPP

#include <string>

class Compte {
protected:
    std::string numero;
    double solde;

public:
    Compte(const std::string& num, double s);

    void deposer(double montant);
    void retirer(double montant);
    void afficherSolde() const;
};

#endif