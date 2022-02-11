/*            Vetores parte 1
 * Em C, vetores são array unidimensionais
 * exemplo: char nome[50] 
 * tipo nome_do_vetor[dim]
 * 
 * dim: A os indices de um vetor de n dimensão varia de [0, n-1]
 */
#include<stdio.h>
#include<stdlib.h>

int main(){
    //uma string
    char nome[50];
    printf("Qual o seu nome?\n"); scanf("%s",nome);
    printf("Olá %s\n", nome);



    //vetor de caracteres
    //Imprimindo o alfabeto na tabela ask
    char letras[26];
    int contador = 0;

    for(int i=97; i<=122; i++){
        letras[contador] = i;
        contador = contador+1;
    }
    for(int i=0; i<26; i++){
        printf("%d == %c\n", letras[i], letras[i]);
    }
    

    //vetor de inteiros
    int numeros[10];
    for(int i=0; i < 10; i++){
        numeros[i] = i;
        printf("%d\n", numeros[i]);
    }
    

    //vetores reais
    float vetores[10];
    for(int i=9; i>=0 ; i--){
        vetores[i] = (float)numeros[i] / (float) 2;
        printf("%f\n",vetores[i]);
    }
    

    return 0;

}