#include <stdio.h>

int main()
{
    int N, Quantia, coelhoT = 0, sapoT = 0, ratoT = 0, total = 0;
    float coelhoPerc, sapoPerc, ratoPerc;
    char Tipo;
    
    scanf("%d", &N);
    for(int i = 0; i < N; i++)
    {
        scanf("%d %c", &Quantia, &Tipo);
        
        switch(Tipo)
        {
            case 'C':
                coelhoT += Quantia;
                break;
                
            case 'S':
                sapoT += Quantia;
                break;
                
            case 'R':
                ratoT += Quantia;
                break;
                
            default:
                printf("Tipo de cobaia nao identificada...\n");
        }
    }
    
    total = coelhoT+sapoT+ratoT;
    
    coelhoPerc = (float)coelhoT/total;
    sapoPerc = (float)sapoT/total;
    ratoPerc = (float)ratoT/total;
    
    printf("Total: %i cobaias\n", total);
    printf("Total de coelhos: %i\n", coelhoT);
    printf("Total de ratos: %i\n", ratoT);
    printf("Total de sapos: %i\n", sapoT);
    
    printf("Percentual de coelhos: %.2f %%\n", coelhoPerc*100);
    printf("Percentual de ratos: %.2f %%\n", ratoPerc*100);
    printf("Percentual de sapos: %.2f %%\n", sapoPerc*100);
    
    return 0;
}
