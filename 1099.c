#include <stdio.h>

int main()
{
    int X, Y, N;
    int impares;
    
    scanf("%d", &N);
    
    for(; N > 0; N--)
    {
        impares = 0;
        scanf("%d", &X);
        scanf("%d", &Y);
        
        //jogando o menor valor para X para uma contagem crescente
        //p.e.: no codigo, pode-se contar de -5 a 6, não o inverso
        if(X > Y)
        {
            int menor = Y;
            Y = X;
            X = menor;
        }
         
        //X+1 para nao incluir o X e < Y para não incluir o Y
        for(int i = X+1; i < Y; ++i)
            if(i%2 != 0)
                impares += i;
        
        printf("%d\n", impares);
    }
        
    return 0;
}
