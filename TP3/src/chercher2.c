#include <stdio.h>

#define N 10
#define MAX_LEN 100

int comparer(char *a, char *b) {
    int i = 0;
    while (a[i] != '\0' && b[i] != '\0') {
        if (a[i] != b[i]) {
            return 0; // chaînes différentes
        }
        i++;
    }
    // Si les deux se terminent en même temps, elles sont identiques
    return (a[i] == '\0' && b[i] == '\0');
}

int main() {
    char *phrases[N] = {
        "Bonjour, comment ça va ?",
        "Le temps est magnifique aujourd'hui.",
        "C'est une belle journée.",
        "La programmation en C est amusante.",
        "Les tableaux en C sont puissants.",
        "Les pointeurs en C peuvent être déroutants.",
        "Il fait beau dehors.",
        "La recherche dans un tableau est intéressante.",
        "Les structures de données sont importantes.",
        "Programmer en C, c'est génial."
    };

    char recherche[MAX_LEN];

    printf("Entrez la phrase à rechercher :\n");
    fgets(recherche, MAX_LEN, stdin);

    // Supprimer le saut de ligne si présent
    int i = 0;
    while (recherche[i] != '\0') {
        if (recherche[i] == '\n') {
            recherche[i] = '\0';
            break;
        }
        i++;
    }

    int trouvee = 0;
    for (i = 0; i < N; i++) {
        if (comparer(recherche, phrases[i])) {
            trouvee = 1;
            break;
        }
    }

    if (trouvee) {
        printf("Phrase trouvée.\n");
    } else {
        printf("Phrase non trouvée.\n");
    }

    return 0;
}
