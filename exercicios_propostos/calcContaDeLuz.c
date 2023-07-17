#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

void calckw(float v_sal, float q_kw, float *v_kw, float *v_rs, float *v_dsc){
    (*v_kw) = v_sal / 1000;
    (*v_rs) = (*v_kw) * q_kw;
    (*v_dsc) = (*v_rs) * 0.85;
}

int main(int argc, char const *argv[])
{
    setlocale(LC_ALL, "Portuguese");
    //var
    float   Sal_M, QTD_KW, Val_kw, val_reais, val_desc;
    //ini
    printf("Digite o valor do salário mínimo: ");
    scanf("%f", &Sal_M);
    printf("Digite a quantidade de quilowatts: ");
    scanf("%f", &QTD_KW);

    calckw (Sal_M, QTD_KW, &Val_kw, &val_reais, &val_desc);

    printf("Valor de um KW (em R$): %.2f\n", Val_kw);
    printf("Valor a ser pago pela residência (em R$): %.2f\n", val_reais);
    printf("Valor com desconto (em R$): %.2f\n", val_desc);

    return 0;
}