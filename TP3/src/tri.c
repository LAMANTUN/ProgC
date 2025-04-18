#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Fonction pour échanger deux éléments dans le tableau
void echanger(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Fonction de tri à bulles
void tri_bulles(int tableau[], int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (tableau[j] > tableau[j+1]) {
                echanger(&tableau[j], &tableau[j+1]);
            }
        }
    }
}

// Fonction pour afficher le tableau
void afficher_tableau(int tableau[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", tableau[i]);
    }
    printf("\n");
}

int main() {
    int tableau[100];
    int n = 100;

    // Initialiser le générateur de nombres aléatoires
    srand(time(NULL));

    // Remplir le tableau avec des entiers aléatoires entre -50 et 50
    for (int i = 0; i < n; i++) {
        tableau[i] = rand() % 101 - 50;  // Génère un nombre entre -50 et 50
    }

    // Afficher le tableau non trié
    printf("Tableau non trié :\n");
    afficher_tableau(tableau, n);

    // Trier le tableau
    tri_bulles(tableau, n);

    // Afficher le tableau trié
    printf("Tableau trié par ordre croissant :\n");
    afficher_tableau(tableau, n);

    return 0;
}
