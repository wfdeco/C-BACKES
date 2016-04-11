/*
Crie uma estrutura representando um atleta. Essa estrutura deve conter o nome
do atleta, seu esporte, idade e altura. Agora, escreva um programa que leia os
dados de cinco atletas. Calcule e exiba os nomes do atleta mais alto e do mais
velho.
*/

#include <stdio.h>

#define SIZE 5

struct atleta {
	char nome[50];
	char esporte[50];
	int idade;
	float altura;
};

int main(int argc, const char *argv[]) {
	
	struct atleta a[SIZE];
	int maisAlto;
	int maisVelho;

	// LENDO DADOS DOS ATLETAS
	for (int i = 0; i < SIZE; i++) {
		printf("\nAtleta %d:\n", (i + 1));
		printf("Nome: ");
		scanf(" %[^\n]s", a[i].nome);
		printf("Esporte: ");
		scanf(" %[^\n]s", a[i].esporte);
		printf("Idade: ");
		scanf(" %d", &a[i].idade);
		printf("Altura: ");
		scanf(" %f", &a[i].altura);
	}

	// CALCULANDO ATLETA MAIS ALTO
	for (int i = 0; i < (SIZE - 1); i++) {
		for (int j = (i + 1); j < SIZE; j++) {
			if (a[i].altura > a[j].altura) {
				maisAlto = i;
			} else if (a[i].altura < a[j].altura) {
				maisAlto = j;
				break;
			} else {
				maisAlto = -1;
			}
		}
		if (maisAlto == i || maisAlto == -1)
			break;
	}

	// CALCULANDO ATLETA MAIS VELHO
	for (int i = 0; i < (SIZE - 1); i++) {
		for (int j = (i + 1); j < SIZE; j++) {
			if (a[i].idade > a[j].idade) {
				maisVelho = i;
			} else if (a[i].idade < a[j].idade) {
				maisVelho = j;
				break;
			} else {
				maisVelho = -1;
			}
		}
		if (maisVelho == i || maisVelho == -1)
			break;
	}

	// EXIBINDO ATLETA MAIS ALTO E MAIS VELHO
	printf("\nAtleta:\n");
	if (maisAlto != -1)
		printf("Mais alto: %s\n", a[maisAlto].nome);
	else
		printf("Mais alto: Existe mais de um atleta\n");
	if (maisVelho != -1)
		printf("Mais velho: %s\n\n", a[maisVelho].nome);
	else
		printf("Mais velho: Existe mais de um atleta\n\n");

	return 0;
}