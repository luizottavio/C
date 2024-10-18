#include <stdio.h>
void main() {
    int n1, n2;

    printf("Digite um número: ");
    scanf("%i", &n1);

    printf("Digite outro número: ");
    scanf("%i", &n2);

    int maior = (n1>n2)?n1:n2;
    int menor = (n1<n2)?n1:n2;

    printf("O MAIOR valor é %i", maior);
    printf("\nO MENOR valor é %i\n", menor);
}
