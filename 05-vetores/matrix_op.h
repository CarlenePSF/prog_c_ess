/***************************************************************************
* nome: matrix_op.h
* descrição: header file-fornece funcoes que realizam operacoes 
* com matrizes
* last update: 29/04/2021
****************************************************************************/
#include <stdio.h>
#include <string.h>

//Funcao para inicializar uma matriz com elementos nulos
double inic(int n, double v[n][n])
{
  int i ,j;
    for(i=0; i<n; i++){
      for(j=0; j<n; j++){
        v = 0;
        printf("%f\t ", v[i][j]);
          if(j == n-1) {
                     printf("\n");
                         }
                     }
                   }
 return v[n][n];
}

//Esta funcao gera uma matriz com elementos aleatorios
double randon_matrix(int n, double v[n][n])
{
 // Use current time as seed for random generator
    srand(time(0));

 //Generating a randon matrix
  int i,j;

  for(i= 0; i < n ; i++){
     for(j=0; j< n ; j++){
       v[i][j] = ((rand()%10));
         printf("%f\t ", v[i][j]);
               if(j == n-1){
                         printf("\n");
                         }
                          }
                         }
  return v[n][n];
}

//Esta funcao calcula operacoes basicas entre duas matrizes
double Matrixop(int n, double m1[n][n], double m2[n][n])
{
    double res[n][n];
    char op;
    int i,j,k;

    printf("Introduza uma operacao entre matrizes (+,-,*):\n");
    scanf("%c",&op);


       for(i= 0; i < n; i++){
         for(j=0; j < n; j++){
             int sum=0;
             switch(op){
                case '+': res[i][j] =  m1[i][j] + m2[i][j];
                break;
                case '-': res[i][j] =  m1[i][j] - m2[i][j];
                break;
                case '*':
                    for(k= 0; k < n; k++){
                        sum += m1[i][k]*m2[k][j];
                                           }
                        res[i][j] = sum;
                break;
                        }
         printf("%f\t ",res[i][j]);
           if(j == n-1) {
                        printf("\n");
                          }
                           }
                          }
    return(res[n][n]);
}

//Esta funcao armazena uma matriz num arquivo
int store_vector(int n, double v[n][n], char filename[20])
{
    char a[20] = "file_name.dat";

    FILE *out;
    sprintf(a, "%s", filename);

    out = fopen(filename, "w");

    for(int i = 0 ; i < n; i++)
      for(int j = 0 ; j < n; j++){
        fprintf(out,"%f\t",v[i][j]);
        if(j==n-1){
                fprintf(out,"\n");
                }
      }
fclose(out);

return 0;
}
