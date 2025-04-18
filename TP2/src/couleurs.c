#include <stdio.h>

// Définition de la structure RGBA
typedef struct {
    unsigned char rouge;
    unsigned char vert;
    unsigned char bleu;
    unsigned char alpha;
} Couleur;

int main() {
    // Tableau de 10 couleurs RGBA
    Couleur couleurs[10] = {
        {0xef, 0x78, 0x12, 0xff}, // Couleur 1
        {0x2c, 0xc8, 0x64, 0xff}, // Couleur 2
        {0x00, 0x00, 0x00, 0xff}, // Noir
        {0xff, 0xff, 0xff, 0xff}, // Blanc
        {0xff, 0x00, 0x00, 0xff}, // Rouge
        {0x00, 0xff, 0x00, 0xff}, // Vert
        {0x00, 0x00, 0xff, 0xff}, // Bleu
        {0xff, 0xff, 0x00, 0xff}, // Jaune
        {0x00, 0xff, 0xff, 0xff}, // Cyan
        {0xff, 0x00, 0xff, 0xff}  // Magenta
    };

    // Affichage des couleurs
    for (int i = 0; i < 10; i++) {
        printf("Couleur %d :\n", i + 1);
        printf("Rouge : %d\n", couleurs[i].rouge);
        printf("Vert  : %d\n", couleurs[i].vert);
        printf("Bleu  : %d\n", couleurs[i].bleu);
        printf("Alpha : %d\n\n", couleurs[i].alpha);
    }

    return 0;
}
