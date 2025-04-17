#include <stdio.h>
#include <string.h>

void limpar_entrada() {
    char c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}

int main() {

    char nome[50], nome1[50];
    int idade, idade1;
    double media;  

    printf("Dados da primeira pessoa:\n");
    printf("Nome: ");
    fgets(nome, 50, stdin);
    printf("Idade: ");
    scanf("%d", &idade);

    printf("Dados da segunda pessoa:\n");
    printf("Nome: ");
    limpar_entrada();
    fgets (nome1, 50, stdin);
    printf("Idade: ");
    scanf("%d", &idade1);

    media = (double) (idade + idade1) / 2;

    printf("A idade media de %s e %s eh de %.1lf anos", nome, nome1, media);

    return 0;
}