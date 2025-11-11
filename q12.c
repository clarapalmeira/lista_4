#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 7
#define TAM 14

int main() {
    int X[TAM], Y[TAM], M[N][N] = {0};
    int i, j, r;

    srand(time(NULL));

    for (i = 0; i < TAM; i++) {
        X[i] = rand() % N;
        r = rand() % 10 + 1;

        if (r <= 3) Y[i] = X[i];
        else if (r <= 5) Y[i] = X[i] - 1;
        else if (r <= 7) Y[i] = X[i] + 1;
        else if (r <= 9) Y[i] = X[i] - 2;
        else Y[i] = X[i] + 2;

        if (Y[i] < 0) Y[i] = 0;
        if (Y[i] >= N) Y[i] = N - 1;
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
