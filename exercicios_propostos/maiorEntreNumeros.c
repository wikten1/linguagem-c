#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char const *argv[])
{
    setlocale(LC_ALL, "Portuguese");
    //var
    int N1, N2, Maior;
    //ini
    printf("Digite um n�mero: ");
    scanf("%d", &N1);
    printf("Digite outro n�mero: ");
    scanf("%d", &N2);

    if (N1 > N2)
    {
        printf("O maior �: %d", N1);
        
    } else {
        if (N2 > N1)
        {
            printf("O maior �: %d", N2);
        } else {
            printf("Os n�meros s�o iguais");
        }        
    }
    
    return 0;
}
