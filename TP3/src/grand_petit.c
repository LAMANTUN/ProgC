#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Déclaration du tableau de 100 entiers
    int tableau[100];
    
    // Initialisation de la génération de nombres aléatoires
    srand(time(NULL));

    // Remplissage du tableau avec des nombres aléatoires entre 1 et 1000
    for (int i = 0; i < 100; i++) {
        tableau[i] = rand() % 1000 + 1; // génère un nombre entre 1 et 1000
    }

    // Initialisation des variables pour le plus grand et le plus petit nombre
    int max = tableau[0];
    int min = tableau[0];

    // Parcours du tableau pour trouver le plus grand et le plus petit nombre
    for (int i = 1; i < 100; i++) {
        if (tableau[i] > max) {
            max = tableau[i];
        }
        if (tableau[i] < min) {
            min = tableau[i];
        }
    }

    // Affichage des résultats
    printf("Le numéro le plus grand est : %d\n", max);
    printf("Le numéro le plus petit est : %d\n", min);

    return 0;
}
