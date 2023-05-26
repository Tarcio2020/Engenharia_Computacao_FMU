#include <stdio.h>

int main() {
    int vetorA[5], soma;
        vetorA[0]=1;
        vetorA[1]=1;
        vetorA[2]=1;
        vetorA[3]=3;
        vetorA[4]=3;


        soma=vetorA[0]+vetorA[1]+vetorA[2]+vetorA[3]+vetorA[4];
        printf("A soma dos valores é: %d", &soma);
        return 0;
}
