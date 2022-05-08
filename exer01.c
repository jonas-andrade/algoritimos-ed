//           TRABALHO / AV1
//           ALUNO: JONAS MEDEIROS ANDRADE
//           ANALISE E DESENVOLVIMENTO DE SISTEMAS 
//           MATRICULA: 201803119331

#include <stdio.h>

int main(void){

// Questão 01

// - ========== Explique a diferença entre: p++;    (*p)++;     *(p++); ==========================

// - p++: É um incremente de ponteiro, o ponteiro p passará a apontar para a posição de memória a frente.
//       é o mesmo que: p = p + 1; ou p += 1; 
// -----------------------------------------------------

// - (*p)++: Incrementa o conteúdo apontado por p, ou seja, o valor armazenado na
// variável para qual p está apontando.

// -----------------------------------------------------

// - *(p++): Incrementa p (como em p++) e acessa o valor encontrado na nova
// posição.
// -----------------------------------------------------


// - ================== O que quer dizer *(p+10);? ==========================

// significa que está acessando o endereço da 10° posição a frente do ponteiro P


// -Explique o que você entendeu da comparação entre ponteiros.



// -----------------------------------------------------


printf("Escolha a questão:\n");
printf("(1) ========== Explique a diferença entre: p++;    (*p)++;     *(p++); ========================== :\n");
printf("(2) ========== O que quer dizer *(p+10);? ========================== :\n");
printf("(3) ========== -Explique o que você entendeu da comparação entre ponteiros. ========================== :\n");
int num;
scanf("%d",&num);
if(num == 1){
    printf("- p++: É um incremente de ponteiro, o ponteiro p passará a apontar para a posição de memória a frente.\n é o mesmo que: p = p + 1; ou p += 1;\n ");
    printf("- (*p)++: Incrementa o conteúdo apontado por p, ou seja, o valor armazenado na variável para qual p está apontando.\n");
    printf("- *(p++): Incrementa p (como em p++) e acessa o valor encontrado na nova posição.\n");
}else if (num == 2){
    printf("\nsignifica que está acessando o endereço da 10° posição a frente do ponteiro P\n");
}else{


}
// -----------------------------------------------------

// //   ( testes ..)
// //   *p , *(p) ou *(p+0)   *p++ , *(p++) , (*p)++  (primeiro elemento do vetor) 
// //   *(p+1)           (segundo elemento do vetor) 
// //   *p+1 ou (*p)+2   ( operação de soma )
// int vetor[] = {1995,2020,200,100,0,0,0,7,0,0,300};
// int *p;  p = vetor;    
// printf("%d\n\n",++*p);
return 0;
};