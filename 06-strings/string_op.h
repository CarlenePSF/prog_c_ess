/***********************************************************
* nome: stringsop.h
* descrição: head with lots of operations with string similatr to string.h
* data: 29/04/2021
************************************************************/
#include<string.h>



/*Corpo de funcoes chamadas no programa main*/
/***************************************************************************/
 int string_length(char *s){   /*comprimento da string*/
    int i=0;
    while(s[i]!='\0')
        i++;
    return i;
 }

 /****************************************************************************/
 int isnull(char *s)  /* Esta função não faz parte da linguagem C.
                         Verifica se uma string contém ou não algum caractere,
                         devolvendo o valor lógico correspondente.*/
{
  return (s[0]== '\0');
 }
 /*******************************************/
 char *string_copy(char *dest, char *orig)    /*copia uma string orig
                                                para uma string dest*/
 {
   int i=0;
   while(dest[i]= orig[i])
       i++;
   return dest;
 }
/************************************************************************/
 char *string_concat(char *dest, char *orig)   /* String Concat */
                               /*Nota: Não coloca qualquer caractere */
                               /*(nem espaços) para separar as duas strings.*/
{ int i=0;
   int len = strlen(dest);
   while(dest[i+len] = orig[i])
     i++;
   return dest;

 }
/************************************************************************/
 char *fgets_wrapper(char *buffer, size_t buflen, FILE *fp)
 /*replace for gets() which is a dangerous function*/
{
    if (fgets(buffer, buflen, fp) != 0)
    {
        size_t len = strlen(buffer);
        if (len > 0 && buffer[len-1] == '\n')
            buffer[len-1] = '\0';
        return buffer;
    }
    return 0;
}
/**********************************************************************/
int string_count_c(char *s, char ch)  /*string count char devolve o numero
                          // de ocorrencias do caracter ch na string s*/
{
   int i, conta;
   for (i=conta=0 ; s[i]!='\0' ; i++)
     if(s[i]==ch)            /*se for o caractere que procuramos*/
        conta++;            /*incrementa o contador*/
  return conta;
}
