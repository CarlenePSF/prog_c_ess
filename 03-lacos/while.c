/****************************************************************************
* nome: while.c
*  criado: 30/04/2021
* last update:
*
* descrição: trabalhando com laco while
* sintaxe:
          while(condicao){
*                corpo do laco
*                      }
*
*******************************************************************************/
#include <stdlib.h>
#include <stdio.h>

int main(void)
{
 int k = 1;
 while(k<=10){
   printf("%d\n",k);
   k = k+1;
 }
 int l = 10;
 while(l){        //escrever while(l) ou while(l!=0)
                  //e exatamente a mesma coisa
   printf("%d\n",l);
   l = l-1;
 }


// Imprime a tabuada de uma numero inserido pelo usuario
  int i, num;
  printf("Entre com um numero: \n");
  scanf("%d",&num);
  i = 1;
  while ( i <= 10)
   {
    printf("%2d * %2d = %2d\n", num, i, (num*i));
    i = i+1;
  }
 puts("\n");
//Imprime a tabuada do 1 ao 5

  int n, j;
  n = 1;
  while(n<=5)    //poderia ser while(n!=0) tambem
  {
     j = 1;
     while(j<=10){

       printf("%2d * %2d = %2d\n", n, j, (n*j));
       j = j+1;
                 }
   n = n+1;
   puts("\n");
  }

}
