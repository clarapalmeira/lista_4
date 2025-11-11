#include <stdio.h>

int main() {
    char str[100], ch, *p = str;
    int encontrado = 0;

    printf("Digite uma string: ");
    fgets(str, 100, stdin);
    printf("Digite o caractere a buscar: ");
    scanf("%c", &ch);

    while (*p != '\0') {
        if (*p == ch) {
            encontrado = 1;
            break;
        }
        p++;
    }

    if (encontrado)
        printf("O caractere '%c' foi encontrado.\n", ch);
    else
        printf("O caractere '%c' nao foi encontrado.\n", ch);

    return 0;
}
