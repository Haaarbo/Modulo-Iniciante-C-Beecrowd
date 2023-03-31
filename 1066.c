#include <stdio.h>

int main()
{
    int v[6];
    int contPar = 0, contImp = 0, contPos = 0, contNeg = 0;
    
    for(int i = 0; i < 5; i++)
    {
        scanf("%i", &v[i]);
        
        if(v[i]%2 == 0)
            contPar++;
        else
            contImp++;
            
        if(v[i] > 0)
            contPos++;
        else if(v[i] < 0)
            contNeg++;
    }
    
    printf("%d valor(es) par(es)\n", contPar);
    printf("%d valor(es) impar(es)\n", contImp);
    printf("%d valor(es) positivo(s)\n", contPos);
    printf("%d valor(es) negativo(s)\n", contNeg);
    return 0;
}