#include <stdio.h>
void main() {
    char digito;
    printf("Digite um letra: ");
    scanf("%c", &digito);
    char antes = digito - 1;
    char depois = digito + 1;
    printf("Antes da letra %c temos a letra %c. Depois temos a letra %c.\n", digito, antes, depois);
}
