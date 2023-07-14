#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char const *argv[])
{
    setlocale(LC_ALL, "Portuguese");
    //var
    int i, Soma = 0;
    //ini
    for ( i = 1; i <= 10; i++)
    {
        Soma = Soma + i;
    }
    
    printf("A soma dos números é: %d", Soma);

    return 0;
}
