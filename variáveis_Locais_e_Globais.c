#include <stdio.h>]

char universal[14]= "ForaDaFunção";

int main() {

    char loca[15]= "localFicaDentroDaFunção";

    printf("essa é variavel local: %d\n", loca);
    printf("essa é variavel universal: %s\n", universal);

    return 0;
}
