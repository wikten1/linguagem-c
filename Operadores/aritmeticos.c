#include <stdio.h>
#include <locale.h>

int main() {
    setlocale (LC_ALL, "Portuguese");
    //var
    int A, B, Soma, Subtr, Mult, Divis;
    //ini
    printf("Digite o primeiro valor:\n");
    scanf("%d", &A);
    printf("Digite o segundo valor:\n");
    scanf("%d", &B);

    Soma = A + B;
    Subtr = A - B;
    Mult = A * B;
    Divis = A / B;

    printf("Resultados:\n");
    printf("Soma: %d.\n", Soma);
    printf("Subtração: %d.\n", Subtr);
    printf("Multiplicação: %d.\n", Mult);
    printf("Divisão: %d.\n", Divis);

    return 0;
}