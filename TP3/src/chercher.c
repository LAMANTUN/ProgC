#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAILLE 100

// Fonction pour afficher le tableau
void afficherTableau(int tableau[], int taille) {
    for (int i = 0; i < taille; i++) {
        printf("%d ", tableau[i]);
    }
    printf("\n");
}

// Fonction pour rechercher un entier dans le tableau
int rechercherEntier(int tableau[], int taille, int valeur) {
    for (int i = 0; i < taille; i++) {
        if (tableau[i] == valeur) {
            return 1; // Entier trouvé
        }
    }
    return 0; // Entier non trouvé
}

int main() {
    int tableau[TAILLE];
    int valeurRecherchee;

    // Initialisation de la génération de nombres aléatoires
    srand(time(NULL));

    // Remplir le tableau avec des entiers aléatoires entre -10 et 10
    for (int i = 0; i < TAILLE; i++) {
        tableau[i] = rand() % 21 - 10; // Valeurs entre -10 et 10
    }

    // Affichage du tableau
    printf("Tableau :\n");
    afficherTableau(tableau, TAILLE);

    // Demander à l'utilisateur d'entrer un entier à chercher
    printf("Entrez l'entier que vous souhaitez chercher : ");
    scanf("%d", &valeurRecherchee);

    // Rechercher l'entier dans le tableau
    if (rechercherEntier(tableau, TAILLE, valeurRecherchee)) {
        printf("Résultat : entier présent\n");
    } else {
        printf("Résultat : entier absent\n");
    }

    return 0;
}
