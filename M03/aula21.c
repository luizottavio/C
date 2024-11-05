#include <stdio.h>
void main() {
    int n;
    printf("Digite um número: ");
    scanf("%i", &n);

    switch (n) {
    case 1:
        printf("um");
        break;
    case 2:
        printf("Dois");
        break;
    case 3:
        printf("Três");
        break;
    case 4:
        printf("Quatro");
        break;
    default:
        printf("Erro!");
    }
    printf("\nACABOU!\n");

}
