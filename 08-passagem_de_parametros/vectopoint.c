/*************************************************************************************
* nome: vectopoint.c
* descrição: passagem de vetores para funcoes como ponteiros
* data: 05/04/2021
**************************************************************************************/
#include<stdlib.h>
#include<stdio.h>

#define N 4

float store(n ,vec) int n; float *vec;
{ 
    int i;
    
    for(i=0; i< n; i++ ){
        printf("entre com o valor para a posicao v[%d]:",i);
        scanf("%g",&vec[i]);
        }
   return (float) *vec;
}
void store_vector(n, v) int n; float *v;
{
    FILE *fp_out;
    int i;
    fp_out = fopen("vector.dat","w");
    for(i = 0 ; i < n; i++)
        fprintf(fp_out,"%f\n",v[i]);                            
  fclose(fp_out);
}

int main()
{ 
  int i;  
  float v[N];

  store(N, v);
  for(i=0; i< N; i++ )
      printf("%lf\n",v[i]);
  store_vector(N, v);
 return EXIT_SUCCESS;

}


/*
int main(void)
{
 FILE *fp;
 char str[N_STRINGS];

   // opening file for reading 
   fp = fopen("file.txt" , "r");
   if(fp == NULL) {
      perror("Error opening file");
      return(-1);
   }
   if( fgets (str,N_STRINGS , fp)!=NULL ) {
      // writing content to stdout 
      puts(str);
   }
   fclose(fp);
   
   return EXIT_SUCCESS;
}
*/