#ifndef COMPTE_EPARGNE_HPP
#define COMPTE_EPARGNE_HPP

#include "Compte.hpp"

class CompteEpargne : public Compte {
private:
    double tauxInteret;

public:
    CompteEpargne(const std::string& num, double s, double taux);

    double calculerInteret() const;
};

#endif