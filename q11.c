#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 7
#define TAM 14

int main() {
    int X[TAM], Y[TAM], M[N][N] = {0};
    int i, j;

    srand(time(NULL));

    for (i = 0; i < TAM; i++) {
        X[i] = rand() % N;
        Y[i] = rand() % N;
    }

    for (i = 0; i < TAM; i++) {
        M[X[i]][Y[i]]++;
    }

    printf("Matriz de coocorrencia:\n");
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++)
            printf("%d ", M[i][j]);
        printf("\n");
    }

    return 0;
}
