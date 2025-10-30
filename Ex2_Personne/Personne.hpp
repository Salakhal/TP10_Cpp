#ifndef PERSONNE_HPP
#define PERSONNE_HPP

#include <string>
#include <iostream>
using namespace std;

class Personne {
private:
    string nom;
    int age;

public:
    Personne(string n, int a);
    void afficher() const;
};

#endif
