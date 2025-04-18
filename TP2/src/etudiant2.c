#include <stdio.h>
#include <string.h>

#define NOMBRE_ETUDIANTS 5
#define TAILLE_MAX 100

// Définition de la structure Étudiant.e
struct Etudiant {
    char nom[TAILLE_MAX];
    char prenom[TAILLE_MAX];
    char adresse[TAILLE_MAX];
    float note_prog;
    float note_sys;
};

int main() {
    struct Etudiant etudiants[NOMBRE_ETUDIANTS];

    // Saisie des informations
    for (int i = 0; i < NOMBRE_ETUDIANTS; i++) {
        printf("=== Saisie des informations pour l'étudiant.e %d ===\n", i + 1);

        printf("Nom : ");
        fgets(etudiants[i].nom, TAILLE_MAX, stdin);
        etudiants[i].nom[strcspn(etudiants[i].nom, "\n")] = '\0'; // Retirer le saut de ligne

        printf("Prénom : ");
        fgets(etudiants[i].prenom, TAILLE_MAX, stdin);
        etudiants[i].prenom[strcspn(etudiants[i].prenom, "\n")] = '\0';

        printf("Adresse : ");
        fgets(etudiants[i].adresse, TAILLE_MAX, stdin);
        etudiants[i].adresse[strcspn(etudiants[i].adresse, "\n")] = '\0';

        printf("Note en Programmation en C : ");
        scanf("%f", &etudiants[i].note_prog);

        printf("Note en Système d'exploitation : ");
        scanf("%f", &etudiants[i].note_sys);

        while(getchar() != '\n'); // Vider le tampon

        printf("--------------------------------------\n");
    }

    // Affichage des informations
    printf("\n=== Informations des Étudiant.e.s ===\n\n");

    for (int i = 0; i < NOMBRE_ETUDIANTS; i++) {
        printf("Étudiant.e %d :\n", i + 1);
        printf("Nom : %s\n", etudiants[i].nom);
        printf("Prénom : %s\n", etudiants[i].prenom);
        printf("Adresse : %s\n", etudiants[i].adresse);
        printf("Note en Programmation en C : %.2f\n", etudiants[i].note_prog);
        printf("Note en Système d'exploitation : %.2f\n", etudiants[i].note_sys);
        printf("--------------------------------------\n");
    }

    return 0;
}
