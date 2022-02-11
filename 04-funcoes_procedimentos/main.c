/*************************************************
 * nome: functions.c
 * descrição: criando funcoes
 * data: 16/04/2021
 *************************************************/


#include <stdio.h>
#include <stdlib.h>


double Ano1;       /*Ano em que a pessoa nasceu*/
double Ano2;       /*Ano atuau que do qual sera subtraido o ano de nascimento*/
double Idade;     /*Idade que sera calculada*/


/**********************************************
 * functions to call in the main program
 **********************************************/

int calcula_idade(ano1, ano2, idade) int ano1, ano2, idade;
{
        printf("Entre com o ano atual:\n");
        scanf("%d",&ano2);
        printf("Entre com o ano que voce nasceu:\n");
        scanf("%d",&ano1);

        idade = (ano2-ano1);
        printf("A sua idade e %d\n", idade);

        return(EXIT_SUCCESS);
}

int store_res(Res) double Res;
{
    FILE *fp_out;
    fp_out = fopen("test.dat","w");
    fprintf(fp_out,"%.6f\n",Res);
    fclose(fp_out);
    return(EXIT_SUCCESS);
}

int soma(x,y) double x, y;
{
        double res;
        printf("Entre com o x:\n");
        scanf("%lf",&x);
        printf("Entre com o y:\n");
        scanf("%lf",&y);
        res = (x+y);
        return res;

}

int Maior(int a , int b)
{
 return(a>b) ? a:b;
}

void troca(int *a, int *b)
{
        int tpm;
        tpm = *a;
        *a = *b;
        *b=tpm;
}

/******************
 * Main program
 ********************/

int main(){
       // calcula_idade(Ano1,Ano2,Idade);
        //Idade = soma(Ano1,Ano2);
        //printf("%f\n",Idade);

        //printf("O maior entre %f e %f e %d\n", Ano1, Ano2, Maior(Ano1,Ano2));
        //store(Idade);
        int n,k;

        puts("introduza dois inteiros");
        scanf("%d %d",&n, &k);
        printf("Antes da troca n = %d e k = %d.\n", n, k);
        troca(&n,&k);   //os parametros sao numeros que serao passados para a funcao e alterados no seu corpo. devemos passa os enderecos desses paramentros
        printf("depois da troca n = %d e k = %d.\n", n, k);
        return(EXIT_SUCCESS);

}

