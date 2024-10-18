#include <stdio.h>
void main() {
    //00
    printf("Cadastrando a primeira pessoa: \n");
    printf("-----------------------------\n");

    char nome[20];
    char sexo;
    float nota;

    printf("NOME: ");
    scanf("%s", &nome);
    limparBuffer();

    printf("SEXO [M/F]: ");
    scanf("%c", &sexo);
    limparBuffer();

    printf("NOTA: ");
    scanf("%f", &nota);

    //01
    printf("Cadastrando a sengunda pessoa: \n");
    printf("-----------------------------\n");

    char nome_segundo[20];
    char sexo_segundo;
    float nota_segundo;

    printf("NOME: ");
    scanf("%s", &nome_segundo);
    limparBuffer();

    printf("SEXO [M/F]: ");
    scanf("%c", &sexo_segundo);
    limparBuffer();

    printf("NOTA: ");
    scanf("%f", &nota_segundo);

    //02
    printf("Cadastrando a terceira pessoa: \n");
    printf("-----------------------------\n");
    char nome_terceira[20];
    char sexo_terceira;
    float nota_terceira;

    printf("NOME: ");
    scanf("%s", &nome_terceira);
    limparBuffer();

    printf("SEXO [M/F]: ");
    scanf("%c", &sexo_terceira);
    limparBuffer();

    printf("NOTA: ");
    scanf("%f", &nota_terceira);

    printf("\nListagem Completa");
    printf("\n-----------------------------");
    // RESULTADO
    printf("\nNOME                SEXO NOTA");
    printf("\n%-20s %c %6.1f", nome, sexo, nota);
    printf("\n%-20s %c %6.1f", nome_segundo, sexo_segundo, nota_segundo);
    printf("\n%-20s %c %6.1f", nome_terceira, sexo_terceira, nota_terceira);
    printf("\n-----------------------------");

}

void limparBuffer() {
    char c;
    while ((c = getchar()) != '\n' && c != EOF);
}
