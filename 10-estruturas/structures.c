/*****************************
*  nome: structures.c
*  Descricao: trabalhando com estruturas
   last update: 18/04/2021
*******************************/

#include<stdio.h>
#include<string.h>

/*O typedef permite que o tipo de dado passa também a ser
 * representado pela palavra de referencia.*/

typedef int inteiro;
typedef float real;


/*uma maneira de declarar a estrutura*/

/*dt_nasc vai ser como vamos chamar os dados que estao contidos na estrutura com referenciacao pelo (.)*/
struct Data{
    int Dia;
    int Ano;
    char mes[12];
} dt_nasc;

/*carga inicial automatica de uma estrutura*/
struct Data2 {
    int dia2;
    int ano2;
    char mes2[12];
} dt_nascimento = {17, 1989, "marco"};

/*ou ainda podemos fazer da seguinte maneira*/
struct Data3 {                  /*declaracao da estrutura*/
     int dia3;
     int ano3;
     char mes3[12];
};

struct Data3 dt_nascimento3 = {17, 1989, "marco"}; /*declaracao das variaveis e valore iniciais*/
struct Data3 v[3] = {{1, 2021, "jan"},             /*Se a estrutura for um vetor*/
                     {2, 2021, "fev"},
                     {3, 2021, "dez"}
};


/*que no programa principal vao exibir os respectivos valores*/

main(){
    dt_nasc.Dia=17;
    strcpy(dt_nasc.mes, "marco");
    dt_nasc.Ano=1989;

    printf("Data: %d/%s/%d\n",dt_nasc.Dia,dt_nasc.mes,dt_nasc.Ano);
    printf("Data: %d/%s/%d\n",dt_nascimento.dia2,dt_nascimento.mes2,dt_nascimento.ano2);
    printf("Data: %d/%s/%d\n",dt_nascimento3.dia3,dt_nascimento3.mes3,dt_nascimento3.ano3);
    printf("Data: %d/%s/%d\n",v[0].dia3,v[0].mes3,v[0].ano3);
    printf("Data: %d/%s/%d\n",v[1].dia3,v[1].mes3,v[1].ano3);
    printf("Data: %d/%s/%d\n",v[2].dia3,v[2].mes3,v[2].ano3);

}
