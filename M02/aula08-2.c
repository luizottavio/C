#include <stdio.h>
void main() {
    float n1 = 8;
    float n2 = 7;
    float m = (n1 + n2) / 2;
    //printf("A media é de %.1f", m);

    float preco = 1000;
    // Porcentagem
    float desc = preco + (preco * 10 / 100);
    printf("O desconto é de %.1f", desc);
}
