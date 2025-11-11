#include <stdio.h>

int main() {
    char str1[100], str2[100];
    char *p1 = str1, *p2 = str2;

    printf("Digite a primeira string: ");
    fgets(str1, 100, stdin);
    printf("Digite a segunda string: ");
    fgets(str2, 100, stdin);

    while (*p1 != '\0' && *p1 != '\n') p1++;
    while (*p2 != '\0') {
        *p1 = *p2;
        p1++;
        p2++;
    }

    printf("String concatenada: %s", str1);
    return 0;
}
