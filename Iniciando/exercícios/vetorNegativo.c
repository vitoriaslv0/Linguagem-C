#include <stdio.h>

int main() {

    int N, i, negativo;

    printf("Quantos números você vai digitar? ");
    scanf("%d", &N);

    int vet[N];

        for (i = 0; i < N; i++) {
            printf("Digite um número: ");
            scanf("%d", &vet[i]);
        }
        
        printf("\nNÚMEROS NEGATIVOS:\n");

        for (i = 0; i < N; i++) {
            if (vet[i] < 0) {
                printf("%d\n", &vet[i]);
            }
        }

    return 0;
}