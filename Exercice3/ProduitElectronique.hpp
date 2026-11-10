#ifndef PRODUIT_ELECTRONIQUE_HPP
#define PRODUIT_ELECTRONIQUE_HPP

#include "Produit.hpp"

class ProduitElectronique : public Produit {
private:
    int garantie;

public:
    ProduitElectronique(const std::string& n, double p, int g);

    void afficherInfos() const override;
};

#endif