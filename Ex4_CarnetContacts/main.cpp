#include "Contact.hpp"
#include <iostream>
using namespace std;

void supprimerContact(Contact** contacts, int& taille, const string& nom) {
    bool trouve = false;
    for (int i = 0; i < taille; i++) {
        if (contacts[i]->getNom() == nom) {
            delete contacts[i];
            trouve = true;

            for (int j = i; j < taille - 1; j++) {
                contacts[j] = contacts[j + 1];
            }
            contacts[taille - 1] = nullptr;
            taille--;
            break;
        }
    }
    if (!trouve) {
        cout << "Contact '" << nom << "' non trouvé !" << endl;
    }
}

int main() {
    int n;
    cout << "Combien de contacts voulez-vous ajouter ? ";
    cin >> n;

    Contact** carnet = new Contact*[n];
    int tailleActuelle = 0;

    for (int i = 0; i < n; i++) {
        string nom, tel, email;
        cin.ignore();
        cout << "\nContact " << i + 1 << " :" << endl;
        cout << "Nom : "; getline(cin, nom);
        cout << "Téléphone : "; getline(cin, tel);
        cout << "Email : "; getline(cin, email);

        carnet[i] = new Contact(nom, tel, email);
        tailleActuelle++;
    }

    cout << "\nListe des contacts :" << endl;
    for (int i = 0; i < tailleActuelle; i++) {
        carnet[i]->afficher();
    }

    string nomASupprimer;
    cout << "\nNom du contact à supprimer : ";
    getline(cin, nomASupprimer);
    supprimerContact(carnet, tailleActuelle, nomASupprimer);

    cout << "\nListe des contacts après suppression :" << endl;
    for (int i = 0; i < tailleActuelle; i++) {
        carnet[i]->afficher();
    }

    for (int i = 0; i < tailleActuelle; i++) {
        delete carnet[i];
    }
    delete[] carnet;
    carnet = nullptr;

    return 0;
}
