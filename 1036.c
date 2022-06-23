#include <stdio.h>
#include <math.h>

int main()
{
    double A, B, C, delta, R1, R2;

    scanf("%lf %lf %lf", &A, &B, &C);

    delta = (pow(B, 2)-4*A*C);

    if(delta < 0 || A == 0)
        printf("Impossivel calcular\n");

    else
    {
        R1 = (sqrt(delta)-B)/(2*A);
        R2 = (-(sqrt(delta)) - B)/(2*A);
        printf("R1 = %.5lf\n", R1);
        printf("R2 = %.5lf\n", R2);
    }

    return 0;
}