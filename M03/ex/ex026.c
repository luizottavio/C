#include <stdio.h>
#include <string.h>
void main() {
    char estado[2];

    printf("Em que estado do Brasil você nasceu? ");
    scanf("%s", &estado);


    if (strcmp(estado, "sp")== 0) {
        //SUDESTE
        printf("Nascendo em %s você PAULISTA\n", estado);
    } else if (strcmp(estado, "rj") == 0) {
        printf("Nascendo em %s você FLUMINENSE\n", estado);
    } else if (strcmp(estado, "mg") == 0) {
        printf("Nascendo em %s você MINEIRO\n", estado);
    } else if (strcmp(estado, "es") == 0) {
        printf("Nascendo em %s você CAPIXABA\n", estado);
        //SUL
    } else if (strcmp(estado, "pr") == 0) {
        printf("Nascendo em %s você PARANAENCE\n", estado);
    } else if (strcmp(estado, "sc") == 0) {
        printf("Nascendo em %s você CATARINENSE\n", estado);
    } else if (strcmp(estado, "rs") == 0) {
        printf("Nascendo em %s você GAÚCHO\n", estado);
        //CENTRO-OESTE
    } else if (strcmp(estado, "ms") == 0) {
        printf("Nascendo em %s você SUL-MATO-GROSSENSE\n", estado);
    } else if (strcmp(estado, "mt") == 0) {
        printf("Nascendo em %s você MATO-GROSSENSE\n", estado);
    } else if (strcmp(estado, "go") == 0) {
        printf("Nascendo em %s você GOIANO\n", estado);
    } else if (strcmp(estado, "df") == 0) {
        printf("Nascendo em %s você LADRÃO\n", estado);
    } else {
        printf("Nascendo em %s você IRELEVANTE PARA O BRASIL e não sera mencionado\n", estado);
    }
}
