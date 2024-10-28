#include <stdio.h>
void main() {
    int num;

    printf("Digite um número qualquer: ");
    scanf("%i", &num);

    // impar = (num/2!=0)?num;
    int par = num;

    printf("O número %i que você digitou é %s\n", num, (num%2==0)?"PAR":"ÍMPAR");
}
