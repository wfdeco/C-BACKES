/*
Crie uma estrutura representando uma hora. Essa estrutura deve conter os
campos hora, minuto e segundo. Agora, escreva um programa que leia um vetor de
cinco posições dessa estrutura e imprima a maior hora.
*/

#include <stdio.h>

#define SIZE 5

struct hora {
	int hora;
	int minuto;
	int segundo;
};

int main(int argc, const char *argv[]) {
	
	struct hora h[SIZE];
	int maior;

	// LENDO HORARIOS DAS ESTRUTURAS
	printf("\nDigite a hora desejada (hh:mm:ss):\n");
	for (int i = 0; i < SIZE; i++) {
		do {
			printf("%da: ", (i + 1));
			scanf(" %d:%d:%d", &h[i].hora, &h[i].minuto, &h[i].segundo);
		} while (h[i].hora < 0 || h[i].hora > 23 ||
	   			 h[i].minuto < 0 || h[i].minuto > 59 ||
	   			 h[i].segundo < 0 || h[i].segundo > 59);
	}

	// DEFININDO A MAIOR HORA
	for (int i = 0; i < (SIZE - 1); i++) {
		for (int j = (i + 1); j < SIZE; j++) {
			if (i != j) {
				if (h[i].hora < h[j].hora) {
					maior = j;
					continue;
				} else if (h[i].hora > h[j].hora) {
					maior = i;
				} else {
					if (h[i].minuto < h[j].minuto) {
						maior = j;
						continue;
					} else if (h[i].minuto > h[j].minuto) {
						maior = i;
					} else {
						if (h[i].segundo < h[j].segundo) {
							maior = j;
							continue;
						} else {
							maior = i;
						}
					}
				}
			}
		}
	}

	// EXIBINDO A MAIOR HORA
	printf("\nMaior hora:\n");
	printf("%02d:%02d:%02d\n\n", h[maior].hora, h[maior].minuto, h[maior].segundo);

	return 0;
}