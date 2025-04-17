#include <stdio.h>
#include <string.h>
/*%s só funciona para um texto contíguo
Para ler até o fim da linha, use: fgets(#include <string.h>) 
Se houver uma quebra de linha pendente na entrada padrão, é preciso limpar a entrada antes. */
void limpar_entrada() {
    char c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}

void ler_texto(char *buffer, int length) {
    fgets(buffer, length, stdin);
    strtok(buffer, "\n");
} 
   

int main() {
    int idade;
	char nome[50]; 
		
		printf("Digite o valor da idade: ");
        scanf("%d", &idade);
		// scanf apenas lê nomes sem espaços

        printf("Digite o nome da pessoa: "); //ao inserir idade, o programa irá fazer a quebra de linha e finalizará sem preencher o nome, entao:utiliza-se o comando - (linha 6) e: (linha 18).
        limpar_entrada();
		fgets(nome, 50, stdin); 
		strtok(nome, "\n"); //o comando evita que seja guardado quebras de linhas em uma variável

        printf("IDADE = %d\n", idade); 
        printf("NOME = %s\n", nome);
        
 return 0;   
}		