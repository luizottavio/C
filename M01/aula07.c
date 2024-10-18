#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void main() {
    srand(time(NULL));
    int n;
    n = rand() % 10 + 1;
    printf("Eu  gerei o número %i", n);
}
