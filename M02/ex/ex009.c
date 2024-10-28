#include <stdio.h>
void main() {
    char nome[20];
    float nota1, nota2;

    printf("Nome do aluno: ");
    gets(nome);

    printf("Nota 1: ");
    scanf("%f", &nota1);

    printf("Nota 2: ");
    scanf("%f", &nota2);

    float media = (nota1 + nota2) / 2;

    printf("O aluno %s tirou %.1f e %.1f.\nE ficou com média %.1f.\n", nome, nota1, nota2, media);
}

