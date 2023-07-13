#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char const *argv[])
{
    setlocale (LC_ALL, "Portuguese");
    //var
    float Ntrab, AVS, ExamF, Media;

    //ini
    printf("Digite a nota do Trabalho de laborat�rio: ");
    scanf("%f", &Ntrab);
    printf("Digite a nota da Avalia��o semestral: ");
    scanf("%f", &AVS);
    printf("Digite a nota do exame final: ");
    scanf("%f", &ExamF);

    Media = (Ntrab*2 + AVS*3 + ExamF*5)/10;
    printf("M�dia: %.2f\n", Media);

    if (Media <= 10 && Media >= 8)
    {
        printf("Conseito: A");
    } else
    {
        if (Media < 8 && Media >= 7)
        {
            printf("Conseito: B");
        }
        else if (Media < 7 && Media >= 6)
        {
            printf("Conseito: C");
        }
        else if (Media < 6 && Media >= 5)
        {
            printf("Conseito: D");
        }
        else if (Media < 5 && Media >= 0 )
        {
            printf("Conseito: E");
        }
        else
        {
            printf("Conseito inválido!!!");
        } 
    }
    
    
    return 0;
}
