/*
Crie uma estrutura para representar as coordenadas de um ponto no plano
(posições X e Y). Em seguida, declare e leia do teclado um ponto e exiba a
distância dele até a origem das coordenadas, isto é, a posição (0,0).
*/

#include <stdio.h>
#include <math.h>

struct coord {
	float x;
	float y;
} dot;

int main(int argc, const char *argv[]) {

	float xi = 0.0f, yi = 0.0f;
	float deltaS;

	// LENDO DADOS DA POSICAO DO PONTO
	printf("\n");
	printf("x: ");
	scanf(" %f", &dot.x);
	printf("y: ");
	scanf(" %f", &dot.y);

	// CALCULANDO DISTANCIA DO PONTO ATE A ORIGEM
	deltaS = sqrt(pow((dot.x - xi), 2) + pow((dot.y - yi), 2));

	// EXIBINDO A DISTANCIA
	printf("\n");
	printf("Distancia: %f\n", deltaS);
	printf("\n");

	return 0;
}