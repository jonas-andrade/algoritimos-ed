// exercicio p/ AV2  ESTRUTURA DE DADOS - ORDENAÇÃO
// nome:  JONAS MEDEIROS ANDRADE
// MATRÍCULA: 201803119331

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

float bubbleSort(int *v,size_t tam,clock_t temp){
 printf("\n BUBBLE SORT\n");
    int troca = 1;
    int i = 0;
    int aux;
     while (troca){
          troca = 0;
          while (i < tam - 1){
              
              if (v[i] > v[i+1]){
                  aux = v[i];
                  v[i] =  v[i+1];
                   v[i+1] = aux;
                   troca = 1; 
              
              }
                i++;  
          }
          i = 0;      
      }
      temp = clock() - temp;
      return ((float)temp)/CLOCKS_PER_SEC;

}
float selectionSort(int *v,size_t tam,clock_t temp){
 printf("\n SELECTION SORT\n");
 
     int i,j,aux;
    for (i=0; i < tam-1; i++)
    {
        for (j=i+1; j < tam; j++)
        {
            if (v[i] > v[j])
            {
                aux = v[i];
                v[i] = v[j];
                v[j] = aux;
            }
        }
    }
    temp = clock() - temp;
    return ((float)temp)/CLOCKS_PER_SEC;

}
float insertionSort(int *v, size_t tam,clock_t temp){
    printf("\n INSERTION SORT\n");
    int i, j, aux;
    for (i=0; i< tam-1; i++)
    {
        j=i+1;
        while (v[j-1]>v[j] && j > 0)
        {
            aux = v[j-1];
            v[j-1]=v[j];
            v[j]=aux;
            j--;
        }
    }
      temp = clock() - temp;
      return ((float)temp)/CLOCKS_PER_SEC;
   
}
float inputORPrint(int *v,size_t tam,int i){
     srand(time(NULL));
    if(i==1){ 
        for(int y = 0; y < tam ; y++){ v[y] = rand() % tam;}
    }else{ 
         // print 
        for(int x = 0; x < tam ; x++){printf("%d ",v[x]);} printf("\n\n");

    }       
}


int main(void){

    int vetor[100];  int V2[10000];  int V3[100000];
    size_t tam = sizeof(vetor) / sizeof(vetor[0]);  clock_t tempo;
    

    tempo = clock();
    inputORPrint(vetor,tam,1); // atribuição dinâmica para a variavel vetor
  

    // chamada aos algoritimos de ordenaçãO

        float temp1 = bubbleSort(vetor,tam,tempo); 
         
        // float temp2 = selectionSort(vetor,tam,tempo); 
        
        // float temp3 = insertionSort(vetor,tam,tempo); 
        
        

        printf("\nBUBBLE SORT: tempo de %f milisegundos .\n",temp1); 
        // printf("\nSELECTION SORT: tempo de %f milisegundos .\n",temp2);
        // printf("\nINSERTION SORT: tempo de %f milisegundos .\n",temp3);
        inputORPrint(vetor,tam,0);  // print
    
    

}

//obrigado pela dica professora.