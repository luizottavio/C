#include <stdio.h>
void main() {
    char estado[2];

    printf("Em que estado do Brasil você nasceu? ");
    scanf("%s", &estado);

    if (estado == "sp" == 0) {
        printf("Nascendo em %s você PAULISTA\n", estado);
    } else if (estado == "rj" == 0) {
            printf("Nascendo em %s você CARIOCA\n", estado);
    }
}
