#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char const *argv[])
{
    setlocale(LC_ALL, "Portuguese");
    //var
    
    int i, ant1, ant2, atual;
    //ini
    printf("Oito primeiros números de fibonacci:\n");
    ant2 = 0;
    printf("%d ", ant2);

    ant1 = 1;
    printf("%d ", ant1);
    

    for ( i = 3; i <= 8; i++)
    {
        atual = ant1 + ant2;
        printf("%d ", atual);
        ant2 = ant1;
        ant1 = atual;
    }
    
    
    return 0;
}
