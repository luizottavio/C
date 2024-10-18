#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void main() {
    srand(time(NULL));
    int num_pc = rand() % 5 + 1;
    int num_user;

    printf("Vou pensar em um número entre 1 e 5. Tente adivinhar!");
    printf("\nQual é o seu palpite? ");
    scanf("%i", &num_user);

    printf("  Eu pensei no número %i e você pesou no %i.\n", num_pc, num_user);
}
