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
    scanf("%s", &opcao);
    printf("%s", opcao);



    switch (opcao) {
    case 1:
        printf("O resultado de %i + %i é igual a %i", n1, n1, n1+n2);
        break;

    default:
        printf("Erro!");
    }

}
