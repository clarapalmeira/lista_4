#include <stdio.h>

#define TAM 10

int main() {
    int v[TAM] = {9, 4, 7, 1, 5, 3, 8, 2, 6, 0};
    int *p = v;
    int i, j, aux;

    for (i = 0; i < TAM - 1; i++) {
        for (j = 0; j < TAM - i - 1; j++) {
            if (*(p + j) > *(p + j + 1)) {
                aux = *(p + j);
                *(p + j) = *(p + j + 1);
                *(p + j + 1) = aux;
            }
        }
    }

    printf("Vetor ordenado: ");
    for (i = 0; i < TAM; i++)
        printf("%d ", *(p + i));

    printf("\n");
    return 0;
}
