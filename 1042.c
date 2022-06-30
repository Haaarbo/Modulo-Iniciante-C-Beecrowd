#include <stdio.h>

int main()
{
    int n1, n2, n3, maior, meio, menor;

    scanf("%i %i %i", &n1, &n2, &n3);

    maior = (n1 > n2) ? n1 : n2;
    maior = (n3 > maior) ? n3 : maior;

    menor = (n1 < n2) ? n1 : n2;
    menor = (n3 < menor) ? n3 : menor;

    meio = (n1 <= n2 && n1 >= n3 || n1 <= n3 && n1 >= n2) ? n1 : meio;
    meio = (n2 <= n1 && n2 >= n3 || n2 <= n3 && n2 >= n1) ? n2 : meio;
    meio = (n3 <= n1 && n3 >= n2 || n3 <= n2 && n3 >= n1) ? n3 : meio;

    printf("%i\n%i\n%i\n\n", menor, meio, maior);
    printf("%i\n%i\n%i\n", n1, n2, n3);

    return 0;
}
