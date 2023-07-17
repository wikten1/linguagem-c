#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char const *argv[])
{
    setlocale(LC_ALL, "Portuguese");
    //var
    int Primos[9];
    int i, j, Div, Resp, Num;
    //ini
    for ( i = 0; i < 9; i++)
    {
        printf("Insira o dado da posição %d: ", i+1);
        scanf("%d", &Primos[i]);
    }

    for ( i = 0; i < 9; i++)
    {
        Div = 0;
        for ( j = Primos[i]; j >= 1; j--)
        {
            Resp = Primos[i] % j;
            if (Resp == 0)
            {
                Div = Div + 1;
            }
        }
        
        if (Div == 2)
            {
                printf("%d é primo, posição: %d\n", Primos[i], i+1);
            } 
    }
    


    return 0;
}
