#include <stdio.h>
void main() {
    float nota1, nota2;

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    float media = (nota1 + nota2) / 2;

    printf("Com as notas %.1f e %.1f, o aluno tem média %.1f.\n", nota1, nota2, media);
    printf("A sua situação é %s.\n", (media>=7)?"APROVADO":"REPROVADO");
}
