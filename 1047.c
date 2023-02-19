#include <stdio.h>

int main()
{
    int horaInicial, horaFinal;
    int minutoInicial, minutoFinal;
    int difHora = 0, difMinuto = 0;
    //variaveis do tempo inicial, do tempo final e de sua diferenca

    scanf("%d %d %d %d", &horaInicial, &minutoInicial, &horaFinal, &minutoFinal);

    if(minutoInicial == minutoFinal && horaInicial == horaFinal)
        {
            horaFinal += 24;
            difMinuto = 0;
        }

    else{
        if(minutoInicial > minutoFinal)
        {
            difHora--;
            minutoFinal += 60;
        }

        if(horaInicial > horaFinal)
            horaFinal += 24;
    }

    difHora += horaFinal - horaInicial;
    difMinuto += minutoFinal - minutoInicial;

    printf("O JOGO DUROU %i HORA(S) E %i MINUTO(S)\n", difHora, difMinuto);
        

    return 0;
}
