#include <stdio.h>
#include <locale.h>

int main(int argc, char *argv[]){
    setlocale(LC_ALL, "Portuguese");
    //var 
    int Vet[4];
    int i, S;
    //ini
    S = 0;
    printf("Informe quatro números em seguida:\n");
    for ( i = 0; i < 4; i++)
    {
        scanf("%d", &Vet[i]);
        S = S + Vet[i];
    }
    printf("A soma dos números informados é: %d", S);
    
    return 0;
}