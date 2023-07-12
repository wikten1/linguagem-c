#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char const *argv[])
{
    setlocale(LC_ALL, "Portuguese");
    //var
    int Seg = 0, Min = 0, Hora = 0;
    //ini
    printf("Digite quantos segundos foram cronometrados: ");
    scanf("%d", &Seg);

    if (Seg > 60)
    {
        Min = Seg / 60;
        Seg = Seg % 60;
    }

    if (Min > 60)
    {
        Hora = Min / 60;
        Min = Min % 60;
    }

    printf("Horas: %d\n", Hora);
    printf("Minutos: %d\n", Min);
    printf("Segundos: %d", Seg);
    
    return 0;
}
