#include <stdio.h>
void main(){
    int ano;

    printf("Digite um ano qualquer: ");
    scanf("%i", &ano);

    if (ano%4==0 && ano%100!=0 || ano%400==0) {
        printf("O ano %i é BISSEXTO.", ano);
    } else {
        printf("O ano %i NÃO É BISSEXTO.", ano);
    }
}
