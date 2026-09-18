#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void Assegna(int *m, int a, int b) {
    srand (time(NULL));
    int n = rand()%100;
    for (int i = 0; i < a; i++)
        for (int j = 0; j < b; j++) {
            m[i * b + j] = n;
            n = rand()%100;
        }
}

void StampaMatrice(int *m, int a, int b) {
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            printf("%d ", m[i * b + j]);
        }
        printf("\n");
    }
}

void StampaSomme(int *m, int a, int b) {
    int somma = 0;
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            somma += m[i * b + j];
        }
        printf("\nLa somma nella riga %d e': %d", ++i, somma);
        i--;
        somma = 0;
    }
}

int main(void) {

    printf("Scrivi il primo numero per creare una matrice: ");
    int a, b;
    scanf("%d", &a);
    printf("\nInserisci il secondo numero: ");
    scanf("%d", &b);
    int *m = malloc(sizeof(int)* a * b);
    m[a * b];

    Assegna(m, a, b);
    StampaMatrice(m, a, b);
    StampaSomme(m, a, b);

    free(m);
    return 0;
}