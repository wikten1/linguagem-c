#include <stdio.h>
#include <locale.h>
#include <string.h>

#define TAM 50

struct tipo_pessoa
{
    int idade;
    float peso;
    char nome[TAM];
};

typedef struct tipo_pessoa tipo_pessoa;

int main(){
    setlocale (LC_ALL, "Portuguese");
    //var
    tipo_pessoa pes = {0, 0.0, "Teste"};

    //ini
    printf("Inicio:\n");
    printf("pes.idade: %d\n", pes.idade);
    printf("pes.peso: %0.2f\n", pes.peso);
    printf("pes.nome: %s\n", pes.nome);

    pes.idade = 10;
    pes.peso = 99.99;
    strcpy(pes.nome, "Texto");

    printf("\nAlterando os campos via código:\n");
    printf("pes.idade: %d\n", pes.idade);
    printf("pes.peso: %0.2f\n", pes.peso);
    printf("pes.nome: %s\n", pes.nome);

    printf("\nInsira um número inteiro:\n");
    scanf("%d", &pes.idade);
    printf("Insira um número real:\n");
    scanf("%f", &pes.peso);
    printf("Insira um nome:\n");
    scanf("%s", &pes.nome);

    printf("\nAlterado com dados do usuário:\n");
    printf("pes.idade: %d\n", pes.idade);
    printf("pes.peso: %0.2f\n", pes.peso);
    printf("pes.nome: %s\n", pes.nome);

    return 0;
}
