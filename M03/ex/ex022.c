#include <stdio.h>
#include <time.h>
void main() {
    time_t t;
    time(&t);
    struct tm *data;
    data = localtime(&t);
    int horas = data ->tm_hour;
    int saldo;

    printf("============= CINEMA ESTUDONAUTA =============");
    printf("\nHORÁRIO DO FILME: 19 - PREÇO DO INFRESSO: R$20");
    printf("\n----------------------------------------------");
    printf("\nHorario atual %i\n", horas);
    printf("\nQuanto dinheiro você tem? R$");
    scanf("%i", &saldo);

    if (saldo >= 20) {
        if (horas <= 19) {
            printf("Agora são %i horas.", horas);
            printf("\nVocê consegue comprar o ingreso!\n");
        }
    } else {
        printf("Agora são %i horas.", horas);
        printf("\nInfelizmente não é possível comprar o ingresso!\n");
    }
}
