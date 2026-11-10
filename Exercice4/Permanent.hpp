#ifndef PERMANENT_HPP
#define PERMANENT_HPP

#include "Employe.hpp"

class Permanent : public Employe {
private:
    double primeAnnuelle;

public:
    Permanent(string n, int i, double salaire, double prime);

    void afficherInfos() const override;

    ~Permanent();
};

#endif