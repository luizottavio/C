#include <stdio.h>
#include <time.h>
void main() {
    time_t t;
    time(&t);
    struct tm *data;
    data = localtime(&t);
    int dia = data->tm_mday;
    int mes = data->tm_mon + 1;
    int ano = data->tm_year + 1900;
    int horas = data->tm_hour;

    printf("Estamos no dia %i e no mes %i e ano %i as %i horas", dia, mes, ano, horas);
}
