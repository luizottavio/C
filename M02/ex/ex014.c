#include <stdio.h>
void main() {
    int num, des;

    printf("Digite um número: ");
    scanf("%i", &num);
    printf("Digite o deslocamento: ");
    scanf("%i", &des);

    printf("----- OPERAÇÃOES SHIFT -----");

    int right = num >> des;
    int left = num << des;

    printf("\nCalculando %i >> %i é igual a %i.", num, des, right);
    printf("\nCalculando %i << %i é igual a %i.\n", num, des, left);
}
