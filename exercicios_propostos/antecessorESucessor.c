#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char const *argv[])
{
    setlocale(LC_ALL, "Portuguese");
    //var
    int Num, Ant, Suce;
    //ini
    printf("Digite um n�mero: ");
    scanf("%d", &Num);

    printf("O antecessor do n�mero %d �: %d\n", Num, Num -1);
    printf("O sucessor do n�mero %d �: %d\n", Num, Num +1);

    return 0;
}
