#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>
#include <iostream>
using namespace std;

class Contact {
private:
    string nom;
    string telephone;
    string email;

public:
    Contact(string n, string t, string e);
    void afficher() const;
    string getNom() const;
};

#endif
