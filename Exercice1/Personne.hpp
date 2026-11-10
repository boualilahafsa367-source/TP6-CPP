#ifndef PERSONNE_HPP
#define PERSONNE_HPP

#include <string>

class Personne {
protected:
    std::string nom;
    int age;

public:
    Personne(const std::string& n, int a);

    void afficher() const;
};

#endif