#include <stdio.h>

int main() {
        int vet[6], soma, i;

        for(i=0;i<6;i++){
            printf("Digite um número para o vetor [%d]:", i);
            scanf("%d", &vet[i]);
        }

         for(i=0;i<6;i++){
            printf("Vetor [%d] = %d\n", i, vet[i]);
        }

        soma=0;

         for(i=0;i<6;i++){
            soma+=vet[i];
        }

        printf("SOMA = %d", &soma);

        return 0;
}
