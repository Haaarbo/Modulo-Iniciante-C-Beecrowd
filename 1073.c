#include <stdio.h>

int main()
{
    int N;
    
    scanf("%i", &N);
    
    for(int i = 2; i <= N; i+=2)
        if(i % 2 == 0)
            printf("%i^2 = %i\n", i, i*i);

    return 0;
}
