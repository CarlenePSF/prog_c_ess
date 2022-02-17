/*************************************************
 * nome: switch.c
 * descrição: instrução switch criando um dicionario
 * data: 29/05/2021
 * usamos o switch quando temos muitas estruturas if...else
 * o que pode tornar o programa confuso
 *************************************************/

// tipos de variaveis e como chama-las.
/*
     char (%c)    //Uma variavel do tipo char so armazena um caractere!!
     int  (%d)    //Variavel inteira
     float (%f)   // variavel real
     double (%f)
     Notacao cientifica (%e ou %E)
*/

//Os prefixos, a seguir, se aplicam para todos os tipos de variaveis e modificam o espaco da memoria usado para armazenar cada variavel
/*
     short int (%hd)
     long int (%ld)
     unsigned int (%u)
     unsigned short int (%hu)
     unsigned long int (%lu)
*/


#include <stdio.h>
#include <stdlib.h>

void dict_pais(int num)
{
switch (num){
          case 1: 
             printf("Encontrei o país Brasil no dicionario.\n");
             break;
          case 2: 
             printf("Encontrei o país Espanha no dicionario.\n");
             break;
          case 3: 
             printf("Encontrei o país Reino Unido no dicionario.\n");
             break;
          case 4:
             printf("Encontrei o país Estados Unidos da América.\n");
             break;
          default:
             printf("País não encontrado.\n");
          }
}

int main(){
    int num;

    printf("Escolha uma das opções de pais abaixo.\n");
    printf("1 - Brasil\n");
    printf("2 - Espanha\n");
    printf("3 - Reino unido\n");
    printf("4 - EUA\n");

    printf("Digite sua escolha: ");
    scanf("%d",&num);

    dict_pais(num);

    return EXIT_SUCCESS;
}