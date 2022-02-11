#include<stdio.h>

int main(){
   //Declarnação de variáveis
   int idade;

   //entrada de dados
   printf("Qual é a sua idade? ");
   scanf(" %d",&idade);
 

   //Processamento
   if (idade<18){
       printf("Você é menor de idade.\n");
   }else if(idade > 18 && idade < 60){
       printf("Você é adulto.\n");
   }else{
       printf("Você é idoso.\n");
   }
  //Saida
    printf("Sua idade é %d\n.", idade);

    return 0;
}