/*************************************************************************************
* nome: vectors.c
* descrição: trabalhando com vetores (array) e matrizes
* data: 04/04/2021
**************************************************************************************/
#include<stdlib.h>
#include<math.h>
#include<time.h>
#include<stdio.h>

#define Max 5
#define espaco ' '

/*Declaracao de variaveis do programa principal*/

float matrix01[Max][Max];
float matrix02[Max][Max];
float matrix03[Max][Max];
char op;



/***************************************
 * functions to call in the main program
 ****************************************/
float Matrixop(int dim, float m1[dim][dim], float m2[dim][dim], char op)      /*Esta funcao calcula operacoes basicas entre duas matrizes*/
{
  int i,j;
  float res[dim][dim];

  printf("Introduza uma operacao entre matrizes (soma,subtracao):\n");
  scanf("%c",&op);
  printf("\n");

  for(i= 0; i < dim; i++)
    for(j=0; j < dim; j++){
      switch(op){
        case '+': res[i][j] =  m1[i][j] + m2[i][j];
        break;
        case '-': res[i][j] =  m1[i][j] - m2[i][j];
        break;
        }
        if(j==0){
         printf("|\t%f\t ", res[i][j]);
                   }
                   else{
                          printf("%f\t ", res[i][j]);
                        }
        if(j==dim-1) {
                        printf("|\n");
                      }
                        
      }
  return (res[dim][dim]);
}

float inic(int n, float s[n][n])
{
  int i ,j;
    for(i=0; i<n; i++)
      for(j=0; j<n; j++)
        s[i][j]= espaco;
  return(s[n][n]);      
}



float Randon_matrix(int n, float v[n][n])        /*Esta funcao gera uma matriz com elementos aleatorios*/
{
 // Use current time as seed for random generator
    srand(time(0));

 /*Generating a randon matrix*/
  int i,j;
  for(i= 0; i < n; i++){
    for(j=0; j< n; j++){
        v[i][j] =  rand()%10;
       printf("%f\t ", v[i][j]);
       if(j==n-1){
       printf("\n");
                  }
                         }
}
   return(v[n][n]);
}
 



void store_vector(float v[Max][Max])          /*Esta funcao armazena uma matriz num arquivo*/
{
  FILE *fp_out;
  int i,j;
  fp_out = fopen("Matrix.dat","w");
  for(i = 0 ; i < Max; i++)
    for(j = 0 ; j < Max; j++){
      fprintf(fp_out,"%f\t",v[i][j]);
      if(j==Max-1){
                    fprintf(fp_out,"\n");
                  }

      }
  fclose(fp_out);
}



/*Programa principal*/

int main(){

   inic(Max,matrix01);
   inic(Max,matrix02);
   
   Randon_matrix(Max,matrix01);
   printf("\n");
   Randon_matrix(Max,matrix02);
   printf("\n");

   Matrixop(Max, matrix01, matrix02 , op);
   printf("\n");

   return EXIT_SUCCESS;
   }