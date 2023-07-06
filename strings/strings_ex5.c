#include <stdio.h>
#include <string.h>
#include <locale.h>

#define N 50

int main(){
    setlocale(LC_ALL, "Portuguese");
    //var
    char S[N];
    int i;
    //ini
    printf("Digite um texto:\n");
    gets(S);
    i = strlen(S);
    printf("\nTamanho do texto: %d\n\n", i);

    printf("Imprensão de posição a posição:\n");
    for ( i = 0; i < strlen(S); i++)
    {
        printf("%c", S[i]);
    }
    

    return 0;
}