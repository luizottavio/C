#include <stdio.h>
#include <time.h>
int main() {
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

    printf("--------------------------------");
    if (idade >= 18) {
        printf("\nSua idade é %i anos.", idade);
        printf("\nJá fez 18 anos. Espero sinceramente que você tenha se alistado.\n");
    } else {
        printf("\nSua idade é %i anos.", idade);
        printf("\nVocê ainda não tem 18 anos. Não pode se alistar.\n");
    }
    return 0;
}
