#include <stdio.h>
#include <time.h>
void main() {
    time_t t;
    time(&t);
    struct tm *data;
    data = localtime(&t);
    int ano = data->tm_year + 1900;
    int idade;

    printf("Atualmente estamos no ano de %i", ano);
    printf("\nEm que ano você nasceu? ");
    scanf("%i", &idade);
    idade = ano - idade;
    int alista = ano - idade + 18;
    int tempo = ano - alista;

    printf("--------------------------------");
    if (idade > 18) {
        printf("\nSua idade é %i anos.", idade);
        printf("\nSeu alistamento foi em %i. Já se passram %i. anos.\n", alista, tempo);
    } else if (idade < 18) {
        printf("\nSua idade é %i anos.", idade);
        printf("\nSeu alistamento será em %i. Ainda faltam %i. anos.\n", alista, tempo);
    } else {
        printf("\nSua idade é %i anos.", idade);
        printf("\nVocê completa 18 anos exatamente em %i. Vá se alistar AGORA!\n", ano);
    }

    return 0;
}
