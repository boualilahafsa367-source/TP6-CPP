#ifndef PRODUIT_HPP
#define PRODUIT_HPP

#include <string>

class Produit {
protected:
    std::string nom;
    double prix;

public:
    Produit(const std::string& n, double p);

    virtual void afficherInfos() const;

    // Destructeur virtuel pour une destruction correcte
    // des objets derives a travers un pointeur Produit.
    virtual ~Produit();
};

#endif