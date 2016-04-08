/*
Escreva uma função recursiva que receba um número inteiro positivo n. Calcule
e retorne o seu fatorial n!:
n! = n * (n - 1) * (n - 2) * ... * 1
*/

#include <stdio.h>

int Fatorial(int n) {
	
	if (n == 1)
		return 1;
	else
		// CHAMADA RECURSIVA CALCULANDO FATORIAL
		return Fatorial(n - 1) * n;
}

int main(int argc, const char *argv[]) {
	
	int num;

	// LENDO DADOS ENQUANTO NUM NAO FOR POSITIVO
	do {
		printf("\n");
		printf("Digite um inteiro positivo para calcular o fatorial: ");
		scanf(" %d", &num);
	} while (num <= 0);

	// EXIBINDO RESULTADO DO FATORIAL, CHAMANDO A FUNCAO
	printf("\n");
	printf("%d! = %d\n", num, Fatorial(num));
	printf("\n");

	return 0;
}