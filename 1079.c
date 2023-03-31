#include <stdio.h>

int main()
{
    int N;
    float num1, num2, num3, mediaPond;
    
    scanf("%i", &N);
    
    for(int i = 0; i < N; i++)
    {
        scanf("%f %f %f", &num1, &num2, &num3);
        mediaPond = (num1*2 + num2*3 + num3*5)/10;
        printf("%0.1f\n", mediaPond);
    }

    return 0;
}