/*
Crie uma função recursiva que retorne a soma dos elementos de um vetor de
inteiros.
*/

#include <stdio.h>

#define SIZE 5

int SomaVetor(int i, int *v) {
	
	if (i < 0)
		return 0;
	else
		// CHAMADA RECURSIVA SOMANDO ELEMENTOS DO VETOR
		return SomaVetor((i - 1), v) + v[i];
}

int main(int argc, const char *argv[]) {
	
	int v[SIZE];

	// LENDO DADOS DO VETOR
	printf("\n");
	printf("Digite os valores do vetor:\n");
	for (int i = 0; i < SIZE; i++) {
		printf("%do: ", (i + 1));
		scanf(" %d", &v[i]);
	}

	// EXIBINDO SOMA DOS ELEMENTOS DO VETOR, CHAMANDO A FUNCAO
	printf("\n");
	printf("Soma dos elementos do vetor: %d\n", SomaVetor(SIZE - 1, v));
	printf("\n");

	return 0;
}