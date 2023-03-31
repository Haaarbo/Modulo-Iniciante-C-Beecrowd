#include <stdio.h>

int main()
{
    int N, X;
    
    scanf("%i", &N);
    
    for(int i = 0; i < N; i++)
    {
        scanf("%i", &X);
        if(X == 0)
            printf("NULL\n");
        
        else
        {
            if(X%2 == 0)
                printf("EVEN ");
            
            else
                printf("ODD ");
                
            if(X > 0)
                printf("POSITIVE\n");
                
            else if(X < 0)
                printf("NEGATIVE\n");
        }
            
    }

    return 0;
}