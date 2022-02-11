/****************************************************************************
* nome: while.c
* criado: 30/04/2021
* last update:
*
* descrição: trabalhando com laco for
* obs: util quando o numero de interacoes e conhecido a priori
*       sintaxe: for(carga inicial ; condicao ; pos-instrucao){
*                     corpo do laco
*                     }
*
*******************************************************************************/
#include <stdlib.h>
#include <stdio.h>



int tabuada(int n)
{
  int i,j;
  for(i=1; i<= n ; i = i+1 )
  {
    for(j=1 ; j<=10 ; j=j+1)
      printf("%2d * %2d = %2d\n", i, j, (i*j));
      puts("\n");

    if(i == n)
      {
        printf("Pressione <ENTER> para continuar...\n");
        getchar();
      }
  }
  return 0;
}

int loopfor_simples(int n)
{
  int i;
  for(i = 1; i<= n ; i = i+1)
    {
      printf("%2d\n",i);
    }
    for(i = n; i>=1 ; i = i-1){
    printf("%2d\n",i)  ;
    }
 return 0;
}

int prod_and_sum(int num)
{
  int j, soma;
  float produto;

  soma = 0 ;
  produto = 1.0;
  for(j=1; j<=num; j = j+1){
    soma = soma + j;
    produto = produto * j;
  }
  printf("A soma dos %d numeros naturais e %d.\n",num, soma);
  printf("O produto dos %d numeros naturais e %f.\n",num, produto);

return 0;
}




/*main function*/
int main(void)
{

  int num;
  printf("Enter a number natural: \n"); scanf("%d",&num);

  prod_and_sum(num);
  puts("\n");
  tabuada(num);

return EXIT_SUCCESS;

}
