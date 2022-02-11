/*            Matrizes parte 1
 * Em C, matrizes são array multidimensionais
 *
 * No exemplo abaixo o objeto nome é do tipo caractere e consegue 
 * armazenar até 3 nomes com 50 caracteres cada
 * >>> exemplo: char nome[3][50];
 * Declaração de matrizes: 
 *   2D -  tipo nome_do_vetor[dim][dim]
 * 
 * dim: A os indices de um vetor de NxN dimensão varia de [0, N-1][0, N-1]
 * 
 * int numeros[5][5]
 * (i,j)    0  1  2  3  4
 *   0     [0][1][2][3][4]
 *   1     [0][1][2][3][4]
 *   2     [0][1][2][3][4]
 *   3     [0][1][2][3][4]
 *   4     [0][1][2][3][4]
 */
#include<stdio.h>
#include<stdlib.h>

int main(){
    //matriz de inteiros
    int numeros[2][2];
    numeros[0][0] = 1;
    numeros[0][1] = 2;
    numeros[1][0] = 3;
    numeros[1][1] = 4;

    for(int i = 0 ; i<2; i++){
        for(int j=0; j<2; j++){
            printf("%d  ",numeros[i][j]);
            if(j==1)
               printf("\n");
        }
    }



    //matriz de reais
    float matrix[5][5];
    for(int i = 0 ; i<5; i++){
        for(int j=0; j<5; j++){
            matrix[i][j]=i+j;
        }
    }
       for(int i = 0 ; i<5; i++){
        for(int j=0; j<5; j++){
            printf("%f  ",matrix[i][j]);
            if(j==4)
               printf("\n");
        }
    }
}
