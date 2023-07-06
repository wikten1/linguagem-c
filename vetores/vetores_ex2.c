#include <stdio.h>

int main(){
    //var
    int V[5] = {10, 20, 30, 40, 50};
    int i;
    float S = 0;
    //ini
    for ( i = 0; i < 5; i++)
    {
        S += V[i];
    }
    
    printf("Resultado: %f", S/5);
    return 0;
}