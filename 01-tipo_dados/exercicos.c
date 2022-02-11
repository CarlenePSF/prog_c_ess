/*=========================================================
Exercises seção 3 - programação em C do básico ao avançado
criado em : 21/05/2021
autor: C. Silva de Farias
===========================================================*/
#include<stdio.h>
#include<stdlib.h>

// Exercicos3 - Soma de 3 inteiros digitados pelo usuário
void soma(){
    int a, b, c;
    int resultado;
    printf("Entre com o primeiro valor inteiro: "); scanf("%d", &a);
    printf("Entre com o segundo valor inteiro: "); scanf("%d", &b);
    printf("Entre com o terceiro valo inteiro: "); scanf("%d", &c);
    resultado = a+b+c;
    printf("A soma dos três numeros digitados é %d\n", resultado);
}

// Exercicios 4 - Quadrado de um numero
void quadrado(){
    float num;
    printf("Digite um número:"); scanf("%f",&num);
    printf("O quadrado de %f é %f.\n", num, num*num);
}

// Exercicios 5 - Quinta parte de um número
void QuintaParte(){
    float num;
    printf("Digite um número:"); scanf("%f",&num);
    printf("O a quinta parte de %f é %f.\n", num, num/5);
}


int main(){
    //soma();
    //quadrado();
    QuintaParte();
    return EXIT_SUCCESS;
    
}



