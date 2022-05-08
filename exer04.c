//           TRABALHO / AV1
//           ALUNO: JONAS MEDEIROS ANDRADE
//           ANALISE E DESENVOLVIMENTO DE SISTEMAS 
//           MATRICULA: 201803119331

#include <stdio.h>
#include <stdlib.h>

int fibonacci(int termo){
   for(int i = 0; i <= termo;i++){
        if (termo < 2) {
            return termo;
        } else {
            return fibonacci(termo - 1) + fibonacci(termo - 2);
        }
  }
}

int main(){
      printf("O decimo termo da sequencia de fiboncci: %d\n",fibonacci(10));
    return 0;
}