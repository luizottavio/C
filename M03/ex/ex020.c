#include <stdio.h>
int main() {
    printf("===== TABELA DE PREÇOS =====");
    printf("\nViagens até 200 km R$0.50/km");
    printf("\nA partir de 200 km R$0.35/km");
    printf("\n----------------------------");

    float km;
    printf("\nDistância total de viagem, em km: ");
    scanf("%f", &km);

    if (km <= 200) {
        float preco = km * 0.50;
        printf("Uma viagem de %.1f km vai custar R$0.50/km", km);
        printf("\nValor total: R$%.2f\n", preco);
    } else {
        float preco = km * 0.35;
        printf("Uma viagem de %.1f km vai custar R$0.35/km", km);
        printf("\nValor total: R$%.2f\n", preco);
    }
    return 0;
}
