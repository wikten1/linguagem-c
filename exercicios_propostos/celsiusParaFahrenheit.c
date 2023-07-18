#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char const *argv[])
{
    setlocale(LC_ALL, "Portuguese");
    //var
    float C, F;
    //ini
    printf("Digite a temperatura em celsius: ");
    scanf("%f", &C);

    F = (9 * C + 160)/5;

    printf("A temperatura em fahrenheit é: %.2f", F);

    return 0;
}
