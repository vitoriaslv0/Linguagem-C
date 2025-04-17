#include <stdio.h>

int main() {

    double larg, comp, metro, area, preco;
    
    printf("Digite a largura do terreno: ");
    scanf("%lf", &larg);
    printf("Digite o comprimento do terreno: ");
    scanf("%lf", &comp);
    printf("Digite o valor do metro quadrado: ");
    scanf("%lf", &metro);
    
    area = larg * comp;
    preco = area * metro;

    printf("Area do terreno = %.2lf\n", &area);
    printf("Preco do terreno = %.2lf\n", &preco);

    return 0;
}