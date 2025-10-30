#include "Personne.hpp"

Personne::Personne(string n, int a) : nom(n), age(a) {}

void Personne::afficher() const {
    cout << "Nom : " << nom << endl;
    cout << "Age : " << age << endl;
}
