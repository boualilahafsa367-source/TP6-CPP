#ifndef CONTRACTUEL_HPP
#define CONTRACTUEL_HPP

#include "Employe.hpp"

class Contractuel : public Employe {
private:
    int dureeContrat;
    double tauxHoraire;

public:
    Contractuel(string n, int i, double salaire,
                int duree, double taux);

    double calculerSalaireMensuel(int heures) const;

    void afficherInfos() const override;

    ~Contractuel();
};

#endif