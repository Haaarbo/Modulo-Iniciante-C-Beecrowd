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
    float nota1 = atribuirNota();
    float nota2 = atribuirNota();
    float media = (nota1+nota2)/2;

    printf("media = %.2f\n", media);

    return 0;
}
