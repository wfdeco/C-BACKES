/*
Crie uma função recursiva que receba um número inteiro N e imprima todos os
números naturais de 0 até N em ordem decrescente.
*/

#include <stdio.h>

void Naturais(int n) {
	
	if (n < 0)
		return;
	else {
		// CHAMADA RECURSIVA EXIBINDO NUMEROS EM ORDEM DECRESCENTE
		printf("%d ", n);
		return Naturais(n - 1);
	}
}

int main(int argc, const char *argv[]) {
	
	int num;

	// LENDO DADOS ENQUANTO NAO FOR POSITIVO
	do {
		printf("\n");
		printf("Digite um numero natural: ");
		scanf(" %d", &num);
	} while (num < 0);

	// CHAMANDO A FUNCAO
	printf("\n");
	Naturais(num);
	printf("\n\n");

	return 0;
}