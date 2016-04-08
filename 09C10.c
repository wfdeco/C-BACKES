/*
Escreva uma função recursiva que receba um número inteiro, maior ou igual a
zero, e retorne o enésimo termo da sequência de Fibonacci. Essa sequência
começa no termo de ordem zero e, a partir do segundo termo, seu valor é dado
pela soma dos dois termos anteriores. Alguns termos dessa sequência são:
0, 1, 1, 2, 3, 5, 8, 13, 21, 34, ...
*/

#include <stdio.h>

int Fibonacci(int n) {
	
	if (n == 0 || n == 1)
		return n;
	else
		// CHAMADA RECURSIVA CALCULANDO VALOR DO FIBONACCI
		return Fibonacci(n - 1) + Fibonacci(n - 2);
}

int main(int argc, const char *argv[]) {
	
	int num;

	// LENDO DADOS ENQUANTO NUM FOR MENOR QUE 2
	do {
		printf("\n");
		printf("Digite a posição do Fibonacci: ");
		scanf(" %d", &num);
	} while (num < 2);

	// EXIBINDO RESULTADO DO FIBONACCI, CHAMANDO A FUNCAO
	printf("\n");
	printf("Fib %d = %d\n", num, Fibonacci(num));
	printf("\n");

	return 0;
}