#include <stdio.h>

#define SIZE 100

// Fonction de recherche dichotomique
int recherche_dichotomique(int tableau[], int taille, int valeur) {
    int gauche = 0, droite = taille - 1;

    while (gauche <= droite) {
        int milieu = gauche + (droite - gauche) / 2;

        // Si l'élément est trouvé
        if (tableau[milieu] == valeur) {
            return 1;  // élément trouvé
        }

        // Si l'élément est plus petit que celui du milieu
        if (tableau[milieu] > valeur) {
            droite = milieu - 1;
        }
        // Si l'élément est plus grand que celui du milieu
        else {
            gauche = milieu + 1;
        }
    }

    // Si l'élément n'est pas trouvé
    return 0;
}

int main() {
    // Initialisation du tableau trié
    int tableau[SIZE];
    for (int i = 0; i < SIZE; i++) {
        tableau[i] = i * 2 - 2;  // Exemple de tableau trié (des entiers pairs)
    }

    // Affichage du tableau trié
    printf("Tableau trié :\n");
    for (int i = 0; i < SIZE; i++) {
        printf("%d ", tableau[i]);
    }
    printf("\n");

    // Demander à l'utilisateur l'entier à rechercher
    int valeur;
    printf("Entrez l'entier que vous souhaitez chercher : ");
    scanf("%d", &valeur);

    // Appel de la fonction de recherche dichotomique
    if (recherche_dichotomique(tableau, SIZE, valeur)) {
        printf("Entier présent\n");
    } else {
        printf("Entier absent\n");
    }

    return 0;
}
