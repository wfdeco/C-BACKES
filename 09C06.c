/*
Crie uma função recursiva que retorne a média dos elementos de um vetor de
inteiros.
*/

#include <stdio.h>

#define SIZE 5

float MediaVetor(int i, float size, int *v) {

	if (i < 0)
		return 0;
	else if (i == (size - 1))
		// CHAMADA RECURSIVA CALCULANDO MEDIA DO VETOR
		return (MediaVetor((i - 1), size, v) + v[i]) / size;
	else
		// CHAMADA RECURSIVA CALCULANDO SOMA DO VETOR
		return MediaVetor((i - 1), size, v) + v[i];
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

	// EXIBINDO MEDIA DOS ELEMENTOS DO VETOR, CHAMANDO A FUNCAO
	printf("\n");
	printf("Media dos elementos do vetor: %f\n", MediaVetor((SIZE - 1), SIZE, v));
	printf("\n");
}