#include <stdio.h>

int main()
{
    int distancia, tempo;

    scanf("%i", &distancia);
    
    /*
    tempo = distancia/30 * 60;
    30 pois representa a diferenca entre
    as velocidades de X e Y, e 60 sendo 
    o tempo convertido para minutos,
    portanto, arredondando a conta, tem-se:*/

    tempo = distancia*2;

    printf("%i minutos\n", tempo);
    
    return 0;
}