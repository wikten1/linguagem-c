#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char const *argv[])
{
    setlocale(LC_ALL, "Portuguese");
    //var
    int N1, N2, Troca;
    //ini
    printf("Digite o primeiro n�mero: ");
    scanf("%d", &N1);

    printf("Digite o segundo n�mero: ");
    scanf("%d", &N2);

    printf("\nO primeiro n�mero �: %d\n", N1);
    printf("O segundo n�mero �: %d\n\n", N2);

    Troca = N1;
    N1 = N2;
    N2 = Troca;
    printf("----------------Depois da troca----------------\n\n");
    printf("O primeiro n�mero �: %d\n", N1);
    printf("O segundo n�mero �: %d\n\n", N2);

    return 0;
}
