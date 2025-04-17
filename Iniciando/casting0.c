#include <stdio.h>

int main() {

    int a, b;
    double resultado;
    
    a = 5;
    b = 2;
    resultado = (double) a / b;// Mesmo com o placeholder como double, sem o casting ele é impresso como número inteiro
    printf("%lf\n", resultado);// isso porque como o cálculo só possui inteiros ao fazer a conta o compilador lê o resultado como int 

    return 0;
}