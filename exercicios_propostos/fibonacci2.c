#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char const *argv[])
{
    setlocale(LC_ALL, "Portuguese");
    //var
    int i, ant1, ant2, atual, Num;
    //ini
    printf("Qual n�mero da sequ�ncia Fibonacci deseja descobrir?: \n");
    scanf("%d", &Num);
    ant2 = 0;
    ant1 = 1;

    if (Num == 1 || Num == 2)
    {
        if (Num == 1)
        {
            printf("O n�mero da posi��o 1 da sequ�ncia Fibonacci �: 0 ");
        }else{
            printf("O n�mero da posi��o 2 da sequ�ncia Fibonacci �: 1");
        }
    }else {
        for ( i = 3; i <= Num; i++)
      {
        atual = ant1 + ant2;
        ant2 = ant1;
        ant1 = atual;
      }

      printf("O n�mero da posi��o %d da sequ�ncia Fibonacci �: %d ", Num, atual);
    }
    return 0;
}
