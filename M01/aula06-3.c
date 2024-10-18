#import <stdio.h>
void main() {
    char nome[30];
    char ender[40];

    printf("Digite o seu nome: ");
    gets(nome);

    printf("Digite seu endereço: ");
    gets(ender);

    printf("É um prazer te conhecer %s que mora em %s", nome, ender);

}
