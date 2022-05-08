//           TRABALHO / AV1
//           ALUNO: JONAS MEDEIROS ANDRADE
//           ANALISE E DESENVOLVIMENTO DE SISTEMAS 
//           MATRICULA: 201803119331



#include <stdio.h>
#include <string.h>
#include <locale.h>
// troca de strings

#define STRMAX 50

void troca_string (char *str_a, char *str_b)
{
  char strtemp[STRMAX];  /* string temporaria usada para a troca */

  strcpy (strtemp, str_a);
  strcpy (str_a, str_b);
  strcpy (str_b, strtemp);
}

void main (void)
{
    setlocale(LC_ALL,"Portuguese");
  char string1 = 'A';
  char string2 = 'b';


  troca_string (&string1, &string2);
  printf ("\nA primeira string: %c \nA segunda string: %c\n\n", string1, string2);
}