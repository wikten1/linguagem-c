#include <stdio.h>
#include <string.h>
#include <locale.h>

#define N 20

int main(){
    setlocale(LC_ALL, "Portuguese");
    //var
    char Origem [N] = {"Olá, mundo"};
    char Destino [N];
    //ini
    printf("Antes do strcpy:\n");
    puts(Origem);
    puts(Destino);

    strcpy(Destino,Origem);

    printf("Depois do strcpy:\n");
    puts(Origem);
    puts(Destino);

    return 0;
}