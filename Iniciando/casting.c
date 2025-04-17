#include <stdio.h>

int main() {

    double a;
    int b;
    a = 5.2;
    b = (int) a;  //(int) - casting. Necessário para o valor de a ao ser guardado na variavel b imprima corretamente 
    printf("%d\n", b);

    return 0; 
}