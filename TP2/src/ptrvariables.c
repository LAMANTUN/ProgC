#include <stdio.h>
#include <stdint.h>

int main() {
    // Déclaration des variables
    char c = 0x41;
    int i = 0xA47865FF;
    float f = 2.0f;

    // Pointeurs vers les variables
    char *pc = &c;
    int *pi = &i;
    float *pf = &f;

    // Union pour afficher le float en hexadécimal
    union { float f; uint32_t i; } uf;

    // Avant manipulation
    printf("Avant la manipulation :\n");
    printf("Adresse de c : %p, Valeur de c : %02x\n", (void*)pc, (unsigned char)*pc);
    printf("Adresse de i : %p, Valeur de i : %08x\n", (void*)pi, (unsigned int)*pi);
    uf.f = *pf;
    printf("Adresse de f : %p, Valeur de f : %08x\n", (void*)pf, uf.i);

    // Manipulation via les pointeurs
    *pc = 0x42;       // Modifier le caractère
    *pi -= 1;         // Décrémenter l'entier
    *pf = 1.0f;       // Modifier le float

    // Après manipulation
    printf("\nAprès la manipulation :\n");
    printf("Adresse de c : %p, Valeur de c : %02x\n", (void*)pc, (unsigned char)*pc);
    printf("Adresse de i : %p, Valeur de i : %08x\n", (void*)pi, (unsigned int)*pi);
    uf.f = *pf;
    printf("Adresse de f : %p, Valeur de f : %08x\n", (void*)pf, uf.i);

    return 0;
}
