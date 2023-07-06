#include <stdio.h>
#include <string.h>
#include <locale.h>

#define N 50

int main(){
    setlocale(LC_ALL, "Portuguese");
    //var
    char S1[N] = {"Lógica de"};
    char S2[N] = {" Programação!"};
    //ini
    printf("Antes do strcat:\n");
    printf("str1: %s\n", S1);
    printf("str2: %s\n", S2);

    strcat(S1, S2);

    printf("Depois do strcat:\n");
    puts(S1);


    return 0;
}