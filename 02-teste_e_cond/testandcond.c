/****************************************************************************
* nome: testandcond.c
* criado: 30/04/2021
* last update: ---
* descrição: teste e condições
* OBS: Em C não existe operadores boleanos
*      o valor falso (FALSE) e retornado como zero 0
       enquanto o valor verdadeiro (TRUE) e qualquer valor diferente de zero por padrao (1)
*******************************************************************************/
#include <stdio.h>

int main()
{
 int x,y;
 printf("Introduza dois inteiros:"); scanf("%d%d",&x,&y);
 printf("O resultados de %d == %d : %d\n",x,y,x==y);
 printf("O resultados de %d > %d : %d\n",x,y,x>y);
 printf("O resultados de %d >= %d : %d\n",x,y,x>=y);
 printf("O resultados de %d < %d : %d\n",x,y,x<y);
 printf("O resultados de %d <= %d : %d\n",x,y,x<=y);
 printf("O resultados de %d != %d : %d\n",x,y,x!=y);
 printf("O resultados de %d =! %d : %d\n",x, y, x=!y);
}
