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
    printf("Digite o primeiro número: ");
    scanf("%f", &N1);
    printf("Digite o segundo número: ");
    scanf("%f", &N2);
    printf("Digite o operador que será usado (+, -, *, /): ");
    scanf(" %c", &OP);

    if (OP == '+')
    {
        Resp = N1 + N2;
        printf("A resposta é: %.2f", Resp);
    } else {
        if (OP == '-')
        {
            Resp = N1 - N2;
            printf("A resposta é: %.2f", Resp);
        } else{
            if (OP == '*')
            {
                Resp = N1 * N2;
                printf("A resposta é: %.2f", Resp);
            } else 
            {
                if (OP == '/')
                {
                    if (N2 == 0)
                    {
                        printf("A resposta é um absurdo!!!");
                    } else {
                        Resp = N1 / N2;
                        printf("A resposta é: %.2f", Resp);
                    }
                } else {
                    printf("O operador digitado é inválido!!!");
                }
                
            }
        } 
    }
    return 0;
}
