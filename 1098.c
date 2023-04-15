#include <stdio.h>
#define TAM 2

int main() {
 
    float I, J;

    for(I = 0; I <= TAM+0.2; I += 0.2)
    {
        J = I;
        
        if(I - (int)I < 0.1)
        {
            J++;
            printf("I=%.f J=%.f\n", I, J);
            J++;
            printf("I=%.f J=%.f\n", I, J);
            J++;
            printf("I=%.f J=%.f\n", I, J);
        }
        
        else
        {
            J++;
            printf("I=%0.1f J=%0.1f\n", I, J);
            J++;
            printf("I=%0.1f J=%0.1f\n", I, J);
            J++;
            printf("I=%0.1f J=%0.1f\n", I, J);
        }
    }
    return 0;
}
