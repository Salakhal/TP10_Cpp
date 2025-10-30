#include "Personne.hpp"
#include <iostream>
using namespace std;

int main() {
    string nom;
    int age;

    cout << "Saisir le nom de la personne : ";
    cin >> nom;
    cout << "Saisir l'age de la personne : ";
    cin >> age;

    Personne* p = new Personne(nom, age);

    cout << "\nInformations de la personne :" << endl;
    p->afficher();

    delete p;
    p = nullptr;

    return 0;
}
