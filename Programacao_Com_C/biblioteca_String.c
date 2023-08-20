#include <stdio.h>
#include <string.h>

int main () {
	char nome[50];
	int tamanho;

	/*

	printf ("Digite seu nome: ");
	gets(nome);
	tamanho = strlen(nome);

	printf ("%s\n", nome);
	printf ("%d\n", tamanho);
    */
	strcpy(nome, "Tarcio Teles");
	strcat (nome, " e o meu nome!");

	printf ("%s", nome);



	return 0;
}
