#include <stdio.h>
#define TAM 100

int main()
{
    int maior, posicao, entrada;
    
    scanf("%i", &maior);
    posicao = 1;
    
    for(int i = 2; i <= TAM; i++)
    {
        scanf("%i", &entrada);
        if(entrada > maior)
        {
            maior = entrada;
            posicao = i;
        }
    }
    
    printf("%i\n%d\n", maior, posicao);

    return 0;
}
