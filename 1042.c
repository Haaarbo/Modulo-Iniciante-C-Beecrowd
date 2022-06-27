#include <stdio.h>
#define TAM 3

int main()
{
    int n[TAM], menor[TAM] = {0}, i = 0;

    scanf("%i %i %i", &n[0], &n[1], &n[2]);

    for(i = 0; i < TAM; i++)
        menor[i] = n[i];
    //copiando valores do array para menor

    for(i = 0; i < TAM; i++)
        if(n[i] < menor[i])
            menor[i] = n[i];
    //comparando os valores, e o array menor[] pega os menores valores

    for(i = 0; i < TAM; i++)
        printf("%i\n", menor[i]);

    printf("\n");
    for(i = 0; i < TAM; i++)
        printf("%i\n", n[i]);
    //printando resultados
    
    return 0;
}