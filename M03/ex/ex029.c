#include <stdio.h>
int main() {
    float peso;
    printf("Seu peso na Terra (kg) = ");
    scanf("%f", &peso);
    printf("\nESCOLHA UM PLANETA\n");
    printf("======================\n");
    printf("1 Mercúrio\n");
    printf("2 Vênus\n");
    printf("3 Marte");
    printf("4 Júpiter\n");
    printf("5 Saturno\n");
    printf("6 Urano\n");
    printf("======================\n");

    int opcao;
    printf("Digite sua opção => ");
    scanf("%i", &opcao);

    switch (opcao) {
        case 1:
            peso = peso * 3,6;
            printf("No planeta MERCÚRIO, seu peso seria %.2f kg", peso);
            break;
        case 2:
            peso = peso * 8,8;
            printf("No planeta VÊNUS, seu peso seria %.2f kg", peso);
            break;
        case 3:
            peso = peso * 3,7;
            printf("No planeta MARTE, seu peso seria %.2f kg", peso);
            break;
        case 4:
            peso = peso * 24,79;
            printf("No planeta JÚPITER, seu peso seria %.2f kg", peso);
            break;
       /* case 5:
            printf("No planeta SATURNO, seu peso seria %.2f kg");
            break;
        case 6:
            printf("No planeta URANO, seu peso seria %.2f kg");
            break; */
        default:
            printf("Planeta não em contrado");
    }
    return 0;
}
