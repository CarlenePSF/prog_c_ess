/*************************************************************************************
* nome: pointres.c
* descrição: trabalhando com arrays no C. 
*last update: 01/04/2021
**************************************************************************************/

// Import C Libraries
#include <stdio.h>
#include <stdlib.h>

int maximo();


int main(){

	int tabela[] = {3, 2, 45, 5, 0, 6, 1};
	printf("O maior valor da tabela: %d\n", maximo(tabela, 6));
    
   return EXIT_SUCCESS;
}


int maximo(int lista[], int tamanho)    //int [] sera a lista e in sera o tamanho da lista
{
	int teste;
	int i;
	teste = lista[0];
	
	for(i=0; i<tamanho; i++){
	  if (lista[i]>teste)
	  	teste = lista[i];	
	}
	return teste;
}
