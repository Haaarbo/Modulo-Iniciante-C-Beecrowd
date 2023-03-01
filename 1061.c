#include <stdio.h>

int main()
{
    int diaInicio, horaInicio, minutoInicio, segundoInicio;
    int diaFim, horaFim, minutoFim, segundoFim;
    int diaDif, horaDif, minutoDif, segundoDif;
    
    printf("Dia ");
    scanf("%i", &diaInicio);
    printf("\n");
    
    scanf("%i", &horaInicio);
    printf(" : ");
    scanf("%i", &minutoInicio);
    printf(" : ");
    scanf("%i", &segundoInicio);
    printf("\n");
    
    
    printf("Dia ");
    scanf("%i", &diaFim);
    printf("\n");
    
    scanf("%i", &horaFim);
    printf(" : ");
    scanf("%i", &minutoFim);
    printf(" : ");
    scanf("%i", &segundoFim);
    printf("\n");


    diaDif = diaFim - diaInicio;


    horaDif = horaFim - horaInicio;

    if(horaDif >= 24)
    {
        horaDif -= 24;
        diaDif++;
    }

    if(horaDif < 0)
    {
        horaDif += 24;
        diaDif--;
    }


    minutoDif = minutoFim - minutoInicio;

    if(minutoDif >= 60)
    {
        minutoDif -= 60;
        horaDif++;
    }

    if(minutoDif < 0)
    {
        minutoDif += 60;
        horaDif--;
    }


    segundoDif = segundoFim - segundoInicio;

    if(segundoDif < 0)
    {
        segundoDif += 60;
        minutoDif--;
    }

    if(segundoDif >= 60)
    {
        segundoDif -= 60;
        minutoDif++;
    }


    printf("%d dia(s)\n", diaDif);
    printf("%d hora(s)\n", horaDif);
    printf("%d minuto(s)\n", minutoDif);
    printf("%d segundo(s)\n", segundoDif);

    return 0;
}
