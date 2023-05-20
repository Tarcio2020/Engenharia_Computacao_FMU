#include <stdio.h>
#include <stdlib.h>
//ESTRUTURAS DE DECISÃO
int main (int argc, char *argv[]) {
  
  //DECISÃO
  
  int idade=-25;
  
 printf("verifique as idades.\n");
  //(if) CONDIÇÃO||PERGUNTA
  //SIMPLES



  //COMPOSTA
    if(idade >=18 && idade < 120)
        printf("maior");
        
    else if(idade >=120 || idade<=0)
        printf("idade invalida");
    else
        printf("menor");
        
        
        
                
      //ANINHADAS
    if(idade >=0) 
    {
        if (idade<120)
            printf("valido\n");
        else
            printf("idade invalida\n");
            
        if (idade<18)
            printf("menor");
        
    }
        
        
        
        
}


+






