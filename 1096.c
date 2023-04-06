#include <stdio.h>
#define TAM 9

int main() {
 
    int I, J = 7;

    for(I = 1; I <= TAM; I += 2)
    {
        printf("I=%d J=%d\n", I, J);
        J--;
        printf("I=%d J=%d\n", I, J);
        J--;
        printf("I=%d J=%d\n", I, J);
        J = 7;
    }
    return 0;
}
