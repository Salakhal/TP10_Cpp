#ifndef LIVRE_HPP
#define LIVRE_HPP

#include <string>
#include <iostream>
using namespace std;

class Livre {
private:
    string titre;
    double prix;

public:
    Livre(string t = "", double p = 0.0);
    void afficher() const;
    void setTitre(const string& t);
    void setPrix(double p);
};

#endif
