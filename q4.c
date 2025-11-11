#include <stdio.h>

#define TAM 5

int main() {
    int v[TAM];
    int *p;
    int i;

    printf("Digite %d valores inteiros:\n", TAM);
    for (i = 0; i < TAM; i++) {
        scanf("%d", &v[i]);
    }

    p = v;
    for (i = 0; i < TAM; i++) {
        printf("v[%d] = %d\tEndereco: %p\n", i, *(p + i), (p + i));
    }

    return 0;
}
