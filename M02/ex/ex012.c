#include <stdio.h>
void main() {
    float nota1, nota2;

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    float media = (nota1 + nota2) / 2;

    printf("A média do aluno foi %.1f\n", media);
    printf("A sua situação é %s", (media>=7)?"APROVADO":"REPROVADO");
}
