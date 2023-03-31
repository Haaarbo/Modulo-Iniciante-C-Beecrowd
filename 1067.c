#include <stdio.h>

int main()
{
    int X;
    
    scanf("%i", &X);
    for(int i = 1; i <= X; i += 2)
        if(i%2 != 0)
            printf("%i\n", i);
        
    return 0;
}