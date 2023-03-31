#include <stdio.h>

int main()
{
    int N, X;
    
    scanf("%i", &N);
    
    for(int i = 1; i <= 10; i++)
        printf("%d x %i = %i\n", i, N, i*N);

    return 0;
}