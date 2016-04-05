/*
Crie uma estrutura para representar as coordenadas de um ponto no plano
(posições X e Y). Em seguida, declare e leia do teclado dois pontos e exiba
a distância entre eles.
*/

#include <stdio.h>
#include <math.h>

struct coord {
	float x;
	float y;
};

int main(int argc, const char *argv[]) {

	struct coord c[2];
	float deltaS;
	
	// LENDO DADOS DAS POSICOES DOS PONTOS
	for (int i = 0; i < 2; i++) {
		printf("\n");
		printf("x%d: ", (i + 1));
		scanf(" %f", &c[i].x);
		printf("y%d: ", (i + 1));
		scanf(" %f", &c[i].y);
	}

	// CALCULANDO A DISTANCIA ENTRE OS PONTOS
	deltaS = sqrt(pow((c2.x - c1.x), 2) + pow((c2.y - c1.y), 2));

	// EXIBINDO A DISTANCIA
	printf("\n");
	printf("%f\n", deltaS);
	printf("\n");

	return 0;
}