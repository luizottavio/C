#include <stdio.h>
void main() {
    char num;
    printf("Digite um número: ");
    scanf("%i", &num);
    float dobro = num * 2;
    float terca = (float)num / 3;
    printf("Analisando o número %i, seu dobro é %.0f e sua terça parte é %.2f\n", num, dobro, terca);
}
// Devida EX007 módulo 02
