#include <stdio.h>

int main()
{
    int X;
    
    scanf("%d", &X);
    //X+12 pois contará 6 pares e 6 impares a partir de X
    for(int i = X; i < X+12; i++)
        if(i%2 != 0)
            printf("%d\n", i);
        
    return 0;
}