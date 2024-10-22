#include <stdio.h>
#include <string.h>
void main() {
    char nome1[20], nome2[20];

    printf("Digite um nome: ");
    gets(nome1);
    printf("Digite outro nome: ");
    gets(nome2);

    int res = strcmp(nome1, nome2);
    float cmp = res;

    printf("O nome %s e nome %s são %i", nome1, nome2, (res>=1)?"IGUALIS":"DIFERENTES");
}
