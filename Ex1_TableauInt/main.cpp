#include <iostream>
using namespace std;

int main() {
    int taille;
    cout << "Saisir la taille du tableau : ";
    cin >> taille;

    int* tableau = new int[taille];

    cout << "Saisir les " << taille << " valeurs du tableau :" << endl;
    for (int i = 0; i < taille; i++) {
        cout << "Valeur " << i + 1 << " : ";
        cin >> tableau[i];
    }

    cout << "Les valeurs saisies sont : ";
    for (int i = 0; i < taille; i++) {
        cout << tableau[i] << " ";
    }
    cout << endl;

    delete[] tableau;
    tableau = nullptr;

    return 0;
}
