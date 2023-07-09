#include <stdio.h>

int imprime(int m[][4], int n){
    int i, j;
    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < 4; j++)
        {
            printf("%d ", m[i][j]);
        }

        printf("\n");   
    }
}

int main(){
    //var
    int mat[3][4]={{1,2,3,4},
                   {50,60,70,80},
                   {91,101,111,121}};
    //ini
    imprime(mat, 3);

    return 0;
}