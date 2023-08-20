#include <stdio.h>
#define PI 3.14


int main() {
    float A, somaPI;
    printf("Digite o valor de A: ");
    scanf("%f", &A);

    somaPI=A+PI;

    printf("O valor da soma é: %.2f", somaPI);
    return 0;

}
