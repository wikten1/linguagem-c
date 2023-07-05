#include <stdio.h>
#include <locale.h>

#define texto "Entrada e saida de dados."

int main() {
    setlocale (LC_ALL, "Portuguese");
    //var
    int Idade = 0;
    float Altura = 0.0;
    char Nome[50] = "";
    //ini
    printf("%s\n", texto);

    printf("Digite a idade:\n");
    scanf("%d", &Idade);

    printf("Digite a altura:\n");
    scanf("%f", &Altura);

    printf("Digite o nome:\n");
    scanf("%s", Nome);

    printf("Dados informados:\n");
    printf("Idade: %d. \n", Idade);
    printf("Altura %.2f. \n", Altura);
    printf("Nome: %s. \n", Nome);

    return 0;
}