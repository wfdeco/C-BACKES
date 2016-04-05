/*
Crie uma estrutura chamada Retângulo. Essa estrutura deverá conter o ponto
superior esquerdo e o ponto inferior direito do retângulo. Cada ponto é
definido por uma estrutura Ponto, a qual contém as posições X e Y. Faça um
programa que declare e leia uma estrutura Retângulo e exiba a área e o
comprimento da diagonal e o perímetro desse retângulo.
*/

#include <stdio.h>
#include <math.h>

struct retangulo {
	struct ponto {
		float x;
		float y;
	} p[2];
};

int main (int argc, const char *argv[]) {
	
	struct retangulo r1;

	// LENDO DADOS DOS 2 PONTOS
	for (int i = 0; i < 2; i++) {
		printf("\n");
		printf("Ponto %d:\n", (i + 1));
		printf("x: ");
		scanf(" %f", &r1.p[i].x);
		printf("y: ");
		scanf(" %f", &r1.p[i].y);
	}

	// DEFININDO A BASE E A ALTURA
	float base = (r1.p[1].x - r1.p[0].x);
	float altura = (r1.p[1].y - r1.p[0].y);

	// CALCULANDO E EXIBINDO A AREA
	float area = (base * altura);
	printf("\n");
	printf("Area: %.2f\n", area);

	// CALCULANDO E EXIBINDO A DIAGONAL
	float diagonal = sqrt(pow(base, 2) + pow(altura, 2));
	printf("Diagonal: %.2f\n", diagonal);

	// CALCULANDO E EXIBINDO O PERIMETRO
	float perimetro = (2 * (base + altura));
	if (perimetro < 0.0f)
		perimetro *= -1;
	printf("Perimetro: %.2f\n", perimetro);
	printf("\n");

	return 0;
}