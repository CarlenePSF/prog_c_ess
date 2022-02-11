/****************************************************************************
* nome: vectors.c
* descrição: trabalhando com vetores (array) e matrizes
* last update: 20/02/2021
*******************************************************************************/
#include <stdlib.h>
#include <stdio.h>
#include "matrix_op.h"  /*biblioteca simples que realiza (+/-/*) com matrizes */

//Definicao de constantes
#define n 2

//  Programa principal
int main()
{
/*double m[3][3]={{2.0, 3.0, 4.5},
                {4.6, 7.9, 5.6},
                {3.3, 5.6, 4.4}};
  for(int i= 0; i < 3 ; i++){
     for(int j=0; j< 3 ; j++){
         printf("%f\t ", m[i][j]);
               if(j == 3-1){
                         printf("\n");
                         }
                          }
                        }
                        */

double m01[n][n];
double m02[n][n];
double m03[n][n];

char filename01[20] = "matrix01.dat";
char filename02[20] = "matrix02.dat";

   printf("\n");
   randon_matrix(n, m01) ;
   printf("\n");
   randon_matrix(n, m02);
   printf("\n");
   m03[n][n] = Matrixop(n, m01, m02);
   printf("\n");
   store_vector(n, m01, filename01);
   //store_vector(n, m02, filename02);

 return EXIT_SUCCESS;
}
