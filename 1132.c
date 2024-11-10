#include <stdio.h>

int main() {
    int X, Y, somatorio = 0;
    
    scanf("%i %i", &X, &Y);
    if (X > Y)
    {
        int aux = X;
        X = Y;
        Y = aux;
    }
    
    for(int i = X; i <= Y; i++)
        if(i % 13 != 0)
            somatorio += i;
    
    printf("%i\n", somatorio);
    return 0;
}