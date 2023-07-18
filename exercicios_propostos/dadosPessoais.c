#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

struct t_pessoa
{
    char nome[200];
    int idade;
    float peso, altura;
};


typedef struct t_pessoa t_pessoa;


int main(int argc, char const *argv[])
{
    setlocale(LC_ALL, "Portuguese");
    //var
    t_pessoa lista[3];
    int i;
    //ini
    for ( i = 0; i < 3; i++)
    {
        printf("Insira o nome da pessoa da posição %d: \n", i);
        scanf("%199[^\n]s", &lista[i].nome);
        fflush(stdin);

        printf("Insira a idade da pessoa da posição %d: \n", i);
        scanf("%d", &lista[i].idade);
        fflush(stdin);

        printf("Insira o peso da pessoa da posição %d: \n", i);
        scanf("%f", &lista[i].peso);
        fflush(stdin);

        printf("Insira a altura da pessoa da posição %d: \n", i);
        scanf("%f", &lista[i].altura);
        fflush(stdin);
    }

    printf("Nome da primeira pessoa: %s.\n", lista[0].nome);
    printf("idade da primeira pessoa: %d.\n", lista[0].idade);

    printf("peso da última pessoa: %.2f.\n", lista[2].peso);
    printf("altura da última pessoa: %.2f.\n", lista[2].altura);
     
    return 0;
}
