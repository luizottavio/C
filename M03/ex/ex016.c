#include <stdio.h>
void main() {
    float valor;

    printf("Qual foi o valor total das compras? R$");
    scanf("%f", &valor);

    float desc = valor * 10 / 100;
    float precofim = valor - desc;


    if (valor >= 500) {
        printf("-------------------------------------------");
        printf("\nVocê comprou %.2f na nossa loja.", valor);
        printf("\n========== ATENÇÃO ==========");
        printf("\nPor fazer mais de R$500 em compras, você vai receber R$%.2f de desconto", desc);
        printf("\nO valor a ser pago é R$%.2f! Volte Sempre!", precofim);
        printf("\n-------------------------------------------\n");
    } else {
        printf("-------------------------------------------");
        printf("\nVocê comprou %.2f na nossa loja. \nVolte Sempre!", valor);
        printf("\n-------------------------------------------\n");
    }
}
