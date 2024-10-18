#include <stdio.h>
void main() {
    char produto[30];
    float preco;
    float porcentagem_desc;

    printf("Produto: ");
    gets(produto);

    printf("Preço de %s: R$", produto);
    scanf("%f", &preco);

    printf("Desconto: ((%%)) ");
    scanf("%f", &porcentagem_desc);

    float desc = (preco + preco) / porcentagem_desc;
    float desc_real = preco - desc;

    printf("O produto %s custava R$%.2f, mas com %.2f%% de desconto, passa a custar R$%.2f.\n", produto, preco, porcentagem_desc, desc_real);
}

