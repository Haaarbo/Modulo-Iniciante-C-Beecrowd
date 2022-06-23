#include <stdio.h>

enum codigo {Cachorro_Quente = 1, xSalada, xBacon, Torrada, Refri};
 
int main() {
    int entrada, quantidade;
    float total;
    
    scanf("%i %i", &entrada, &quantidade);
    
    switch(entrada)
    {
        case Cachorro_Quente:
            total = 4*quantidade;
            break;
        
        case xSalada:
            total = 4.5*quantidade;
            break;
            
        case xBacon:
            total = 5*quantidade;
            break;
            
        case Torrada:
            total = 2*quantidade;
            break;
            
        case Refri:
            total = 1.5*quantidade;
            break;
    }
    
    printf("Total: R$ %.2f\n", total);
 
    return 0;
}