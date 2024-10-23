#include <stdio.h>
void main() {
    //int n = 8;
    //--n;
    //printf("Resultado é %i", ++n);
    int x = 5;
    int y = 3 + ++x;
    printf("Os valores são %i e %i", x, y);

    int n = 8;
    printf("\nO valor é %i\n", n++);
    printf("E no final %i", n);
}
