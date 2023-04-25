#include <stdio.h>
 
int main()
{
    int X = 0, Y = -1;
    
    while(1)
    {
        scanf("%d", &X);
        scanf("%d", &Y);
        
        if(X > Y)
            printf("Decrescente\n");
            
        else if(X < Y)
            printf("Crescente\n");
            
        else
            break;
    }
    return 0;
}
