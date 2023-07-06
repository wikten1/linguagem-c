#include <stdio.h>

int main(){
    //var
    int V[5];
    int i;
    //ini
    for (i = 0; i < 5; i++)
    {
        printf("Insira um dado: \n");
        scanf("%d", &V[i]);
    }

    printf("Dados inseridos:\n");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", V[i]);
    }
    
    
    return 0;
}