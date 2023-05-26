#include <stdio.h>

int mult(int x, int z) {
    return x*z;
}


void imprimir(){
    char nome[20];
    printf("Por favor digite seu primeiro nome: \n");
    scanf("%s", nome);

    printf("Até logo, %s", nome);

    imprimir();
}


int main () {



    int a, b;
    printf("Digite o valor de A e B respectivamente:\n ");
    scanf("%d %d", &a, &b);

    printf("A soma dos números digitados é: %d \n\n", mult(a,b));


    imprimir();

    return 0;
}
