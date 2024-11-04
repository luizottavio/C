#include <stdio.h>
void main() {
    int n1, n2;

    printf("Digite um número: ");
    scanf("%i", &n1);
    printf("Digite outro número: ");
    scanf("%i", &n2);

    /*if (n1 > n2) {
        printf("O maior número é %i", n1);
    } else {
        if (n2 > n1) {
            printf("O maior número é %i", n2);
        } else {
            printf("Os números são iguais");
        }
    } */
    if (n1 > n2) {
        printf("O maior número é %i", n1);
    } else if (n1 < n2) {
        printf("O maior número é %i", n2);
    } else {
        printf("Os número são iguais");
    }
}
