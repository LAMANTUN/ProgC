#include <stdio.h>

// Structure représentant une couleur RGBA
struct Couleur {
    unsigned char r; // Rouge
    unsigned char g; // Vert
    unsigned char b; // Bleu
    unsigned char a; // Alpha
};

int main() {
    // Déclaration et initialisation de 10 couleurs
    struct Couleur couleurs[10] = {
        {0xef, 0x78, 0x12, 0xff}, // Couleur 1
        {0x2c, 0xc8, 0x64, 0xff}, // Couleur 2
        {0x00, 0x00, 0x00, 0x00}, // Couleur 3 (transparent)
        {0xff, 0x00, 0x00, 0xff}, // Couleur 4 (rouge opaque)
        {0x00, 0xff, 0x00, 0xff}, // Couleur 5 (vert opaque)
        {0x00, 0x00, 0xff, 0xff}, // Couleur 6 (bleu opaque)
        {0xff, 0xff, 0x00, 0x80}, // Couleur 7 (jaune, semi-transparent)
        {0xff, 0xa5, 0x00, 0xff}, // Couleur 8 (orange)
        {0x4b, 0x00, 0x82, 0xff}, // Couleur 9 (indigo)
        {0xee, 0x82, 0xee, 0xff}  // Couleur 10 (violet clair)
    };

    // Affichage des couleurs
    printf("=== Liste des Couleurs RGBA ===\n\n");

    for (int i = 0; i < 10; i++) {
        printf("Couleur %d :\n", i + 1);
        printf("Rouge : %d\n", couleurs[i].r);
        printf("Vert  : %d\n", couleurs[i].g);
        printf("Bleu  : %d\n", couleurs[i].b);
        printf("Alpha : %d\n", couleurs[i].a);
        printf("-------------------------\n");
    }

    return 0;
}
