#include <stdio.h>

int main() {
    char origem[100], destino[100];
    char *pO = origem, *pD = destino;

    printf("Digite uma string: ");
    fgets(origem, 100, stdin);

    while (*pO != '\0') {
        *pD = *pO;
        pO++;
        pD++;
    }
    *pD = '\0';

    printf("String copiada: %s", destino);
    return 0;
}

