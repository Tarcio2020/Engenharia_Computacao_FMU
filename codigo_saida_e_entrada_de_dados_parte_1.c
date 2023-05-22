#include <stdio.h>

int main () {
	int A, B, SOMA;
	
	printf ("Digite um valor para a variavel A: ");
	scanf ("%d", &A);
	printf ("Digite um valor para a variavel B: ");
	scanf ("%d", &B);
	
	SOMA = A+B;
	
	printf ("O resultado da operacao e: %d\n", SOMA);
	
	return 0;
}
