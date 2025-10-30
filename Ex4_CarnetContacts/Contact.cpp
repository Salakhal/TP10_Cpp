#include "Contact.hpp"

Contact::Contact(string n, string t, string e) : nom(n), telephone(t), email(e) {}

void Contact::afficher() const {
    cout << "Nom : " << nom << ", Téléphone : " << telephone << ", Email : " << email << endl;
}

string Contact::getNom() const {
    return nom;
}
