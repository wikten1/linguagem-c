#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char const *argv[])
{
    setlocale(LC_ALL, "Portuguese");
    //var
    float Raio, Peri, Area, Pi;
    //ini
    Pi = 3.14;
    printf("Digite o Raio do c�rculo desejado: ");
    scanf("%f", &Raio);

    Peri = 2 * Pi * Raio;
    Area = Pi * Raio * Raio;

    printf("O per�metro do c�rculo �: %.2f\n", Peri);
    printf("O �rea do c�rculo �: %.2f\n", Area);

    return 0;
}
