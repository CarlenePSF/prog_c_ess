#include<stdio.h>

void mensagem()
{
    printf("Bem-Vindo\n");
}

int soma(int num1, int num2)
{
  return num1+num2;
}

void proximo_char(char caractere)
{
    printf("%c\n", caractere+1);
}

int main()
{
    char a;
    //int a=4;
    //int b=9;
    char nome[10];

    printf("Qual seu nome? \n");
    scanf("%s", nome);
    printf("Ola %s\n", nome);

    mensagem();
    
    //printf("%d\n", soma(a, b));

    proximo_char(a);
    
    return 0;
}
