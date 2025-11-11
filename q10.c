#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 7
#define TAM 14

int main() {
    int X[TAM], F[N] = {0};
    int *pX = X, *pF = F;
    int i;

    srand(time(NULL));

    for (i = 0; i < TAM; i++) {
        *(pX + i) = rand() % N;
    }

    for (i = 0; i < TAM; i++) {
        (*(pF + *(pX + i)))++;
    }

    printf("X = ");
    for (i = 0; i < TAM; i++) printf("%d ", *(pX + i));
    printf("\nF = ");
    for (i = 0; i < N; i++) printf("%d ", *(pF + i));
    printf("\n");

    return 0;
}

