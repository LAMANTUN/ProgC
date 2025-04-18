#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

#define TAILLE 100

// Structure pour une couleur RGBA
typedef struct {
    unsigned char r, g, b, a;
} Couleur;

// Structure pour stocker une couleur distincte et son compteur
typedef struct {
    Couleur couleur;
    int occurrences;
} CouleurComptee;

// Comparaison de deux couleurs
bool sont_egales(Couleur c1, Couleur c2) {
    return (c1.r == c2.r && c1.g == c2.g && c1.b == c2.b && c1.a == c2.a);
}

// Affichage d'une couleur
void afficher_couleur(Couleur c) {
    printf("%02x 0x%02x 0x%02x 0x%02x", c.r, c.g, c.b, c.a);
}

int main() {
    Couleur tableau[TAILLE];
    CouleurComptee distinctes[TAILLE];
    int nb_distinctes = 0;

    // Initialiser les couleurs aléatoirement (exemple)
    srand(time(NULL));
    for (int i = 0; i < TAILLE; i++) {
        tableau[i].r = rand() % 256;
        tableau[i].g = rand() % 256;
        tableau[i].b = rand() % 256;
        tableau[i].a = 0xff; // Alpha constant pour l'exemple
    }

    // Compter les couleurs distinctes
    for (int i = 0; i < TAILLE; i++) {
        bool trouve = false;
        for (int j = 0; j < nb_distinctes; j++) {
            if (sont_egales(tableau[i], distinctes[j].couleur)) {
                distinctes[j].occurrences++;
                trouve = true;
                break;
            }
        }
        if (!trouve) {
            distinctes[nb_distinctes].couleur = tableau[i];
            distinctes[nb_distinctes].occurrences = 1;
            nb_distinctes++;
        }
    }

    // Affichage des résultats
    printf("Couleurs distinctes et leurs occurrences :\n");
    for (int i = 0; i < nb_distinctes; i++) {
        afficher_couleur(distinctes[i].couleur);
        printf(" : %d\n", distinctes[i].occurrences);
    }

    return 0;
}
