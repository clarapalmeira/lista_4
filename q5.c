#include <stdio.h>

int main() {
    char str[100], *p = str;
    int tam = 0;

    printf("Digite uma string: ");
    fgets(str, 100, stdin);

    while (*p != '\0' && *p != '\n') {
        tam++;
        p++;
    }

    printf("Tamanho da string: %d\n", tam);
    return 0;
}
