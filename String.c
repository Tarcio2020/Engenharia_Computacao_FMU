#include <stdio.h>

int main() {
    char nome[10], sobreNome[20];
    printf("Digite seu nome:\n");
    scanf("%s", nome);

    printf("Digite seu Sobre Nome:\n");
    scanf("%s", sobreNome);

    printf("Oseu nome completo é: %s %s", &nome, &sobreNome);

    return 0;

    }
