#include <stdio.h>

int main(){
    //var
    char S[10];

    //ini
    printf("Digite algo (scanf convencional):\n");
    scanf("%s", S);
    fflush(stdin);

    printf("Resultado: %s\n\n", S);

    printf("Digite algo (scanf aprimorado):\n");
    scanf("%9[^\n]s", S);
    fflush(stdin);

    printf("Resultado: %s\n\n", S);

    return 0;
}