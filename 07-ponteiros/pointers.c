/*************************************************************************************
* nome: pointres.c
* descrição: trabalhando com strings, ponteiros, estruturas e arrays no C.
*last update: 01/04/2021
**************************************************************************************/

//Import C Libraries

#include <stdlib.h>
#include <math.h>
#include <stdio.h>

// Declaring functions
void pointer();

//main program

int main(void) {
   int b = 3.1415;
   pointer(b);

   return EXIT_SUCCESS;
}



 //Functions to call in the main program
//o ponteiro contem o endereco de outra variavel nesse caso a carga inicial indica que o ponteiro nao aponta para lugar algum
void pointer(ptr) int *ptr;
{
   int a = 31415;
     ptr = &a;

//sempre e bom carregar um valor inicial do ponteiro e nesse caso o ponteiro aponta para o endereco da variavel "a" e tem o  seu valor "*p" igual ao valor de "a"
printf ("   a = %d  %d\n", a, (a-1));
printf ("*ptr = %d  %d\n", *ptr, (*ptr-1));

printf ("  &a = %ld and (&a+ 1 byte) = %ld\n", (long int) &a, (long int)&a-1);
printf (" ptr = %ld and (ptr+ 1 byte)= %ld\n ", (long int) ptr, (long int) (ptr-1));

/*o ponteiro tambem tem um endereco proprio */
printf ("&ptr = %p\n", &ptr);           /*%p is for printing a pointer address.*/

    if(ptr<(ptr+1)){
          printf("o ponteiro foi incrementado por 1 byte.\n");
                    }
    if(ptr>(ptr-1)){
          printf("o ponteiro foi decrescido por 1 byte.\n");
                  }

}
