#include <stdio.h>

int main(int argc, char *argv[]){
    //var
    int i;
    //ini
    if (argc > 1)
    {
        printf("Foram inseridos %d argumentos:\n", argc);
        for ( i = 0; i < argc; i++)
        {
            printf("%s\n", argv[i]);
        }  
    } 
    else
    {
        printf("Não foram inseridos argumentos no programa.\n");
    }
    
    
}