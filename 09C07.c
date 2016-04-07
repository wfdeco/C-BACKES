/*
Escreva uma função recursiva que receba por parâmetro dois valores inteiros
x e y e calcule e retorne o resultado de x^y para o programa principal.
*/

#include <stdio.h>

int Exponencial(int x, int y) {
	
	if (y == 0)
		return 1;
	else
		// CHAMADA RECURSIVA MULTIPLICANDO X, Y VEZES
		return Exponencial(x, (y - 1)) * x;
}

int main(int argc, const char *argv[]) {
	
	int num[2];

	// LENDO DADOS X E Y
	printf("\n");
	printf("Digite os valores de:\n");
	printf("x: ");
	scanf(" %d", &num[0]);
	printf("y: ");
	scanf(" %d", &num[1]);

	// EXIBINDO EXPONENCIAL X^Y, CHAMANDO A FUNCAO
	printf("\n");
	printf("x^y: %d\n", Exponencial(num[0], num[1]));
	printf("\n");

	return 0;
}