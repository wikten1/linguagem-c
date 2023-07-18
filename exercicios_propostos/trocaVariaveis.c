#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char const *argv[])
{
    setlocale(LC_ALL, "Portuguese");
    //var
    int N1, N2, Troca;
    //ini
    printf("Digite o primeiro número: ");
    scanf("%d", &N1);

    printf("Digite o segundo número: ");
    scanf("%d", &N2);

    printf("\nO primeiro número é: %d\n", N1);
    printf("O segundo número é: %d\n\n", N2);

    Troca = N1;
    N1 = N2;
    N2 = Troca;
    printf("----------------Depois da troca----------------\n\n");
    printf("O primeiro número é: %d\n", N1);
    printf("O segundo número é: %d\n\n", N2);

    return 0;
}
