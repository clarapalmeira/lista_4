#include <stdio.h>

int main() {
    int a, b, soma;
    int *p1, *p2, *pSoma;

    printf("Digite o primeiro numero: ");
    scanf("%d", &a);

    printf("Digite o segundo numero: ");
    scanf("%d", &b);

    
    p1 = &a;
    p2 = &b;
    pSoma = &soma;

    *pSoma = *p1 + *p2; 

    printf("\nSoma: %d\n", *pSoma);
    printf("Endereco da soma: %p\n", (void*)pSoma);

    return 0;
}
