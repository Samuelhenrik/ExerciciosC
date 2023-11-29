#include <stdio.h>
#define DIM 100
#define MAX 50

struct tipoData{
	int dia;
	int mes;
	int ano;	
};

struct tipoAgenda{
	char nome[MAX+1];
	int telefone;
	tipoData aniver;
};


int main()
{
	tipoAgenda agenda[DIM];
	int i, n;
	tipoData data;

	printf("Informe a quantidade de amigos: ");
	scanf("%d", &n);
	
	for (i = 0; i < n; i++) {
		printf("\nAmigo(a): %3d\n", i+1);
		printf(" Nome : ");
		scanf(" %[^\n]", agenda[i].nome);
		printf(" Telefone : ");
		scanf("%d", &agenda[i].telefone);
		printf(" Aniversário: ");
		scanf("%d/%d/%d", &agenda[i].aniver.dia, &agenda[i].aniver.mes,
		&agenda[i].aniver.ano);
	}

	printf("\nInforme uma data (dd/mm): ");
	scanf("%d/%d", &data.dia, &data.mes);

	for (i = 0; i < n; i++)
		if (agenda[i].aniver.dia == data.dia && agenda[i].aniver.mes == data.mes)
			printf("%-50s %8d\n", agenda[i].nome, agenda[i].telefone);

	return 0;
}