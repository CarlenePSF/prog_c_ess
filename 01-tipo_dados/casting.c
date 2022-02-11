#include <stdio.h>

int main() {
    int i = 2;
    
    printf("valor inteiro %d\n", i);
    printf("Valor depois do casting %f\n", (float) i);

    char nome[20]= "Carlene";
    printf("%s\n", nome);
    printf("%s\n", &nome[0]);
    printf("%d\n", (int) nome);   //O casting e com o endereço na memória do caractere

    return 0;

}
