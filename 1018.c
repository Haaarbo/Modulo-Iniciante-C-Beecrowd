#include <stdio.h>
 
int main() {
 
    int N;
    int cont100, cont50, cont20, cont10, cont5, cont2, cont1;
    int resto100, resto50, resto20, resto10, resto5, resto2;
    
    scanf("%i", &N);
    
    cont100 = N/100;
    resto100 = N%100;

    cont50 = resto100/50;
    resto50 = resto100%50;

    cont20 = resto50/20;
    resto20 = resto50%20;

    cont10 = resto20/10;
    resto10 = resto20%10;

    cont5 = resto10/5;
    resto5 = resto10%5;

    cont2 = resto5/2;
    resto2 = resto5%2;

    cont1 = resto2/1;

    printf("%i\n", N);
    printf("%i nota(s) de R$ 100,00\n", cont100);
    printf("%i nota(s) de R$ 50,00\n", cont50);
    printf("%i nota(s) de R$ 20,00\n", cont20);
    printf("%i nota(s) de R$ 10,00\n", cont10);
    printf("%i nota(s) de R$ 5,00\n", cont5);
    printf("%i nota(s) de R$ 2,00\n", cont2);
    printf("%i nota(s) de R$ 1,00\n", cont1);

    return 0;
}