#include <stdio.h>

int main() {

    int N, R, i;

    printf("Deseja a tabuada para qual valor? ");
    scanf("%d", &N);

    int vet[N];

    for (i = 1; i <= 10; i++) {
        R = N * i;
        printf("%d x %d = %d\n", N, i, R );
    }

    return 0;
}