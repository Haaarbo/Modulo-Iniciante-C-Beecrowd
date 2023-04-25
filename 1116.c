#include <stdio.h>
 
int main() 
{
    int X, Y, N;
    float divisao;
    
    scanf("%d", &N);
    for(int i = 0; i < N; i++)
    {
        scanf("%d", &X);
        scanf("%d", &Y);
        
        if(Y == 0)
            printf("divisao impossivel\n");
            
        else
        {
            divisao = (float)X/Y;
            printf("%0.1f\n", divisao);
        }
    }
    
    return 0;
}
