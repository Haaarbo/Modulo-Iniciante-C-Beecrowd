#include <stdio.h>
#include <math.h>

int main()
{
    double A, B, C, maior, meio, menor;

    scanf("%lf %lf %lf", &A, &B, &C);

    maior = (A > B) ? A : B;
    maior = (C > maior) ? C : maior;

    menor = (A < B) ? A : B;
    menor = (C < menor) ? C : menor;

    meio = (A <= B && A >= C || A <= C && A >= B) ? A : meio;
    meio = (B <= A && B >= C || B <= C && B >= A) ? B : meio;
    meio = (C <= A && C >= B || C <= B && C >= A) ? C : meio;
    
    A = maior;
    B = meio;
    C = menor;
    
    if(A >= B+C)
        printf("NAO FORMA TRIANGULO\n");
    
    else
    {
        if(pow(A, 2) == pow(B, 2) + pow(C, 2))
            printf("TRIANGULO RETANGULO\n");
        
        else if(pow(A, 2) > pow(B, 2) + pow(C, 2))
            printf("TRIANGULO OBTUSANGULO\n");
        
        else if(pow(A, 2) < pow(B, 2) + pow(C, 2))
            printf("TRIANGULO ACUTANGULO\n");
        
        else if(A == B && B == C)
            printf("TRIANGULO EQUILATERO\n");
            
        else
            printf("TRIANGULO ISOCELES\n");
    }   
    
    

    return 0;
}