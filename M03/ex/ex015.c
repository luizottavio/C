#include <stdio.h>
void main() {
    float nota1, nota2, media;

    printf("Digite a sua primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a sua segunda nota: ");
    scanf("%f", &nota2);

    media = (nota1 + nota2) / 2;

    if (media>=7) {
        printf("-------------------------------------------");
        printf("\nMEUS PARABÉNS! A sua média final foi %.2f", media);
        printf("\n-----------------------------------------\n");
    } else {
        printf("---------------------------");
        printf("\nA sua média final foi %.2f", media);
        printf("\n---------------------------\n");
    }
}

