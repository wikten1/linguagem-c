#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(int argc, char const *argv[])
{
    setlocale(LC_ALL, "Portuguese");
    //var
    int i, j, Resp;
    // ini
    for ( i = 1 ; i < 11; i++)
    {
        for ( j = 1; j < 11; j++)
        {
            printf("%d x %d = %d\n", i, j, i*j);
        }
        printf("\n\n");
    }
    
    return 0;
}
