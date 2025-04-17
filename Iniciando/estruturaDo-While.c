#include <stdio.h>
// estrutura Repita-Até , no C até é lido como enquanto
void limpar_entrada() {
    char c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}

int main() {

    double C, F;
    char resp;

    do {
        printf("Digite a temperatura em Celsius: ");
        scanf("%lf", &C);
        F = 9.0 * C / 5.0 + 32.0;
        printf("Equivalente em Fahrenheit: %.1lf\n", F);
        printf("Deseja repetir (s/n)? ");
        limpar_entrada();
        scanf("%c", &resp);
    } while (resp == 's');  // enquanto uma estrutura for verdadeira

    return 0;

}