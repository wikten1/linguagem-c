#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char const *argv[])
{
    setlocale(LC_ALL, "Portuguese");
    //var
    int i, ant1, ant2, atual, Num;
    //ini
    printf("Qual número da sequência Fibonacci deseja descobrir?: \n");
    scanf("%d", &Num);
    ant2 = 0;
    ant1 = 1;

    if (Num == 1 || Num == 2)
    {
        if (Num == 1)
        {
            printf("O número da posição 1 da sequência Fibonacci é: 0 ");
        }else{
            printf("O número da posição 2 da sequência Fibonacci é: 1");
        }
    }else {
        for ( i = 3; i <= Num; i++)
      {
        atual = ant1 + ant2;
        ant2 = ant1;
        ant1 = atual;
      }

      printf("O número da posição %d da sequência Fibonacci é: %d ", Num, atual);
    }
    return 0;
}
