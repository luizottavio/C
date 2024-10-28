#include <stdio.h>
#include <time.h>
void main() {
    time_t t;
    time(&t);
    struct tm *data;
    data = localtime(&t);
    int ano = data->tm_year + 1900;
    int ano_nasceu, idade;

    printf("Em que ano você nasceu? ");
    scanf("%i", &ano_nasceu);

    idade = ano - ano_nasceu;

    if (idade >= 65) {
        printf("-----------------------------------------");
        printf("\nVocê tem %i anos, certo?", idade);
        printf("\nSeja bem-vendo(a) ao Banco Estudonauta!");
        printf("\n=== ATENÇÃO! DIRIJA-SE PARA A FILA PREFERENCIAL ===");
        printf("\n-----------------------------------------\n");
    } else {
        printf("-----------------------------------------");
        printf("\nVocê tem %i anos, certo?", idade);
        printf("\nSeja bem-vendo(a) ao Banco Estudonauta!");
        printf("\n-----------------------------------------\n");
    }
}
