#import <stdio.h>
void main() {
    char r;
    char s;

    printf("Digite só um letra: ");
    //scanf(" %c", &r);
    r = getchar();
    limparBuffer();

    printf("Digite só um letra: ");
    //scanf(" %c", &s);
    s = getchar();
    limparBuffer();

    printf("Você digitou as letras \"%c\" \"%c\" \"%c\"", r, s, f);
}


void limparBuffer(void) {
    char c;
    while ((c = getchar()) != '\n' && c != EOF);
}
