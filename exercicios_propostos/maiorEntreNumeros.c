#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char const *argv[])
{
    setlocale(LC_ALL, "Portuguese");
    //var
    int N1, N2, Maior;
    //ini
    printf("Digite um número: ");
    scanf("%d", &N1);
    printf("Digite outro número: ");
    scanf("%d", &N2);

    if (N1 > N2)
    {
        printf("O maior é: %d", N1);
        
    } else {
        if (N2 > N1)
        {
            printf("O maior é: %d", N2);
        } else {
            printf("Os números são iguais");
        }        
    }
    
    return 0;
}
