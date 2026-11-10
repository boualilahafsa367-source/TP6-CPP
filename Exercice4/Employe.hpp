#ifndef EMPLOYE_HPP
#define EMPLOYE_HPP

#include <iostream>
#include <string>
using namespace std;

class Employe {
protected:
    string nom;
    int id;
    double salaireDeBase;

public:
    Employe(string n, int i, double salaire);

    virtual void afficherInfos() const;

    // Destructeur virtuel pour permettre une destruction correcte
    // des objets dérivés à travers un pointeur Employe.
    virtual ~Employe();
};

#endif