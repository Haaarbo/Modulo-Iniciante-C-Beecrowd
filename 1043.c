#include <stdio.h>
#include <stdbool.h>

bool ehTriangulo = false;

bool verificaSeTriangulo(double a, double b, double c)
{
    if((b-c >= 0 ? b-c : c-b) < a && a < b + c)
        if((a-c >= 0 ? a-c : c-a) < b && b < a + c)
            if((a-b >= 0 ? a-b : b-a) < c && c < a + b)
                ehTriangulo = true;
                
    return ehTriangulo;
}

int main()
{
    double A, B, C, resultado;
    
    scanf("%lf %lf %lf", &A, &B, &C);
    
    ehTriangulo = verificaSeTriangulo(A,B,C);
    
    if(ehTriangulo == true)
    {
        resultado = A+B+C;
        printf("Perimetro = %.1lf\n", resultado);
    }
    
    else
    {
        resultado = (A+B)*C/2;
        printf("Area = %.1lf\n", resultado);
    }

    return 0;
}