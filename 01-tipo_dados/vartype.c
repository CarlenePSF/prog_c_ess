/*************************************************
 * nome: test.c
 * descrição: tipos de variaveis em C
 * data: 16/04/2021
 *************************************************/
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <complex.h>                  /* Standard Library of Complex Numbers */



int main (void)
{
    int i,j;
    int a, b ;
    a=4;
    b=2;
    printf("O resto da divisao de %d / %d = %d\n",a,b,a%b);
    printf("O tamanho em bytes de um inteiro e %ld\n",sizeof(int));
    printf("O tamanho em bytes de um inteiro e %ld\n",sizeof(char));
    printf("O tamanho em bytes de um inteiro e %ld\n",sizeof(float));
    printf("O tamanho em bytes de um inteiro e %ld\n",sizeof(double));


    int vetor[5]={1,2,3,4,5};
    int matriz2D[2][2] = { {0,1}, {10,11} };
    char Nome;
    float pi, raio;
    double total;

    pi=3.1416;
    printf("%f\n",pi);





   //imprimindo uma matrx
   for(i=0 ; i<2;i++){
       for(j=0; j<2 ; j++){
        printf("%d\n",matriz2D[i][j]);
                          }

}

    printf("A primeira posicao contem %d\n",vetor[0]);
    printf("A segunda posicao contem %d\n",vetor[1]);
    printf("A terceira posicao contem %d\n",vetor[2]);
    printf("A quarta posicao contem %d\n",vetor[3]);
    printf("A quint posicao contem %d\n",vetor[4]);


    puts("Hoje esta um \"lindo\" dia!\n");
    printf("  *\n");
    printf(" ***\n");
    printf("*****\n");
    printf(" /|\\ \n");

    puts("Total = 100%\n");
    puts("IVA = 17%\n");
    puts("IRS = 15%\n");
    puts("------------------\n");
    puts("Liq = 68%\n");

    return EXIT_SUCCESS;






}
