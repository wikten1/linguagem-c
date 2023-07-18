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
    printf("Digite o Raio do círculo desejado: ");
    scanf("%f", &Raio);

    Peri = 2 * Pi * Raio;
    Area = Pi * Raio * Raio;

    printf("O perímetro do círculo é: %.2f\n", Peri);
    printf("O área do círculo é: %.2f\n", Area);

    return 0;
}
