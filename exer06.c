//           TRABALHO / AV1
//           ALUNO: JONAS MEDEIROS ANDRADE
//           ANALISE E DESENVOLVIMENTO DE SISTEMAS 
//           MATRICULA: 201803119331




#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 //"Pe de Moleque", 13205 e R$0,20 === posição 0
 //Cocada Baiana", 15202 e R$0,50  === posição 1

  struct Produto  {
    char nome[30];    
    int codigo;      
    double  preco;    
 };

struct Produto* alocar(struct Produto *p,int n){
    p =  malloc(n * sizeof(struct Produto));
    if(p!=NULL){
        return (p);
    }
}
void listar(struct Produto *p,int n){
    
    for(int i=0; i < n; i++){
        printf("nome: %s \ncodigo: %d\npreco: %.2f\n\n",p[i].nome,p[i].codigo,p[i].preco);
    }

}
void atribuir(struct Produto *p,int indice, char* nome,int codigo,double preco){
    strcpy(p[indice].nome, nome);
           p[indice].codigo = codigo;
           p[indice].preco = preco;
}

int main(){
struct Produto *p;

p = alocar(p,10); //aloca 10 espaço para cada produto

atribuir(p,0,"Pe de Moleque",13205,0.20);  //posição 0
atribuir(p,1,"Cocada Baiana",15205,0.50);  //posição 1

listar(p,10); // lista 3 produtos


// Atribuição direta (matriz)
//  struct Produto matriz[10] = {{"Pe de Moleque",13205, 0.20}, //posição 0
//                              {"Cocada Baiana",15202, 0.50}}; //posição 1
 return 0;
}
