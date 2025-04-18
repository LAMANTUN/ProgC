#include <stdio.h>

#define NOMBRE_ETUDIANTS 5
#define TAILLE_MAX 100

int main() {
    // Déclaration des tableaux
    char noms[NOMBRE_ETUDIANTS][TAILLE_MAX] = {
        "Dupont", "Martin", "Durand", "Leroy", "Bernard"
    };
    char prenoms[NOMBRE_ETUDIANTS][TAILLE_MAX] = {
        "Alice", "Jean", "Claire", "Luc", "Sophie"
    };
    char adresses[NOMBRE_ETUDIANTS][TAILLE_MAX] = {
        "12 rue de Paris", 
        "34 avenue Victor Hugo", 
        "78 boulevard Haussmann", 
        "90 rue Lafayette", 
        "56 place Bellecour"
    };

    float notes_prog[NOMBRE_ETUDIANTS] = {15.5, 12.0, 18.0, 10.5, 14.0};
    float notes_sys[NOMBRE_ETUDIANTS] = {14.0, 11.5, 17.0, 13.5, 16.0};

    // Affichage des informations
    printf("=== Informations des Étudiant.e.s ===\n\n");

    for (int i = 0; i < NOMBRE_ETUDIANTS; i++) {
        printf("Étudiant %d :\n", i + 1);
        printf("Nom : %s\n", noms[i]);
        printf("Prénom : %s\n", prenoms[i]);
        printf("Adresse : %s\n", adresses[i]);
        printf("Note en Programmation en C : %.2f\n", notes_prog[i]);
        printf("Note en Système d'exploitation : %.2f\n", notes_sys[i]);
        printf("--------------------------------------\n");
    }

    return 0;
}
