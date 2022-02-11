//
// Created by carlene on 11/02/2022.
//
#include <stdio.h>


int main(){
    double x;
    x = 1.235687;

    int idade = 33;
    float salario = 4999.6;
    float altura = 1.63;
    char genero = 'F';
    char nome[50] = "Ana Ferreira";

    printf("A funcionária %s, sexo %c, ganha %.2lf reais e tem %d anos.\n", nome, genero, salario, idade);
    return 0;
}