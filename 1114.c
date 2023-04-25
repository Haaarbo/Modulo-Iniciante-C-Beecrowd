#include <stdio.h>
 
int main() 
{
    int senha = 2002, entrada = 0;
    
    while(entrada != senha)
    {
        scanf("%i", &entrada);
        if(entrada != senha)
            printf("Senha Invalida\n");
        else
            printf("Acesso Permitido\n");
    }
    return 0;
}
