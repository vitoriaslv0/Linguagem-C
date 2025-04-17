#include <stdio.h>
#include <string.h>
//%s só funciona para um texto contíguo
//Para ler até o fim da linha, use: fgets(#include <string.h>) 
//Se houver uma quebra de linha pendente na entrada padrão, é preciso limpar a entrada antes.

int main() {
    
	int idade;
	double salario, altura;
	char genero;
	char nome[50]; //vetor de 50 caracteres
		
		idade = 20;
		salario = 5800.5;
		altura = 1.63;
		genero = 'F';
		strcpy(nome, "Maria Silva"); //comando string para textos
		
        printf("IDADE = %d\n", idade); // %.2lf(duas casa decimais/arredonda o número impresso)
        printf("SALARIO = %.2lf\n", salario);
        printf("ALTURA = %.2lf\n", altura);
        printf("GENERO = %c\n", genero);
        printf("NOME = %s\n", nome);
		
 return 0;   
}		