# TP10 : Gestion dynamique de la mémoire et pointeurs en C++


## la structure de projet :
```
TP10/
│
├── Ex1_TableauInt/
│   └── main.cpp
│
├── Ex2_Personne/
│   ├── Personne.hpp
│   ├── Personne.cpp
│   └── main.cpp
│
├── Ex3_Livre/
│   ├── Livre.hpp
│   ├── Livre.cpp
│   └── main.cpp
│
└── Ex4_CarnetContacts/
    ├── Contact.hpp
    ├── Contact.cpp
    └── main.cpp
```


## Exercice 1 : Création dynamique d’un tableau d’entiers

**Objectifs :**  
- Maîtriser l’allocation dynamique avec `new[]` et `delete[]`.  
- Comprendre la gestion manuelle de la mémoire.  

**Énoncé :**  
Demander à l’utilisateur la taille d’un tableau d’entiers, allouer dynamiquement ce tableau, permettre la saisie des valeurs, afficher les valeurs, puis libérer la mémoire.  


 ## Exemple de sortie :
```
 Saisir la taille du tableau : 3
Saisir les 3 valeurs du tableau :
Valeur 1 : 10
Valeur 2 : 20
Valeur 3 : 30
Les valeurs saisies sont : 10 20 30

```

## Exercice 2 : Gestion dynamique d’un objet

**Objectifs :**  
- Comprendre l’utilisation des pointeurs pour les objets.  
- Appliquer le constructeur pour initialiser un objet dynamique.  

**Énoncé :**  
Créer une classe `Personne` avec les attributs `nom` (chaîne) et `age` (int).  
Dans le `main` :  
1. Allouer dynamiquement un objet `Personne` avec `new`.  
2. Initialiser ses attributs via le constructeur.  
3. Afficher les informations de la personne.  
4. Libérer la mémoire avec `delete`.

## Exemple de sortie :

```
Saisir le nom de la personne : Salma
Saisir l'age de la personne : 21
Informations de la personne :
Nom : Salma
Age : 21

```

## Exercice 3 : Tableau dynamique d’objets

**Objectifs :**  
- Combiner allocation dynamique avec des objets utilisateurs.  
- Approfondir la manipulation des pointeurs et tableaux.  

**Énoncé :**  
Créer une classe `Livre` avec les attributs `titre` et `prix`.  
Dans le `main` :  
1. Demander combien de livres l’utilisateur veut créer.  
2. Allouer dynamiquement un tableau de `Livre` avec `new`.  
3. Remplir chaque élément avec les données saisies par l’utilisateur.  
4. Afficher tous les livres.  
5. Libérer la mémoire avec `delete[]`.

## Exemple de sortie :
```
Combien de livres voulez-vous créer ? 2
Livre 1 :
Titre : Le Petit Prince
Prix : 45.5
Livre 2 :
Titre : L'Alchimiste
Prix : 60
Liste des livres saisis :
Titre : Le Petit Prince, Prix : 45.5 DH
Titre : L'Alchimiste, Prix : 60 DH

```

## Exercice 4 : Gestion d’un carnet d’adresses (niveau avancé)

**Objectifs :**  
- Gérer un tableau dynamique de pointeurs sur objets.  
- Implémenter des fonctions de manipulation mémoire complexes.  
- Comprendre les risques de fuite mémoire et comment les éviter.  

**Énoncé :**  
Créer une classe `Contact` avec les attributs `nom`, `téléphone` et `email`.  
Dans le `main` :  
1. Créer dynamiquement un carnet (tableau de pointeurs sur `Contact`).  
2. Ajouter des contacts un par un avec `new`.  
3. Afficher tous les contacts.  
4. Supprimer un contact donné (par nom).  
5. Libérer toute la mémoire utilisée avec `delete` et `delete[]`.
   
 ## Exemple de sortie :
```
Combien de contacts voulez-vous ajouter ? 2
Contact 1 :
Nom : Salma
Téléphone : 0600000000
Email : salma@email.com
Contact 2 :
Nom : Ahmed
Téléphone : 0611111111
Email : ahmed@email.com

Liste des contacts :
Nom : Salma, Téléphone : 0600000000, Email : salma@email.com
Nom : Ahmed, Téléphone : 0611111111, Email : ahmed@email.com

Nom du contact à supprimer : Salma

Liste des contacts après suppression :
Nom : Ahmed, Téléphone : 0611111111, Email : ahmed@email.com

```
