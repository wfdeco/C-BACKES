/*
A multiplicação de dois números inteiros pode ser feita através de somas
sucessivas (por exemplo, 2 * 3 = 2 + 2 + 2). Crie uma função recursiva que
calcule a multiplicação por somas sucessivas de inteiros.
*/

#include <stdio.h>

int SomaSucessiva(int x, int y) {
	
	if (y == 0)
		return 0;
	else
		// CHAMADA RECURSIVA SOMANDO X, Y VEZES
		return SomaSucessiva(x, (y - 1)) + x;
}

int main(int argc, const char *argv[]) {
	
	int num[2];

	// LENDO DADOS X E Y
	printf("\n");
	printf("Digite os valorex de:\n");
	printf("x: ");
	scanf(" %d", &num[0]);
	printf("y: ");
	scanf(" %d", &num[1]);

	// EXIBINDO SOMA SUCESSIVA, CHAMANDO A FUNCAO
	printf("\n");
	printf("%d*%d: %d\n", num[0], num[1], SomaSucessiva(num[0], num[1]));
	printf("\n");

	return 0;
}