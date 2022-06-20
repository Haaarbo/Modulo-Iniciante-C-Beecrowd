#include <stdio.h>

int main()
{
    int a, b, c, maior;

    scanf("%i %i %i", &a, &b, &c);

    maior = (a+b+abs(a-b))/2;
    maior = (c+maior+abs(c-maior))/2;

    printf("%i eh o maior\n", maior);

    return 0;
}