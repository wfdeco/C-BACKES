/*
Implemente um programa que leia o nome, a idade e o endereço de uma pessoa e
armazene esses dados em uma estrutura. Em seguida, imprima na tela os dados da
estrutura lida.
*/

#include <stdio.h>

struct cadastro {
	char nome[50];
	int idade;
	char endereco[50];
} c1;

int main(int argc, const char *argv[]) {
	
	// LENDO DADOS DO CADASTRO
	printf("\n");
	printf("Nome: ");
	scanf(" %[^\n]s", c1.nome);
	printf("Idade: ");
	scanf(" %d", &c1.idade);
	printf("Endereco: ");
	scanf(" %[^\n]s", c1.endereco);

	// EXIBINDO DADOS DO CADASTRO
	printf("\n");
	printf("Nome: %s\n", c1.nome);
	printf("Idade: %d\n", c1.idade);
	printf("Endereco: %s\n", c1.endereco);
	printf("\n");

	return 0;
}