#include <stdio.h>
void main() {
    char num;
    printf("Digite um número: ");
    scanf("%i", &num);
    float dobro = num + num;
    float terca = num / 3;
    printf("\nAnalisando o número %i, seu dobro é %.0f e sua terça parte é %.2f", num, dobro, terca);
}
