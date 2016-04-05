/*
Usando a estrutura Retângulo do exercício anterior, faça um programa que
declare e leia uma estrutura Retângulo e um Ponto, e informe se esse ponto
está ou não dentro do retângulo.
*/

#include <stdio.h>
#include <math.h>

struct retangulo {
	struct ponto {
		float x;
		float y;
	} p[3];
};

int main (int argc, const char *argv[]) {
	
	struct retangulo r1;

	// LENDO DADOS DOS 3 PONTOS
	for (int i = 0; i < 3; i++) {
		printf("\n");
		printf("Ponto %d:\n", (i + 1));
		printf("x: ");
		scanf(" %f", &r1.p[i].x);
		printf("y: ");
		scanf(" %f", &r1.p[i].y);
	}

	// VERIFICANDO E EXIBINDO SE O PONTO 3 ESTA DENTRO DO RETANGULO
	if (((r1.p[2].x >= r1.p[1].x && r1.p[2].x <= r1.p[0].x) ||
		 (r1.p[2].x <= r1.p[1].x && r1.p[2].x >= r1.p[0].x)) &&
		((r1.p[2].y >= r1.p[1].y && r1.p[2].y <= r1.p[0].y) ||
		 (r1.p[2].y <= r1.p[1].y && r1.p[2].y >= r1.p[0].y)))
		printf("\nP3 esta dentro do retangulo.\n");
	else
		printf("\nP3 esta fora do retangulo.\n");
	printf("\n");

	return 0;
}