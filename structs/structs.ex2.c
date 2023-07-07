#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <locale.h>

#define TAM 3

struct tipo_pessoa
{
    int idade;
    float peso;
    char nome[50];
};

typedef struct tipo_pessoa tipo_pessoa;

int main(){
    setlocale (LC_ALL, "Portuguese");
    //var
    tipo_pessoa Lista[TAM];
    int i;
    //ini
        for ( i = 0; i < TAM; i++)
    {
       printf("Insira os dados (%d):\n", i+1);
       puts("Nome: ");
       scanf("%50[^\n]s", &Lista[i].nome);
       fflush(stdin);

       puts("Idade: ");
       scanf("%d", &Lista[i].idade);
       fflush(stdin);

       puts("Peso: ");
       scanf("%f", &Lista[i].peso);
       fflush(stdin);
    }
    system("cls");

    puts("Seus dados: \n");
    for (i = 0; i < TAM; i++)
    {
        printf("------------ Pessoa %d ------------");
        printf("\tNome: %s\n", Lista[i].nome);
        printf("\tIdade: %d\n", Lista[i].idade);
        printf("\tPeso: %0.2f\n", Lista[i].peso);
    }
    printf("-----------------------------------");
    

    return 0;
}
