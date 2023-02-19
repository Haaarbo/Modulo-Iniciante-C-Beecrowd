#include <stdio.h>

int main()
{
    int horaInicio, minutoInicio;
    int horaFim, minutoFim;
    //horario inicial e final
    
    int horaDif, minutoDif;
    //diferenca entre os horarios
    
    //a seguir recebendo valores

    scanf("%i %i", &horaInicio, &minutoInicio);
    scanf("%i %i", &horaFim, &minutoFim);
    
    if(horaInicio == horaFim && minutoInicio == minutoFim)
    {
        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
    }
    
    else
    {
        horaDif = horaFim - horaInicio; 
        minutoDif = minutoFim - minutoInicio;
        //diferencas de horario bruto
        
        //corrigindo os horarios:
        
        //para quando a minutagem passa de 60, adiciona-se uma hora
        //e se corrige os minutos
        if(minutoDif >= 60)
        {
            minutoDif -= 60;
            horaDif++;
        }
        
        //para quando a minutagem é inferior a 0, retira-se uma hora
        //e se corrige os minutos
        if(minutoDif < 0) 
        {
            minutoDif += 60;
            horaDif--;
        }
        
        //para quando a hora e inferior a 0, se tira a diferenca
        if(horaDif < 0)
            horaDif += 24;
        
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", horaDif, minutoDif);
    }

    return 0;
}
