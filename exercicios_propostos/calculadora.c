#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char const *argv[])
{
    setlocale(LC_ALL, "Portuguese");
    //var
    float N1, N2, Resp;
    char OP;
    //ini
    printf("Digite o primeiro n�mero: ");
    scanf("%f", &N1);
    printf("Digite o segundo n�mero: ");
    scanf("%f", &N2);
    printf("Digite o operador que ser� usado (+, -, *, /): ");
    scanf(" %c", &OP);

    if (OP == '+')
    {
        Resp = N1 + N2;
        printf("A resposta �: %.2f", Resp);
    } else {
        if (OP == '-')
        {
            Resp = N1 - N2;
            printf("A resposta �: %.2f", Resp);
        } else{
            if (OP == '*')
            {
                Resp = N1 * N2;
                printf("A resposta �: %.2f", Resp);
            } else 
            {
                if (OP == '/')
                {
                    if (N2 == 0)
                    {
                        printf("A resposta � um absurdo!!!");
                    } else {
                        Resp = N1 / N2;
                        printf("A resposta �: %.2f", Resp);
                    }
                } else {
                    printf("O operador digitado � inv�lido!!!");
                }
                
            }
        } 
    }
    return 0;
}
