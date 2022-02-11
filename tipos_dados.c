#include <stdio.h>
// #include <string.h>

int main() {

    int idade = 33;
    float salario = 4999.6;
    float altura = 1.63;
    char genero = 'F';
    char nome[50] = "Ana Ferreira";

    //idade = 33;
    //salario = 4999.6;
    //altura = 1.63;
    //genero = 'F';
    //strcpy(nome, "Ana Ferreira");

    printf("Idade = %d\n", idade);
    printf("Salário = %.2lf\n", salario);
    printf("Altura = %.2lf\n", altura);
    printf("Gênero = %c\n", genero);
    printf("Nome = %s\n", nome);

    return 0;
}
