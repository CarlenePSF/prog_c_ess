/*    Aula sobre variaveis
- Sempre incluir funçao main()
- {} delimitam um bloco de código
- ; Em C, ponto e virgula finalizam um comando
*/

#include <stdio.h> 

int main()
{
    //Bloco de codigo
    //declarando variáveis
    int idade;
    char nome [20];
    
    printf("Qual a sua idade? "); scanf("%d",&idade);
    printf("A idade do usuario é %d anos.\n", idade);

    printf("Qual seu nome?\n"); scanf("%s", nome);
    printf("Hello %s!\n", nome);

    //declarando e inicializando variaveis
    //Não existe booleano (true/false) em C. 
    //Porém a linguagem C reconhece qualquer valor diferente 
    //de zero como verdadeiro!!!
    int booleano = 0;

    if(booleano){
        printf("Verdadeiro!!\n");
    }else{
        printf("Falso\n");
    }

    return 0;
}