/*
Escreva uma função recursiva que calcule a soma dos primeiros n cubos:
S = 1^3 + 2^3 + ... + n^3
*/

#include <stdio.h>
#include <math.h>

int SomaCubo(int qtdTermos) {

	if (qtdTermos == 0)
		return 0;
	else
		// CHAMADA RECURSIVA SOMANDO TERMOS ELEVADOS AO CUBO
		return SomaCubo(qtdTermos - 1) + pow(qtdTermos, 3);
}

int main(int argc, const char *argv[]) {
	
	int termos;

	// LENDO DADOS ENQUANTO NAO FOR POSITIVO
	do {
		printf("\n");
		printf("Defina a quantidade de termos: ");
		scanf(" %d", &termos);
	} while (termos <= 0);

	// EXIBINDO SOMA DOS TERMOS AO CUBO, CHAMANDO A FUNCAO
	printf("\n");
	printf("Soma dos termos ao cubo: %d\n", SomaCubo(termos));
	printf("\n");

	return 0;
}