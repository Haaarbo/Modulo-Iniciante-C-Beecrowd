#include <stdio.h>

int main()
{
    int tempo, velocidade;
    float distancia, litros;

    scanf("%i %i", &tempo, &velocidade);

    distancia = velocidade*tempo;
    litros = distancia/12;

    printf("%.3f\n", litros);

    return 0;
}