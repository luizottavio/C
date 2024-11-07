#include <stdio.h>
int main() {
    float preco, desc;
    printf("Digite o preço de um produto R$");
    scanf("%f", &preco);

    printf("\nESCOLHA UM PERÍODO\n");
    printf("====================\n");
    printf("1 Carnaval [+10]\n");
    printf("2 Férias Escolares [+20]\n");
    printf("3 Black Friday [-30]\n");
    printf("4 Natal [-5]\n");
    printf("====================\n");

    int op;
    printf("Digite sua opção => ");
    scanf("%i", &op);

    switch (op) {
        case 1:
            desc = preco + 10;
            printf("Na época do CARNAVAL, o preço do produto vai para R$%.2f\n", desc);
            break;
        default:
            printf("Época invalida\n");
    }


    return 0;
}
