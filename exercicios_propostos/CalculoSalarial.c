#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

float calcSalGest(float n_hr,float s_min){
    float hora_t, Sal_b, imp, sal_receb;
    hora_t = s_min/2.0;
    Sal_b = n_hr * hora_t;
    imp = (Sal_b * 3) / 100;
    sal_receb = Sal_b - imp;
    return sal_receb;
}

int main(int argc, char const *argv[])
{
    setlocale(LC_ALL, "Portuguese");
    //var
    float ValSalMin, NumHoras, salAReceb;
    //ini
    printf("Número de horas trabalhadas: ");
    scanf("%f", &NumHoras);
    printf("Valor do salário mínimo vigente: ");
    scanf("%f", &ValSalMin);

    salAReceb = calcSalGest(NumHoras, ValSalMin);
    printf("O salário que o gerente vai receber é: R$ %.2f\n", salAReceb);


    return 0;
}
