#include <stdio.h>
int main() {
    int num;

    printf("Digite um valor: ");
    scanf("%i", &num);

    if (num%2==0) {
        printf("O valor %i é Par\n", num);
    } else {
        printf("O valor %i é Ímpar\n", num);
    }

    printf("FIM!\n");
    return 0;
}

