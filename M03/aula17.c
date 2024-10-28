#include <stdio.h>
void main() {
    /*int vel = 85;
    if (vel>80) {
        printf("Você está a %i\n", vel);
        printf("MULTADO!!");
    } else {
        printf("Você está a %i\n", vel);
        printf("Tenha uma boa viagem!");
    } */

    float vel ;
    printf("Digite a velocidade do automével: ");
    scanf("%f", &vel);

    if (vel>80 && vel<=299) {
        printf("Você foi MULTADO!\n");
    } else if (vel >= 300){
        printf("O radar foi QUEBRADO!\n");
    } else {
        printf("Dirija com atenção\n");
    }


}

