#include <stdio.h>

int main(){
    int dia;
    printf("Digite um número de 1 até 7: ");
    scanf("%d", &dia);

    switch (dia){
    case 1: printf("domingo\n"); break;
    case 2: printf("segunda\n"); break;
    case 3: printf("terça\n"); break;
    case 4: printf("quarta\n"); break;
    case 5: printf("quinta\n"); break;
    case 6: printf("sexta\n"); break;
    case 7: printf("sabado\n"); break;

    default: printf("o valor digitado não está entre 1 a 7.");

    }

    return 0;
}
