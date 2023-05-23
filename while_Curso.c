#include <stdio.h>

//While >> Repetição automática do código


int main(){
    int numero, maior, i;
    printf("Digite um número inteiro; ");
    scanf("%d", &numero);
    maior=numero;
    i=2;
    while (i<=10){
        printf("Digite outro número");
        scanf("%d", &numero);
        if(numero>maior){
            maior=numero;
        }
        i++;

    }
    printf("O maior número digitado foi:%d\n", maior);
    return 0;
}
