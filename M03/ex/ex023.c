#include <stdio.h>
void main() {
    int num;

    printf("Me diga um número e eu te direi se \nele é POSITIVO, NEGATIVO ou NULO.");
    printf("\nDigite um número: ");
    scanf("%i", &num);

    if (num >= 1) {
        printf("\nO valor %i digitado é POSITIVO.\n", num);
    } else if (num < 0) {
        printf("\nO valor -%i digitado é NEGATIVO.\n");
    } else {
        printf("\nO valor %i digitado é NULO.\n");
    }
}
