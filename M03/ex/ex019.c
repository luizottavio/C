#include <stdio.h>
int main() {
    int ano;

    printf("Digite um ano qualquer: ");
    scanf("%i", &ano);

    if (ano%4==0) {
        printf("O ano %i é BISSEXTO.", ano);
    } else {
        printf("O ano %i NÃO É BISSEXTO.", ano);
    }
    return 0;
}
