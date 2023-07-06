#include <stdio.h>

int main(){
    //var
    int V[5];
    float M;
    //ini
    V[0] = 50;
    V[1] = 40;
    V[2] = 30;
    V[3] = 20;
    V[4] = 10;

    M = (V[0] + V[1] + V[2] + V[3] + V[4]) / 5;

    printf("Resultado: %f", M);
    return 0;
}