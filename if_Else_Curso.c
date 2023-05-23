#include <stdio.h>


int main() {
    int numero;
    printf("Digite um número: ");
    scanf("%d", &numero);

    if (numero>100) {
        printf("número maior que 100");
    } else{
        printf("tente outra vez");
    }

    return 0;
}


