#include <stdio.h>
#include <locale.h>

int main(){
    setlocale (LC_ALL, "Portuguese");
    //var
    float M;

    //ini
    printf("Insira a nota:\n");
    scanf("%f", &M);

    if(M >= 7.0){
        printf("Aprovado(a)!\n");
    }

    return 0;
}