#include <stdio.h>
void main() {
    int num;

    printf("Digite um número: ");
    scanf("%i", &num);

    if (num >= 0) {
        float inver = num*num == 1;
        printf("O inverso de %i é igual a %.4f", num, inver);
    } else {
        int opos = num + num == 0;
        printf("O oposto de %i é igual a %i", num, opos);
    }
}
