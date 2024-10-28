#include <stdio.h>
void main() {
    int num1, num2;

    printf("Digite o primeiro valor: ");
    scanf("%i", &num1);
    printf("Digite o segundo valor: ");
    scanf("%i", &num2);

    printf("\n----- OPERAÇÕES BIWISE -----");

    int valor_e = num1 & num2;
    int valor_ou = num1 | num2;
    int valor_dis_ex = num1 ^ num2;

    printf("\nCalculando %i & %i é igual a %i", num1, num2, valor_e);
    printf("\nCalculando %i | %i é igual a %i", num1, num2, valor_ou);
    printf("\nCalculando %i ^ %i é igual a %i\n", num1, num2, valor_dis_ex);
}
