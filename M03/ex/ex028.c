#include <stdio.h>
void main() {
    int n1, n2;
    printf("VALOR 1 = ");
    scanf("%i", &n1);
    printf("VALOR 2 = ");
    scanf("%i", &n2);
    printf("%i %i", n1, n2);

    printf("===============\n");
    printf("+ Adição\n");
    printf("- Subtração\n");
    printf("* Multiplicação\n");
    printf("/ Divisão\n");
    printf("===============\n");

    char opcao;
    printf("Digite sua opção => ");
    scanf(" %c", &opcao);

    switch (opcao) {
        case '+':
            printf("O resultado de %i + %i é igual a %i", n1, n2, n1 + n2);
            break;
        case '-':
            printf("O resultado de %i - %i é igual a %i", n1, n2, n1 - n2);
            break;
        case '*':
            printf("O resultado de %i * %i é igual a %i", n1, n2, n1 * n2);
            break;
        case '/':
            printf("O resultado de %i / %i é igual a %i", n1, n2, n1 / n2);
            break;

        default:
            printf("ERRO função não definida!\n");
    }

}
