#include <stdio.h>

enum animais {Cavalo, Cachorro, Gato};

int main () {
	enum animais animal;
	
	animal = Gato;
	
	printf ("%d\n", animal);
	
	if (animal==Cachorro){
		printf ("Animal cachorro!\n");
	}else{
		printf ("O animal nao e cachorro!\n");
	}
	
	return 0;
}
