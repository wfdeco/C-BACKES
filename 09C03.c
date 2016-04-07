/*
Crie uma função recursiva que receba um número inteiro N e imprima todos os
números naturais de 0 até N em ordem crescente.
*/

#include <stdio.h>

void Naturais(int i, int n) {
	
	if (i > n)
		return;
	else {
		// CHAMADA RECURSIVA EXIBINDO NUMEROS EM ORDEM CRESCENTE
		printf("%d ", i);
		return Naturais((i + 1), n);
	}
}

int main(int argc, const char *argv[]) {
	
	int num;

	// LENDO DADOS ENQUANTO NAO FOR POSITIVO
	do {
		printf("\n");
		printf("Digite um número natural: ");
		scanf(" %d", &num);
	} while (num <= 0);

	// CHAMANDO A FUNCAO
	printf("\n");
	Naturais(0, num);
	printf("\n\n");

	return 0;
}