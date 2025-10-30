#include "Livre.hpp"

Livre::Livre(string t, double p) : titre(t), prix(p) {}

void Livre::afficher() const {
    cout << "Titre : " << titre << ", Prix : " << prix << " DH" << endl;
}

void Livre::setTitre(const string& t) {
    titre = t;
}

void Livre::setPrix(double p) {
    prix = p;
}
