#include <stdio.h>
void main() {
    char nome[30];
    unsigned int idade;
    float peso;

    printf("Qual é o seu nome? ");
    gets(nome);

    printf("Qual é sua idade? ");
    scanf("%i", &idade);

    printf("Qual é o seu peso? (kg) ");
    scanf("%f", &peso);

    printf("\n-----------<<<PROCESSANDO>>>----------\n");
    printf("Muito prazer, %s. você tem %i anos e pesa %.1fkg correto?\n", nome, idade, peso);
    printf("FIM\n");
}
