/*
Escreva um programa que contenha uma estrutura representando uma data válida.
Essa estrutura deve conter os campos dia, mês e ano. Em seguida, leia duas
datas e armazene nessa estrutura. Calcule e exiba o número de dias que
decorreram entre as duas datas.
*/

#include <stdio.h>

struct data {
	int dia;
	int mes;
	int ano;
};

int main(int argc, const char *argv[]) {
	
	struct data d[2];
	struct data difData;

	// LENDO DATAS 1 E 2
	for (int i = 0; i < 2; i++) {
		printf("\n%da data:\n", (i + 1));
		printf("dia: ");
		scanf(" %d", &d[i].dia);
		printf("mes: ");
		scanf(" %d", &d[i].mes);
		printf("ano: ");
		scanf(" %d", &d[i].ano);
	}

	// INSERINDO DIFERENCA NA DIFDATA
	difData.ano = d[0].ano - d[1].ano;
	difData.mes = d[0].mes - d[1].mes;
	difData.dia = d[0].dia - d[1].dia;

	// CALCULANDO DIFERENCA POSITIVA OU NEGATIVA
	if (difData.ano < 0)
		difData.ano *= -1;
	else if (difData.ano == 0) {
		if (difData.mes < 0)
			difData.mes *= -1;
		else if (difData.mes == 0)
			if (difData.dia < 0)
				difData.dia *= -1;
	}

	// EXIBINDO A CONTAGEM DOS DIAS DE DIFERENCA
	printf("\nDias decorridos: %d\n\n", ((difData.dia * 1) + 
										 (difData.mes * 30) + 
										 (difData.ano * 365)));

	return 0;
}