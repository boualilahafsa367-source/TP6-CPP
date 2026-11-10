#ifndef PRODUIT_ALIMENTAIRE_HPP
#define PRODUIT_ALIMENTAIRE_HPP

#include "Produit.hpp"

class ProduitAlimentaire : public Produit {
private:
    std::string dateExpiration;

public:
    ProduitAlimentaire(const std::string& n, double p,
                       const std::string& date);

    void afficherInfos() const override;
};

#endif