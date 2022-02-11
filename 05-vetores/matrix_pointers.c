/*************************************************************************************
* nome: vectors.c
* descrição: trabalhando com matrizes e ponteiros
* data: 05/04/2021
*
* nos ponteiros (&) e usado para referencia do endereco (Bytes)
*               (*) aponta para o valor alocado no endereco (valor da variavel)
**************************************************************************************/


#include<stdlib.h>
#include<math.h>
#include<time.h>
#include<stdio.h>

#define Max 4
#define espaco ' '

int upper_triangular();
int lower_triangular();
void store_vector();


int uppert[Max][Max];
int lowert [Max][Max];

int main(){
  upper_triangular(uppert);
  printf("\n" );
  lower_triangular( lowert );
}

/*****************************************************************************************/
int upper_triangular(ptr) int *ptr;
{
  int i,j;
  int a = 1;
  int b = 0;
    
     for(i=0; i< Max ; i++){
      for(j=0; j<Max; j++){
       if (j>=i) {
          ptr = &a;             /*sempre e bom carregar um valor inicial do ponteiro*/
                 }
                 else{
                    ptr = &b;   /*sempre e bom carregar um valor inicial do ponteiro*/
                     }
                     if(j==0)   
                      printf("|%d\t",*ptr);
                     else if(j==Max-1){
                      printf("%d|\n",*ptr);
                                  }
                                  else printf("%d\t",*ptr);
               }
             }
  return EXIT_SUCCESS;
}

int lower_triangular(ptr) int *ptr;
{
  int i,j;
  int a = 1;
  int b = 0;
    /*sempre e bom carregar um valor inicial do ponteiro*/
     for(i=0; i< Max ; i++){
      for(j=0; j<Max; j++){
       if (j<=i) {
          ptr = &a;
                 }
                 else{
                    ptr = &b;
                     }
      if(j==0)   
        printf("|%d\t",*ptr);
      else if(j==Max-1){
          printf("%d|\n",*ptr);
                      }
      else printf("%d\t",*ptr);
               }
             }
  return(EXIT_SUCCESS);
}

void store_vector(float v[Max][Max])
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


