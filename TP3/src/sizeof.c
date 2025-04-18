#include <stdio.h>

int main() {
    // Affichage de la taille des types de données de base
    printf("La taille de int est : %zu octets\n", sizeof(int));
    printf("La taille de char est : %zu octets\n", sizeof(char));
    printf("La taille de float est : %zu octets\n", sizeof(float));
    printf("La taille de double est : %zu octets\n", sizeof(double));

    // Affichage de la taille des types de pointeurs
    printf("La taille de int* est : %zu octets\n", sizeof(int*));
    printf("La taille de int** est : %zu octets\n", sizeof(int**));
    printf("La taille de char* est : %zu octets\n", sizeof(char*));
    printf("La taille de char** est : %zu octets\n", sizeof(char**));
    printf("La taille de char*** est : %zu octets\n", sizeof(char***));
    printf("La taille de float* est : %zu octets\n", sizeof(float*));
    printf("La taille de float** est : %zu octets\n", sizeof(float**));
    printf("La taille de float*** est : %zu octets\n", sizeof(float***));

    return 0;
}
