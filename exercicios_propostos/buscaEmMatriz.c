#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char const *argv[])
{
    setlocale(LC_ALL, "Portuguese");
    //var
    int mat[3][3];
    int i, j, x, lin, col, achou = 0;
    //ini
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            printf("Insira o elemento da linha %d, coluna %d:\n", i, j);
            scanf("%d", &mat[i][j]);
        }
    }

    printf("Insira a chave de busca:\n");
    scanf("%d", &x);

    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            if (mat[i][j] == x)
            {
                achou = 1;
                lin = i;
                col = j;
                break;
            }
        }

        if (achou == 1){
            break;
        } 
    }

    if (achou == 1)
        {
            printf("O elemento %d foi encontrado na linha %d, coluna %d. \n", x, i, j);
        } else {
            printf("Chave não encontrada.\n");
        }
    
    

    return 0;
}
