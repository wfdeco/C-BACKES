/*
Crie uma estrutura representando um aluno de uma disciplina. Essa estrutura
deve conter o número de matrícula do aluno, seu nome e as notas de três
provas. Agora, escreva um programa que leia os dados de cinco alunos e os
armazena nessa estrutura. Em seguida, exiba o nome e as notas do aluno que
possui a maior média geral dentro os cinco.
*/

#include <stdio.h>

#define QTD_ALUNOS 2
#define QTD_NOTAS 3

struct aluno {
	int matricula;
	char nome[50];
	float nota[QTD_NOTAS];
};

int main(int argc, char *argv[]) {
	
	struct aluno a[QTD_ALUNOS];
	float media[QTD_ALUNOS];

	// LENDO DADOS DOS ALUNOS E CALCULANDO SUAS MEDIAS
	for (int i = 0; i < QTD_ALUNOS; i++) {
		printf("\n");
		printf("Dados do %do aluno:\n", (i + 1));
		printf("matricula: ");
		scanf(" %d", &a[i].matricula);
		printf("nome: ");
		scanf(" %[^\n]s", a[i].nome);
		for (int j = 0; j < QTD_NOTAS; j++) {
			printf("nota %d: ", (j + 1));
			scanf(" %f", &a[i].nota[j]);
			media[i] += a[i].nota[j];
		}
		media[i] /= QTD_NOTAS;
	}

	// COMPARANDO MEDIAS E DEFININDO O MELHOR ALUNO
	int maiorMedia = media[0];
	int melhorAluno;
	for (int i = 0; i < QTD_ALUNOS; i++) {
		if (i == 0) {
			float maiorMedia = media[i];
			melhorAluno = i;
			continue;
		}
		if (maiorMedia < media[i]) {
			maiorMedia = media[i];
			melhorAluno = i;
		}
	}

	// EXIBINDO DADOS DO MELHOR ALUNO
	printf("\n");
	printf("Aluno com maior media:\n");
	printf("matricula: %d\n", a[melhorAluno].matricula);
	printf("nome: %s\n", a[melhorAluno].nome);
	printf("notas: ");
	for (int i = 0; i < QTD_NOTAS; i++)
		printf("%.2f ", a[melhorAluno].nota[i]);
	printf("\n\n");

	return 0;
}