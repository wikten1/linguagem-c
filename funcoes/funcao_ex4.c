#include <stdio.h>

float maior (float Num1, float Num2);

int main(){
    //var
    float x, y, m;
    //ini
    printf("Insira um valor:\n");
    scanf("%f", &x);
    printf("Insira mais um valor:\n");
    scanf("%f", &y);

    m = maior(x,y);

    printf("Maior: %.2f\n", m);

    return 0;
}

float maior (float Num1, float Num2) {
    if (Num1 > Num2)
    {
        return Num1;
    } else{
        return Num2;
    }
}