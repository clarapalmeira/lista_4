#include <stdio.h>

int main() {
    int num, menor, *pMenor = &menor;
    int primeiro = 1;

    printf("Digite numeros (0 para parar):\n");
    while (1) {
        scanf("%d", &num);
        if (num == 0) break;
        if (primeiro) {
            *pMenor = num;
            primeiro = 0;
        } else if (num < *pMenor) {
            *pMenor = num;
        }
    }

    printf("Menor valor: %d\n", *pMenor);
    return 0;
}
