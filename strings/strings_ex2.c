#include <stdio.h>

int main(){
    //var
    char S[10];
    //ini
    printf("Digite algo (leitura pelo gets):\n");
    gets(S);
    fflush(stdin);

    puts("Resultado:");
    puts("s");
    puts("");

    printf("Digite algo (leitura pelo fgets):\n");
    fgets(S, 10, stdin);
    fflush(stdin);

    puts("Resultado:");
    puts(S);

    return 0;
}