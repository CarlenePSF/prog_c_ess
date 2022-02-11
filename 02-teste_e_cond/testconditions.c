/*************************************************
 * nome: test_cond.c
 * descrição: aprendendo a usar teste e condicoes
 * data: 16/04/2021
 *************************************************/

// tipos de variaveis e como chama-las.
/*
     char (%c)    //Uma variavel do tipo char so armazena um caractere!!
     int  (%d)    //Variavel inteira
     float (%f)   // variavel real
     double (%f)
     Notacao cientifica (%e ou %E)
*/

//Os prefixos, a seguir, se aplicam para todos os tipos de variaveis e modificam o espaco da memoria usado para armazenar cada variavel
/*
     short int (%hd)
     long int (%ld)
     unsigned int (%u)
     unsigned short int (%hu)
     unsigned long int (%lu)
*/


#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define Dim 10

/*Variaveis globais*/
float a;
float b;
char ESTADO_CIVIL;
char NOME[Dim];
char SOBRENOME[Dim];
float num01;
float num02;
char ope;

/*O switch torna-se mais eficiente do que o if/else no caso de muitos teste logicos (mais de dois necessariamente)*/
/*A variavel e um caractere entao armazena somente uma letra. Poderiamos empregar uma funcao similar caso quisessemos testar expressoes numericas*/
/*O break analisa cada instrucao retornando o valor de falso ou verdadeiro, em caso verdadeiro a execusao e terminada*/

/*funcoes para chamar no programa principal*/

int teste(val1,val2) float val1, val2;
{
    printf("enter a value for a:");
    scanf("%f",&val1);
    printf("enter a value for b:");
    scanf("%f",&val2);

    if(val1==val2){
        printf("The result of a==b: %d\n",val1==val2);
    }
    if(val1>val2){
        printf("The value of a>b: %d\n.",val1>val2);
    }
     if(val1>=val2){
        printf("The value of a>=b: %d\n.",val1>=val2);
    }
    if(val1<val2){
        printf("The value of a<b: %d\n.",val1<val2);
    }
    if(val1<=val2){
        printf("The value of a<=b: %d\n.",val1<=val2);
    }
    if(val1!=val2){
        printf("The value of a!=b: %d\n.",val1!=val2);
    }

    return(0);
}

void dados_pessoais(nome, sobrenome, estadocivil) char nome[] , sobrenome[],  estadocivil;
{
   puts("Digite o seu nome:\n");
   scanf("%s", nome);
   puts("Digite o seu sobrenome: \n");
   scanf("%s", sobrenome);
   printf("Ola %s  %s, seja bem-vinda!\n", nome, sobrenome);

   printf("Qual o estado Civil (somente a inicial \'s'\ - solteiro, \'c'\ - casado, \'d'\ - dicorciado, \'v'\ - viuvo )?\n");
   scanf(" %c",&estadocivil); // ou estadocivil=getchar();
    switch(estadocivil){
        case 'c':
        case 'C': printf("Casado \n"); break;
        case 's':
        case 'S': printf("Solteiro\n"); break;
        case 'd':
        case 'D': printf("Divorciado\n"); break;
        case 'v':
        case 'V': printf("Viuvo\n"); break;
        default : printf("Estado Civil Incorreto\n");
    }
}




int operation(num1, num2, op) float num1, num2; char op;
{
  float res=0.0;

    printf("Introduza uma expressao:\n");
    scanf("%f %c %f",&num1,&op,&num2);

      switch(op){
          case '+': res=num1+num2;
           break;
          case '-': res=num1-num2;
           break;
          case '*':
          case 'x':
          case 'X': res=num1*num2;
           break;
          case '\\':
          case '/':
          case ':': res=num1/num2;
           break;
      }
      printf("%f %c %f = %f\n", num1, op, num2, res);
  return(res);
}


/*Main program*/

int main(){
    dados_pessoais(NOME, SOBRENOME, ESTADO_CIVIL);
   // operation(num01,num02,ope);
    //teste(&a,&b);


}
