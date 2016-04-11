/*
Crie uma estrutura capaz de armazenar o nome e a data de nascimento de uma
pessoa. Agora, escreva um programa que leia os dados de seis pessoas. Calcule
e exiba os nomes da pessoa mais nova e da mais velha.
*/

#include <stdio.h>

#define SIZE 6

struct pessoa {
	char nome[50];
	struct nascimento {
		int ano;
		int mes;
		int dia;
	} nasc;
};

int main(int argc, const char *argv[]) {
	
	struct pessoa p[SIZE];
	int maisVelho, maisNovo;

	// LENDO DADOS DAS PESSOAS
	for (int i = 0; i < SIZE; i++) {
		printf("\nDigite os dados da %da pessoa:", (i + 1));
		printf("\nNome: ");
		scanf(" %[^\n]s", p[i].nome);
		printf("Nasc (dd/mm/aa): ");
		scanf(" %d/%d/%d", &p[i].nasc.dia, &p[i].nasc.mes, &p[i].nasc.ano);
	}

	// CALCULANDO PESSOA MAIS VELHA
	for (int i = 0; i < (SIZE - 1); i++) {
		for (int j = (i + 1); j < SIZE; j++) {
			if (p[i].nasc.ano < p[j].nasc.ano) {
				maisVelho = i;
			} else if (p[i].nasc.ano > p[j].nasc.ano) {
				maisVelho = j;
				break;
			} else {
				if (p[i].nasc.mes < p[j].nasc.mes) {
					maisVelho = i;
				} else if (p[i].nasc.mes > p[j].nasc.mes) {
					maisVelho = j;
					break;
				} else {
					if (p[i].nasc.dia < p[j].nasc.dia) {
						maisVelho = i;
					} else if (p[i].nasc.dia > p[j].nasc.dia) {
						maisVelho = j;
						break;
					}
				}
			}
		}
		if (maisVelho == i)
			break;
	}

	// CALCULANDO PESSOA MAIS NOVA
	for (int i = 0; i < (SIZE - 1); i++) {
		for (int j = (i + 1); j < SIZE; j++) {
			if (p[i].nasc.ano > p[j].nasc.ano) {
				maisNovo = i;
			} else if (p[i].nasc.ano < p[j].nasc.ano) {
				maisNovo = j;
				break;
			} else {
				if (p[i].nasc.mes > p[j].nasc.mes) {
					maisNovo = i;
				} else if (p[i].nasc.mes < p[j].nasc.mes) {
					maisNovo = j;
					break;
				} else {
					if (p[i].nasc.dia > p[j].nasc.dia) {
						maisNovo = i;
					} else if (p[i].nasc.dia < p[j].nasc.dia) {
						maisNovo = j;
						break;
					}
				}
			}
		}
		if (maisNovo == i)
			break;
	}

	// EXIBINDO PESSOA MAIS VELHA E MAIS NOVA
	printf("\nMais novo:\n");
	printf("%s\n", p[maisNovo].nome);
	printf("\nMais velho:\n");
	printf("%s\n\n", p[maisVelho].nome);

	return 0;
}