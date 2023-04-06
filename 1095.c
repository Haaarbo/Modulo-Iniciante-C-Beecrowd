#include <stdio.h>
#define TAM 60

int main() {
 
    int I = 1, J;

    for(J = TAM; J >= 0; J -= 5)
    {
        printf("I=%d J=%d\n", I, J);
        I+=3;
    }
    return 0;
}
