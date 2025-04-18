#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAILLE 11

void afficher(int *t1, float *t2) {
    for (int i = 0; i < TAILLE; i++)
        printf("%d%s", *(t1 + i), i < TAILLE - 1 ? ", " : "\n");
    for (int i = 0; i < TAILLE; i++)
        printf("%.2f%s", *(t2 + i), i < TAILLE - 1 ? ", " : "\n");
}

int main() {
    int tabInt[TAILLE], *pInt = tabInt;
    float tabFloat[TAILLE], *pFloat = tabFloat;
    srand(time(NULL));

    for (int i = 0; i < TAILLE; i++) {
        *(pInt + i) = rand() % 101;
        *(pFloat + i) = (rand() % 1001) / 100.0;
    }

    printf("Avant :\n"); afficher(pInt, pFloat);

    for (int i = 0; i < TAILLE; i += 2) {
        *(pInt + i) *= 3;
        *(pFloat + i) *= 3;
    }

    printf("\nAprès :\n"); afficher(pInt, pFloat);
    return 0;
}
