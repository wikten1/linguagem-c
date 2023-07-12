#include <stdio.h>
#include <locale.h>

int main(int argc, char const *argv[])
{
    setlocale(LC_ALL, "Portuguese");
    //var
    float Sal, Nsal, percent, aumento;
    //ini
    printf("Digite o salário: ");
    scanf("%f", &Sal);
    printf("Digite o percentual do aumento: ");
    scanf("%f", &percent);

    aumento = (Sal * percent) / 100;
    printf("O aumento salarial foi de: %.2f R$\n", aumento);
    
    Nsal = Sal + aumento;
    printf("O novo salário é: %.2f R$", Nsal);

    return 0;
}
