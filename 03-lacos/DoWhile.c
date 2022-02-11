/****************************************************************************
* nome: DoWhile.c
* criado: 30/04/2021
* last update: ---
*
* descrição: trabalhando com laço do...while
* sintaxe:
*          do{
*            instrução dolaco;
*           }while(condição);
* obs: util quando or necessário implementar um laço que tenha que executar o seu corpo pelo
*      menos uma vez.
*******************************************************************************/
#include <stdlib.h>
#include <stdio.h>


int main()
{ /*programa que apresenta um menu com as opções clientes, fornecedores, encomendas e sair*/
    char opcao;
    int i=4;
    printf("%d",i++ + ++i);

   /* do{
        printf("\tMenu Principal\n");
        printf("\n\n\t\tClientes\n");
        printf("\n\n\t\tFonecedores\n");
        printf("\n\n\t\tEncomendas\n");
        printf("\n\n\t\tSair\n");
        printf("\n\n\n\t\t\tOpção: "); scanf("%c",&opcao);
        fflush(stdin); //limpar o buffer do teclado

        switch (opcao)
        {
        case 'c':
        case 'C': puts("Opção Clientes"); break;
        case 'f':
        case 'F': puts("Opção Fonecedores"); break;
        case 'e':
        case 'E': puts("Opção Encomendas"); break;
        case 's':
        case 'S': break; //não faz nada
        default: puts("Opção inválida!!");
        }
        getchar(); //parar a tela
    }while(opcao != 's' && opcao != 'S');*/

}
