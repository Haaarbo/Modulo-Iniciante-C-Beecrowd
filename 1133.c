#include <stdio.h>

int main() {
    int X, Y;
    
    scanf("%i %i", &X, &Y);
    if (X > Y)
    {
        int aux = X;
        X = Y;
        Y = aux;
    }
    
    for(int i = X+1; i < Y; i++)
        if(i % 5 == 2 || i % 5 == 3)
            printf("%d\n", i);
    
    return 0;
}