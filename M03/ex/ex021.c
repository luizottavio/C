#include <stdio.h>
void main() {
    int num;

    printf("Digite um número: ");
    scanf("%i", &num);

    if (num > 0) {
        float inver = num/4;
        printf("O inverso de %i é igual a %.4f", num, inver);
    } else {
        int opos = num + num;
        printf("O oposto de %i é igual a %i", num, opos);
    }
}
