#include <stdio.h>

int main()
{
    int hora1, hora2, tempoJogo;
    
    scanf("%i %i", &hora1, &hora2);
    
    if(hora1 >= hora2)
        hora2 += 24;
        
    tempoJogo = hora2 - hora1;
    
    if(tempoJogo >= 1)
        printf("O JOGO DUROU %i HORA(S)\n", tempoJogo);
        

    return 0;
}
