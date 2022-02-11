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

    //uma string
    char nome[3][20];

    for(int i = 0; i<3; i++){
      printf("Qual o seu nome?\n"); scanf("%s",nome[i]);
    }
    for(int i = 0; i<3; i++){
      printf("Olá %s\n", nome[i]);
    }

    return 0;
}