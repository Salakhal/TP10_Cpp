#include "Livre.hpp"
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Combien de livres voulez-vous créer ? ";
    cin >> n;

    Livre* livres = new Livre[n];

    for (int i = 0; i < n; i++) {
        string titre;
        double prix;
        cin.ignore();
        cout << "\nLivre " << i + 1 << " :" << endl;
        cout << "Titre : ";
        getline(cin, titre);
        cout << "Prix : ";
        cin >> prix;

        livres[i].setTitre(titre);
        livres[i].setPrix(prix);
    }

    cout << "\nListe des livres saisis :" << endl;
    for (int i = 0; i < n; i++) {
        livres[i].afficher();
    }

    delete[] livres;
    livres = nullptr;

    return 0;
}
