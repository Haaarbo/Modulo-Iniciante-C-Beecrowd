#include <stdio.h>

int main() {
    int N;

    scanf("%d", &N);
    for(int numeroAtual = 1; numeroAtual <= N; numeroAtual++)
    {
        int quadrado = numeroAtual*numeroAtual;
        int cubo = numeroAtual*numeroAtual*numeroAtual;
        printf("%d ", numeroAtual);
        printf("%d ", quadrado);
        printf("%d\n", cubo);
    }
    
    return 0;
}