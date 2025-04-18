#include <stdio.h>
#include <stdint.h>

int main() {
    // Déclaration des variables
    char c = 'A';
    short s = 100;
    int i = 123456;
    long int li = 123456789L;
    long long int lli = 9876543210LL;
    float f = 2.0f;
    double d = 3.141592;
    long double ld = 1.23456789L;

    // Pointeurs
    char *pc = &c;
    short *ps = &s;
    int *pi = &i;
    long int *pli = &li;
    long long int *plli = &lli;
    float *pf = &f;
    double *pd = &d;
    long double *pld = &ld;

    // Affichage avant manipulation
    printf("=== Avant manipulation ===\n");
    printf("Adresse de c  : %p, Valeur : 0x%02x\n", (void*)pc, *pc & 0xFF);
    printf("Adresse de s  : %p, Valeur : 0x%04x\n", (void*)ps, *ps & 0xFFFF);
    printf("Adresse de i  : %p, Valeur : 0x%08x\n", (void*)pi, *pi);
    printf("Adresse de li : %p, Valeur : 0x%08lx\n", (void*)pli, *pli);
    printf("Adresse de lli: %p, Valeur : 0x%016llx\n", (void*)plli, *plli);

    printf("Adresse de f  : %p, Valeur : 0x%08x\n", (void*)pf, *(uint32_t*)pf);
    printf("Adresse de d  : %p, Valeur : 0x%016llx\n", (void*)pd, *(uint64_t*)pd);
    printf("Adresse de ld : %p, Valeur : (hex non portable)\n", (void*)pld);

    // Manipulations
    *pc = 'B';
    *ps += 1;
    *pi -= 1;
    *pli += 1000;
    *plli -= 10;
    *pf = 1.0f;
    *pd = 2.718281;
    *pld = 0.987654321L;

    // Affichage après manipulation
    printf("\n=== Après manipulation ===\n");
    printf("Adresse de c  : %p, Valeur : 0x%02x\n", (void*)pc, *pc & 0xFF);
    printf("Adresse de s  : %p, Valeur : 0x%04x\n", (void*)ps, *ps & 0xFFFF);
    printf("Adresse de i  : %p, Valeur : 0x%08x\n", (void*)pi, *pi);
    printf("Adresse de li : %p, Valeur : 0x%08lx\n", (void*)pli, *pli);
    printf("Adresse de lli: %p, Valeur : 0x%016llx\n", (void*)plli, *plli);

    printf("Adresse de f  : %p, Valeur : 0x%08x\n", (void*)pf, *(uint32_t*)pf);
    printf("Adresse de d  : %p, Valeur : 0x%016llx\n", (void*)pd, *(uint64_t*)pd);
    printf("Adresse de ld : %p, Valeur : (hex non portable)\n", (void*)pld);

    return 0;
}
