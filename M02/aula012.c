#include <stdio.h>
#include <string.h>
#include <ctype.h>

void maiusculo(char nome[], char cpm[]) {
    int i = 0;
    while(nome[i] != '\0') {
        cpm[i] = toupper(nome[i]);
        i++;
    }
    cpm[i] = '\0';
}

void minusculo(char nome[], char cpm[]) {
    int i = 0;
    while(nome[i] != '\0') {
        cpm[i] = tolower(nome[i]);
        i++;
    }
    cpm[i] = '\0';
}

void main() {
    // STRCPY
    /*char nome[10];
    float media = 7.5;
    strcpy(nome, (media>=7)?"Aprovado":"Reprovado");
    printf("A situacao do aluno %s", nome); */

    //  STRLEN
    /*char nome[] = "Kira";
    int tam = strlen(nome);
    printf("O nome %s tem %i caracteres", nome, tam); */

    // STRCMP
    /*char s1[] = "Monkey";
    char s2[] = "Luffy";
    int res = strcmp(s1, s2);
    printf("O resultado da comparação e %i", res);*/

    // STRCAT
    /*char n1[] = "Luffy ";
    char n2[] = "Monkey";
    printf("%s", strcat(n1, n2));*/

    // STRUPR e STRLWR não funciona o Linux.

    char nome[] = "KIra";
    char cpm[50];

    printf("%s\n", nome);

    maiusculo(nome, cpm);
    printf("%s\n", cpm);

    minusculo(nome, cpm);
    printf("%s\n", cpm);

}
