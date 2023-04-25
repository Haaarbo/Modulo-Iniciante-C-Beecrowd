#include <stdio.h>

int main()
{
    int M = 1, N = 1, Sum, cont;
    
    while(1)
    {
        scanf("%d %d", &M, &N);
        if(M > 0 && N > 0)
        {
            if(M > N)
            {
                int menor = N;
                N = M;
                M = menor;
            }
            
            Sum = 0;
            for(cont = M; cont <= N; cont++)
            {
                printf("%d ", cont);
                Sum += cont;
            }
            printf("Sum=%d\n", Sum);
        }
        
        else
            break;
    }
    
    
    return 0;
}
