#include <stdio.h>
int main() {
    int n1, n2, n3;
    printf("Me diga trés números e eu colocarei \neles em ordem para você.\n");
    printf("\nPrimeiro número: ");
    scanf("%i", &n1);
    printf("Segundo número: ");
    scanf("%i", &n2);
    printf("Terceior número: ");
    scanf("%i", &n3);
    printf("-------------------");

    if (n1> n2 && n1 > n3) {
        printf("\nMAIOR: %i", n1);
    } else if (n1 < n2 && n1 < n3) {
        printf("\nMENOR: %i", n1);
    } else {
        printf("\nINTERMEDIÁRIO: %i", n1);
    }
    // n2
    if (n2 > n1 && n2 > n3) {
        printf("\nMAIOR: %i", n2);
    } else if (n2 < n1 && n2 < n3) {
        printf("\nMENOR: %i", n2);
    } else {
        printf("\nINTERMEDIÁRIO: %i", n2);
    }

    if (n3 > n1 && n3 > n2) {
        printf("\nMAIOR: %i", n3);
    } else if (n3 < n1 && n3 < n2) {
        printf("\nMENOR: %i", n3);
    } else {
        printf("\nINTERMEDIÁRIO: %i", n3);
    }
    return 0;
}
