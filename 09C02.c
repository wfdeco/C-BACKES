/*
Crie uma função recursiva que receba um número inteiro N e retorne o somatório
dos números de 1 a N.
*/

#include <stdio.h>

int Somatorio(int n) {
	
	if (n == 0)
		return 0;
	else
		// CHAMADA RECURSIVA SOMANDO TERMOS
		return Somatorio(n - 1) + n;
}

int main(int argc, const char *argv[]) {
	
	int num;

	// LENDO DADOS ENQUANTO NAO FOR POSITIVO
	do {
		printf("\n");
		printf("Digite um numero inteiro: ");
		scanf(" %d", &num);
	} while (num <= 0);

	
	// EXIBINDO SOMA DOS TERMOS, CHAMANDO A FUNCAO
	printf("\n");
	printf("Somatorio: %d\n", Somatorio(num));
	printf("\n");

	return 0;
}