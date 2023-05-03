#include <stdio.h>

float atribuirNota()
{
    float nota;
    
    while(1)
    {
        scanf("%f", &nota);
        if(nota >= 0 && nota <= 10)
            break;
            
        else
            printf("nota invalida\n");
    }
    return nota;
}

int main()
{
    float nota1;
    float nota2;
    float media;
    int X;
    
    while(X != 2)
    {
        float nota1 = atribuirNota();
        float nota2 = atribuirNota();
        float media = (nota1+nota2)/2;
        
        printf("media = %.2f\n", media);
        printf("novo calculo (1-sim 2-no)\n");

        
        for(;X != 2;)
        {
            scanf("%d", &X);
            switch(X)
            {
                case 1:
                    break;
                    
                case 2:
                    printf("Finalizando...\n\n");
                    break;
                
                default:
                    printf("novo calculo (1-sim 2-no)\n");
                    break;
            }
        }
        
        
    }

    

    return 0;
}
