#include <stdio.h>
#include <locale.h>

int main(){
    setlocale (LC_ALL, "Portuguese");
    //var
    int dado = 10;
    //ini
    printf("Dado antes do incremento: %d.\n", dado);

    dado++;
    printf("Dado depois do incremento: %d.\n", dado);

    dado--;
    printf("Dado depois do decremento: %d.\n", dado);

    dado += 3;
    printf("Dado depois do incremento de 3: %d.\n", dado);

    dado -= 2;
    printf("Dado depois do decremento de 2: %d.\n", dado);

    dado *= 10;
    printf("Dado depois de multiplicado por 10: %d.\n", dado);

    return 0;
}