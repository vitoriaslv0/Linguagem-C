#include <stdio.h>

int main() {

    int N, i;
    double soma, media;

    printf("Quantos números você vai digitar? ");
    scanf("%d", &N);

    double vet[N];

    for (i = 0; i < N; i++ ) {
        printf("Digite um número: ");
        scanf("%lf", &vet[i]);
    }
    printf("\nVALORES:");
    for (i = 0; i < N; i++ ) {
        printf("%.1lf  ", vet[i]);
    }
    printf("\n");

        soma = 0;
    for (i = 0; i < N; i++ ) {
        soma = soma + vet[i];
    }
    printf("Soma = %.2lf", soma);

    media = soma / N;

    printf("\nMédia = %.2lf", media);

    return 0;
}