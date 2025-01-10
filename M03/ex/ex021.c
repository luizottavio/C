#include <stdio.h>
void main() {
    float num, res;

    printf("Digite um número (Positivo ou Negativo): ");
    scanf("%f", &num);

    if (num > 0) {
        //float inver = num*num == 1; EU
        res = 1/num;
        printf("O inverso de %.0f é igual a %.4f", num, res);
    } else {
        //int opos = num + num == 0; EU
        res = num * (-1);
        printf("O oposto de %.0f é igual a %.0f", num, res);
    }
}
