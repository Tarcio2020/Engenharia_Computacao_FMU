#include <stdio.h>

//for laços de repetição...

int main() {
    int numero, menor, i;
    printf("Digite o Número Inteiro: ");
    scanf("%d", &numero);
    menor=numero;



    for(i=2;i<=6;i++){
        printf("Digite outro Número: ");
        scanf("%d", &numero);
        if(numero<menor){
            menor=numero;
        }
    }

    printf("O menor numero foi: %d\n", menor);
    return 0;
}
