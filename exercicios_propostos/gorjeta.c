#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char const *argv[])
{
    setlocale(LC_ALL, "Portuguese");
    //var
    float Gasto, Valor_F, Gorjeta;
    //ini
    printf("Digite o valor do gasto do cliente: ");
    scanf("%f", &Gasto);

    Gorjeta = (Gasto * 10) /100;
    Valor_F = Gasto + Gorjeta;
    printf("O cliente pagará: R$%.2f", Valor_F);
    return 0;
}
