#include <stdio.h>

int main(){
    int matriz[2][2], i,j;

    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("Elemento [%d][%d]:", j, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("%3d", matriz[i][j]);
        }
        printf("\n");

    }
}
