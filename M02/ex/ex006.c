#include <stdio.h>
void main() {
    char num;
    printf("Digite um número: ");
    scanf("%i", &num);
    char ante = num - 1;
    char suce = num + 1;
    printf("\nAnalisando o número %i, seu antecessor é %i e seu sucessor é %i.", num, ante, suce);
}