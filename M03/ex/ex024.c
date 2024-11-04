#include <stdio.h>
void main() {
    int n1, n2;
    printf("Me diga dois números e eu colocarei \nos dois em ordem crescente.\n");

    printf("\nPrimeiro número: ");
    scanf("%i", &n1);
    printf("Segundo número: ");
    scanf("%i", &n2);


    if (n1 < n2) {
        printf("\nOs números em ordem são %i e %i", n1, n2);
    } else {
        printf("\nOs números em ordem são %i e %i", n2, n1);
    }
}
