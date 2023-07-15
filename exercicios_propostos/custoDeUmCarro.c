#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float calcLucroDist (float p_fab, float por_dist){
    return (p_fab * por_dist)/100;
}

float calcImpostos (float p_fab, float por_imp){
    return (p_fab * por_imp)/100;
}

float calcPrecoFinal (float p_fab, float v_dist, float v_imp){
    return p_fab + v_dist + v_imp;
}

int main(int argc, char const *argv[])
{
    setlocale(LC_ALL, "Portuguese");
    //var
    float Preco_F, Porce_dist, Porce_i, Lucro_dist, Imp, Vlr_F;
    //ini
    printf("Insira o preço de fabrica: ");
    scanf("%f", &Preco_F);
    printf("Insira o percentual de lucro do distribuidor: ");
    scanf("%f", &Porce_dist);
    printf("Insira o percentual de imposto: ");
    scanf("%f", &Porce_i);

    Lucro_dist = calcLucroDist(Preco_F, Porce_dist);
    Imp = calcImpostos(Preco_F, Porce_i);
    Vlr_F = calcPrecoFinal(Preco_F, Lucro_dist, Imp);

    printf("Lucro do distribuidor: R$ %.2f\n", Lucro_dist);
    printf("Imposto: R$ %.2f\n", Imp);
    printf("Valor final: R$ %.2f\n", Vlr_F);
    


    return 0;
}
