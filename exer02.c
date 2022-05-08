//           TRABALHO / AV1
//           ALUNO: JONAS MEDEIROS ANDRADE
//           ANALISE E DESENVOLVIMENTO DE SISTEMAS 
//           MATRICULA: 201803119331


#include <stdio.h>
#include <stdlib.h>

// zerar...
int main(){

    //declaração
   void zerar(int *a,int *b);

   // variaveis a ser apontada como ponteiros
    int a = 20;  int b = 30;
    // chamada da função
    zerar(&a,&b);
    return 0;
}
void zerar(int *a,int *b){
    *a = *b = 0;
}

// ===== testes ===
// int zerar(int *a,int *b){
//     *a = *b = 0;
//     return *a+*b;
// }
// int main(void){
//     int a = 20;  int b = 30;

//     printf(" valor de a + b :: %d\n\n",zerar(&a,&b));

//     return 0;
// }