/***********************************************************
* nome: exemplo13.c
* descrição: Declaração e utilização de strings
* data: 29/04/2021
************************************************************/

//Import C Libraries
#include <stdlib.h>
#include <string.h>      /*bilbioteca para trabalhar com strings*/
#include <stdio.h>
#include "string_op.h"  /*inclue o arquivo string_op.h que contem funcoes
                        de manipulacao de string*/


// defining constants
#define n 20
#define SEP_NOME ", "


//Declaring global variables
char nome[50];
char copy[50];
int i;
//main program
 int main(void)
 {
 //  char nome[] = "Carlos Henrique Rebollo";
 //  char profissao[9] = "Analista";
 //  printf("Nome: %s ( letra inicial %c). Profissão %s \n",
 //         nome, nome[0], profissao);

  char Nome[n+1], Sobrenome[n+1], Completo[2*n+1];
  for(i=0; i<1; i++)
    {
     printf("Nome: ");
    //scanf("%s", Nome);
     fgets_wrapper(Nome, n+1, stdin);
     if(string_length(Nome)==0)
        break; //termina o programa
     printf("Sobrenome: ");
      //scanf(" %s", Sobrenome);
      fgets_wrapper(Sobrenome, n+1, stdin);
      //gets(Sobrenome);
      /*O bloco abaixo sao funcoes pre-definidas da biblioteca (string.h)*/
      strcpy(Completo, Sobrenome);
      strcat(Completo, SEP_NOME);
      strcat(Completo, Nome);

/*O bloco abaixo sao funcoes criadas que executam funcoes semelhantes
  aquelas da biblioteca (string.h)*/
      //string_copy(Completo, Sobrenome);
      //string_concat(Completo, SEP_NOME);
      //string_concat(Completo, Nome);
      puts(Completo);
   }
  printf("O numero de vezes que a letra 'a' aparece em %s e %d\n.",
         Nome, string_count_c(Nome, 'a'));
  return EXIT_SUCCESS;
 }
