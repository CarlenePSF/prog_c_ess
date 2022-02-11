/*************************************************
 * nome: variaveis.c
 * descrição: tipos de variaveis e atribuicoes
 * data: 07/12/2019
 *************************************************/

// tipos de variaveis e como chama-las.
/*
     char (%c)    //Uma variavel do tipo char so armazena um caractere!!
     int  (%d)
     float (%f)
     double (%f)
     double (%g) // para ponteiro 
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

int main(){
    
    char ch1,ch2;


    printf("Introduza um charactere:");
    scanf("%c",&ch1);
    printf("Introduza outro caractere:");
    scanf(" %c",&ch2);    //Introduzimos um espaco para que o buffer ignore espaco entre um entrada e outra
        
    printf("Os characteres introduzidos foram: %c e %c\n",ch1,ch2);
    printf("O charactere %c tem o ASCII de No %d\n",ch1, (int) ch1);  //adicionamos (int) para "promover" uma variavel char para um interiro 
    printf("O charactere %c tem o ASCII de No %d\n",ch2, (int) ch2);
    
    
    return(0);
}
