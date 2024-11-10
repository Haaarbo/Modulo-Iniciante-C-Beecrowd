#include <stdio.h>

int main() {
    int N, cont, out = 1;

    scanf("%d", &N);
    //quantidade de linhas a serem impressas definida por N
    for(int i = 0; i < N; i++)
    {
        for(cont = 0; cont < 3; cont++)
        {
            printf("%d ", out);
            out++;
        }
        out++;
        printf("PUM\n");
    }
        
    return 0;
}